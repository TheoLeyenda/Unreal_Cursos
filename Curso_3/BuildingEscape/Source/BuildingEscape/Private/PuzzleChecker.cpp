// Copyright Theo Leyenda 2022


#include "PuzzleChecker.h"

APuzzleChecker::APuzzleChecker()
{
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

