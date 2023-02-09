// Copyright Epic Games, Inc. All Rights Reserved.

#include "TrajectoryProjectileGameMode.h"
#include "TrajectoryProjectileCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATrajectoryProjectileGameMode::ATrajectoryProjectileGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
