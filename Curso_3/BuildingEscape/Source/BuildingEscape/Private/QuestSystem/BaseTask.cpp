// Copyright Theo Leyenda 2022


#include "QuestSystem/BaseTask.h"
#include "QuestSystem/QuestEvaluatorComponent.h"
#include "BuildingScapeCharacter.h"

UBaseTask::UBaseTask(){}

void UBaseTask::SendEventUpdateTask(bool bForceSend)
{
	UE_LOG(LogTemp, Warning, TEXT("Envie la task"));
	OnUpdateTask.Broadcast(SendDataPlayer, bForceSend);
}

void UBaseTask::FindInformation()
{
	BuildingScapeCharacter = Cast<ABuildingScapeCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());

	if(!BuildingScapeCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("NO SE ENCONTRO AL BUILDING CHARACTER"))
	}
}

void UBaseTask::SettingDataBaseTask(bool SendEvent)
{
	if(!BuildingScapeCharacter){return;}

	if(!BuildingScapeCharacter->PlayerInventoryComponent){return;}
	
	SendDataPlayer.Fatness = BuildingScapeCharacter->GetPlayerFatness();
	SendDataPlayer.Lifes = BuildingScapeCharacter->GetPlayerLifes();

	SendDataPlayer.InventoryComponent = BuildingScapeCharacter->PlayerInventoryComponent;

	SendDataPlayer.NeedItems.Empty();
	for(UItem* Item : BuildingScapeCharacter->PlayerInventoryComponent->Items)
	{
		SendDataPlayer.NeedItems.Add(Item->GetClass());
	}
	
	SendDataPlayer.LastInteractActorInfo.ActorBlueprint = nullptr;
	SendDataPlayer.LastInteractActorInfo.ID = -1;

	if(SendEvent)
	{
		SendEventUpdateTask(SendEvent);
	}
}
