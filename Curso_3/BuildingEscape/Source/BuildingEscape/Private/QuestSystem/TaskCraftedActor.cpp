// Copyright Theo Leyenda 2022


#include "QuestSystem/TaskCraftedActor.h"
#include "Kismet/GameplayStatics.h"
#include "QuestSystem/QuestActorComponentID.h"

void UTaskCraftedActor::FindInformation()
{
	Super::FindInformation();

	TArray<AActor*> Actors;

	CraftingTables.Empty();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACraftingTable::StaticClass(),Actors);

	if(Actors.Num() > 0)
	{
		for(AActor* Actor : Actors)
		{
			if(Actor)
			{
				ACraftingTable* CraftingTable = Cast<ACraftingTable>(Actor);
				if(CraftingTable)
				{
					CraftingTable->OnCraftingActor.AddDynamic(this, &UTaskCraftedActor::SettingDataTask);
					CraftingTables.Add(CraftingTable);
				}
			}
		}
	}
}

void UTaskCraftedActor::SettingDataTask(TSubclassOf<AActor> ActorClass, ACraftingTable* CraftingTable)
{
	if(!BuildingScapeCharacter){return;}

	if(!BuildingScapeCharacter->PlayerInventoryComponent){return;}
	
	
	UActorComponent* ActorComponent = CraftingTable->GetComponentByClass(UQuestActorComponentID::StaticClass());
	
	if(ActorComponent == nullptr){return;}
		
	SettingDataBaseTask(false);

	SendDataPlayer.LastInteractActorInfo.ActorBlueprint = ActorClass;

	UQuestActorComponentID* QuestActorComponentID = Cast<UQuestActorComponentID>(ActorComponent);
	SendDataPlayer.LastInteractActorInfo.ID = QuestActorComponentID->ID;
	
	SendEventUpdateTask(false);
}
