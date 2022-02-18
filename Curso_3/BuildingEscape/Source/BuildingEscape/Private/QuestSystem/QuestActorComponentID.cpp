// Copyright Theo Leyenda 2022


#include "QuestSystem/QuestActorComponentID.h"

UQuestActorComponentID::UQuestActorComponentID()
{
	PrimaryComponentTick.bCanEverTick = false;
	ID = -1;
	BlueprintClass = nullptr;
}

void UQuestActorComponentID::BeginPlay()
{
	Super::BeginPlay();
	BlueprintClass = GetOwner()->GetClass();
}

