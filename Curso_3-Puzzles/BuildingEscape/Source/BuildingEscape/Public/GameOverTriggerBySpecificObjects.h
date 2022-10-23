// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "BuildingEscapeGameMode.h"
#include "ObjectsInteractTrigger.h"
#include "GameOverTriggerBySpecificObjects.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API AGameOverTriggerBySpecificObjects : public AObjectsInteractTrigger
{
	GENERATED_BODY()
public:
	AGameOverTriggerBySpecificObjects();

	virtual void BeginPlay() override;
	
	ABuildingEscapeGameMode* GameMode;
	virtual bool ExecuteInteractInterface(AActor* Actor) override;
};
