// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThrowCurveProjectileGameMode.h"
#include "ThrowCurveProjectileCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThrowCurveProjectileGameMode::AThrowCurveProjectileGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
