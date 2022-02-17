// Copyright Theo Leyenda 2022


#include "PuzzleFoodLeverChecker.h"
#include "BuildingScapeCharacter.h"


APuzzleFoodLeverChecker::APuzzleFoodLeverChecker() : APuzzleChecker()
{
	PrimaryActorTick.bCanEverTick = true;
}

bool APuzzleFoodLeverChecker::PuzzleSucces()
{
	for(ADoor* Door : Doors)
	{
		if(Door)
		{
			Door->SetStateDoor(EStateDoor::Opened);
			Door->CheckDoor();
		}
	}
	SetActorTickEnabled(false);
	UE_LOG(LogTemp, Warning, TEXT("Puzzle Completado: Ya NO ejecuto tick"));
	return true;
}

void APuzzleFoodLeverChecker::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	CheckPuzzleResult();
	
}

void APuzzleFoodLeverChecker::CheckPuzzleResult()
{
	Super::CheckPuzzleResult();
	
	if(!ObjectsInteractTrigger || !LeverSwitchCombinePanel){ return; }

	if(!BuildingScapeCharacter)
	{
		BuildingScapeCharacter = Cast<ABuildingScapeCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	}

	
	if(ObjectsInteractTrigger->IsOverlapWithSomeSpecificObject() && LeverSwitchCombinePanel->IsCompleteCombinePanel() && CheckTargetFoodValue())
	{
		PuzzleSucces();
	}
}

bool APuzzleFoodLeverChecker::CheckTargetFoodValue()
{
	if(!BuildingScapeCharacter)
	{
		return false;
	}

	if(BuildingScapeCharacter->GetPlayerFatness() >= TargetFoodValue)
	{
		return true;
	}

	return false;
}
