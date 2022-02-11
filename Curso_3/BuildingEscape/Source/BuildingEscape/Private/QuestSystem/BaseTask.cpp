// Copyright Theo Leyenda 2022


#include "QuestSystem/BaseTask.h"
#include "QuestSystem/QuestEvaluatorComponent.h"
#include "BuildingScapeCharacter.h"

UBaseTask::UBaseTask(){}

void UBaseTask::SendEventUpdateTask()
{
	OnUpdateTask.Broadcast(SendDataPlayer);
}

void UBaseTask::FindInformation()
{
	BuildingScapeCharacter = Cast<ABuildingScapeCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());

	if(!BuildingScapeCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("NO SE ENCONTRO AL BUILDING CHARACTER"))
	}
}
