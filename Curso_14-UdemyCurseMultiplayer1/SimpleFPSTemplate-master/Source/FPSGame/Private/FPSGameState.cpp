// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameState.h"

#include "FPSHUD.h"
#include "FPSPlayerController.h"

void AFPSGameState::NetMulticastOnMissionComplete_Implementation(APawn* InstigatorPawn, bool bMissionSuccesse)
{
	UWorld* World = GetWorld();
	for(auto It = World->GetPlayerControllerIterator(); It; It++)
	{
		if (auto* PC = Cast<AFPSPlayerController>(*It))
		{
			if(PC->IsLocalController())
			{
				if(auto* FPSHUD = Cast<AFPSHUD>(PC->GetHUD()))
				{
					FPSHUD->bDrawHUD = false;
				}
				PC->OnMissionCompleted(InstigatorPawn, bMissionSuccesse);
			}
			if(auto* Pawn = PC->GetPawn())
			{
				if(Pawn && Pawn->IsLocallyControlled())
				{
					Pawn->DisableInput(nullptr);
				}
			}
		}
	}
}
