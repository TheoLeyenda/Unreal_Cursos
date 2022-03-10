// Copyright Theo Leyenda 2022


#include "QuestSystem/TaskActivateInteractTrigger.h"
#include "Kismet/GameplayStatics.h"
#include "QuestSystem/QuestActorComponentID.h"

void UTaskActivateInteractTrigger::FindInformation()
{
	
	Super::FindInformation();
	
	TArray<AActor*> Actors;

	InteractTriggers.Empty();
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AInteractTrigger::StaticClass(),Actors);

	if(Actors.Num() > 0)
	{
		for(AActor* Actor : Actors)
		{
			AInteractTrigger* InteractTrigger = Cast<AInteractTrigger>(Actor);
			if(InteractTrigger)
			{
				InteractTrigger->OnCompleteInteractTrigger.AddDynamic(this, &UTaskActivateInteractTrigger::SettingDataTask);
				InteractTriggers.Add(InteractTrigger);
			}
		}
	}
}

void UTaskActivateInteractTrigger::SettingDataTask(AInteractTrigger* InteractTrigger)
{
	if(!BuildingScapeCharacter){return;}

	if(!BuildingScapeCharacter->PlayerInventoryComponent){return;}

	UE_LOG(LogTemp, Warning, TEXT("SI"));
	SettingDataBaseTask(false);
	
	SendDataPlayer.LastInteractActorInfo.ActorBlueprint = InteractTrigger->GetClass();

	UQuestActorComponentID* QuestActorComponentID = Cast<UQuestActorComponentID>(InteractTrigger->GetComponentByClass(UQuestActorComponentID::StaticClass()));
	SendDataPlayer.LastInteractActorInfo.ID = QuestActorComponentID->ID;
	
	SendEventUpdateTask(false);
}