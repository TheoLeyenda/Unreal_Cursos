// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSGameMode.generated.h"

UCLASS()
class AFPSGameMode : public AGameModeBase
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, Category= "Settings")
	TSubclassOf<AActor> SpectatingViewpointClass;
public:

	AFPSGameMode();
	
	void CompleteMission(APawn* InstigatorPawn);

	UFUNCTION(BlueprintImplementableEvent, Category= "GameMode")
	void OnMissionComplete(APawn* InstigatorPawn);
private:
	UPROPERTY()
	AActor* NewViewTarget = nullptr;
};



