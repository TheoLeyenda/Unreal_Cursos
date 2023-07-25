// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSGameMode.h"
#include "FPSHUD.h"
#include "FPSCharacter.h"
#include "FPSGameState.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

AFPSGameMode::AFPSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_Player"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSHUD::StaticClass();
	GameStateClass = AFPSGameState::StaticClass();
}

void AFPSGameMode::CompleteMission(APawn* InstigatorPawn, bool bMisionSuccess)
{
	if(InstigatorPawn)
	{
		if(SpectatingViewpointClass)
		{
			NewViewTarget = UGameplayStatics::GetActorOfClass(this, SpectatingViewpointClass);
			UWorld* World = GetWorld();
			for(auto It = World->GetPlayerControllerIterator(); It; It++)
			{
				if(auto* PC = It->Get())
				{
					PC->SetViewTargetWithBlend(NewViewTarget, 1.0f, EViewTargetBlendFunction::VTBlend_Cubic);
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("SpectatingViewpointClass is nullptr. Please update GameMode class with valid subclass."))
		}
	}

	if(auto* GameState = GetGameState<AFPSGameState>())
	{
		GameState->NetMulticastOnMissionComplete(InstigatorPawn, bMisionSuccess);
	}
	
	OnMissionComplete(InstigatorPawn, bMisionSuccess);
}
