// Copyright Theo Leyenda 2022


#include "GameOverTriggerBySpecificObjects.h"

AGameOverTriggerBySpecificObjects::AGameOverTriggerBySpecificObjects() : AObjectsInteractTrigger(){}

void AGameOverTriggerBySpecificObjects::BeginPlay()
{
	Super::BeginPlay();

	GameMode = Cast<ABuildingEscapeGameMode>(GetWorld()->GetAuthGameMode());
}

bool AGameOverTriggerBySpecificObjects::ExecuteInteractInterface(AActor* Actor)
{
	if(!GameMode)
	{
		return false;
	}

	GameMode->ActivateGameOver();
	OnCompleteInteractTrigger.Broadcast(this);
	return true;
}
