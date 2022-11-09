// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FPS_MultiplayerPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FPS_MULTIPLAYERTUTO1_API AFPS_MultiplayerPlayerController : public APlayerController
{
	GENERATED_BODY()

	FTimerHandle TimerHandle_Respawn;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DelayToRespawn = 2.5f;
public:
	void OnKilled();

	void Respawn();
};
