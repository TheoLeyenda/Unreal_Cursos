// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameState.h"

void AFPSGameState::NetMulticastOnMissionComplete_Implementation(APawn* InstigatorPawn, bool bMissionSuccesse)
{
	UWorld* World = GetWorld();
	for(auto It = World->GetPlayerControllerIterator(); It; It++)
	{
		if (auto* PC = Cast<APlayerController>(*It))
		{
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
