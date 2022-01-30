// Copyright Theo Leyenda 2022


#include "PuzzleChecker.h"

// Sets default values
APuzzleChecker::APuzzleChecker()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

bool APuzzleChecker::PuzzleSucces()
{
	return false;
}

bool APuzzleChecker::PuzzleFail()
{
	return false;
}

void APuzzleChecker::CheckPuzzleResult(){}

