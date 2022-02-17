// Copyright Theo Leyenda 2022


#include "QuestSystem/QuestActorComponentID.h"

int UQuestActorComponentID::CountQuestCreated; 

UQuestActorComponentID::UQuestActorComponentID()
{
	PrimaryComponentTick.bCanEverTick = false;
	ID = -1;
	BlueprintClass = nullptr;

	CountQuestCreated++;

	ID = CountQuestCreated;
}

void UQuestActorComponentID::BeginPlay()
{
	Super::BeginPlay();
	BlueprintClass = GetOwner()->GetClass();
}

