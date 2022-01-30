// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "LeverSwitchCombinePanel.h"
#include "ObjectsInteractTrigger.h"
#include "BuildingScapeCharacter.h"
#include "Door.h"
#include "PuzzleChecker.h"
#include "PuzzleFoodLeverChecker.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API APuzzleFoodLeverChecker : public APuzzleChecker
{
	GENERATED_BODY()

	APuzzleFoodLeverChecker();
protected:

	UPROPERTY(EditAnywhere)
	TArray<ADoor*> Doors;
	
	UPROPERTY(EditAnywhere)
	AObjectsInteractTrigger* ObjectsInteractTrigger;

	UPROPERTY(EditAnywhere)
	ALeverSwitchCombinePanel* LeverSwitchCombinePanel;

	UPROPERTY(VisibleAnywhere)
	ABuildingScapeCharacter* BuildingScapeCharacter;

	UPROPERTY(EditAnywhere)
	float TargetFoodValue = 20;
	
	virtual bool PuzzleSucces() override;

	virtual void CheckPuzzleResult() override;
	
	bool CheckTargetFoodValue();
	
	virtual void Tick(float DeltaSeconds) override;
};
