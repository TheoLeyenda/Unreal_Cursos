// Copyright Theo Leyenda 2022


#include "QuestSystem/Task.h"
#include "QuestSystem/QuestEvaluatorComponent.h"
#include "BuildingScapeCharacter.h"

// Sets default values
ATask::ATask()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void ATask::BeginPlay()
{
	Super::BeginPlay();
	FindInformation();
}

void ATask::SendEventUpdateTask()
{
	OnUpdateTask.Broadcast(SendDataPlayer);
}

void ATask::FindInformation(){}
