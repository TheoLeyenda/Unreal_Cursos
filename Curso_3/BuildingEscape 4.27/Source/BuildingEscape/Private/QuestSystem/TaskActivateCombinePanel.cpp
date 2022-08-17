// Copyright Theo Leyenda 2022


#include "QuestSystem/TaskActivateCombinePanel.h"
#include "Kismet/GameplayStatics.h"

void UTaskActivateCombinePanel::FindInformation()
{
	Super::FindInformation();
	
	TArray<AActor*> Actors;

	CombinePanels.Empty();
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACombinePanel::StaticClass(),Actors);

	if(Actors.Num() > 0)
	{
		for(AActor* Actor : Actors)
		{
			ACombinePanel* CombinePanel = Cast<ACombinePanel>(Actor);
			if(CombinePanel)
			{
				CombinePanel->OnCompleteCombinePanel.AddDynamic(this, &UTaskActivateCombinePanel::SettingDataTask);
				CombinePanels.Add(CombinePanel);
			}
		}
	}
}

void UTaskActivateCombinePanel::SettingDataTask(ACombinePanel* CombinePanel)
{
	if(!BuildingScapeCharacter){return;}

	if(!BuildingScapeCharacter->PlayerInventoryComponent){return;}
	
	SettingDataBaseTask(false);
	
	SendDataPlayer.LastInteractActorInfo.ActorBlueprint = CombinePanel->GetClass();

	UQuestActorComponentID* QuestActorComponentID = Cast<UQuestActorComponentID>(CombinePanel->GetComponentByClass(UQuestActorComponentID::StaticClass()));
	SendDataPlayer.LastInteractActorInfo.ID = QuestActorComponentID->ID;
	
	SendEventUpdateTask(false);
}
