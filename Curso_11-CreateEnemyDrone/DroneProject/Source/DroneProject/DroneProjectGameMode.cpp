// Copyright Epic Games, Inc. All Rights Reserved.

#include "DroneProjectGameMode.h"
#include "DroneProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADroneProjectGameMode::ADroneProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
