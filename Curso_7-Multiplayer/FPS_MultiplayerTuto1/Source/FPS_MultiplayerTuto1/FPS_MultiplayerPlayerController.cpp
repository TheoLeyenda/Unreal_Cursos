// Fill out your copyright notice in the Description page of Project Settings.


#include "FPS_MultiplayerPlayerController.h"

#include "GameFramework/GameModeBase.h"

void AFPS_MultiplayerPlayerController::OnKilled()
{
	GetWorldTimerManager().SetTimer(TimerHandle_Respawn, this, &AFPS_MultiplayerPlayerController::Respawn, DelayToRespawn, false);
}

void AFPS_MultiplayerPlayerController::Respawn()
{
	if(auto* CurrentGameMode = GetWorld()->GetAuthGameMode())
	{
		if(auto* NewPawn = CurrentGameMode->SpawnDefaultPawnFor(this, StartSpot.Get()))
		{
			Possess(NewPawn);
		}
	}
}
