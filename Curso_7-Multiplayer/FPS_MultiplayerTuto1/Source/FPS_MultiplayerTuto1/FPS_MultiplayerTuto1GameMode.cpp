// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_MultiplayerTuto1GameMode.h"

#include "FPS_MultiplayerPlayerController.h"
#include "FPS_MultiplayerTuto1Character.h"
#include "UObject/ConstructorHelpers.h"

AFPS_MultiplayerTuto1GameMode::AFPS_MultiplayerTuto1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
	PlayerControllerClass = AFPS_MultiplayerPlayerController::StaticClass();
}
