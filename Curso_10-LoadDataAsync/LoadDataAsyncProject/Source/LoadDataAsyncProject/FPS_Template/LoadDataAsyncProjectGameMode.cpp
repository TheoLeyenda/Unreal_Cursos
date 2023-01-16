// Copyright Epic Games, Inc. All Rights Reserved.

#include "LoadDataAsyncProjectGameMode.h"
#include "LoadDataAsyncProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALoadDataAsyncProjectGameMode::ALoadDataAsyncProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
