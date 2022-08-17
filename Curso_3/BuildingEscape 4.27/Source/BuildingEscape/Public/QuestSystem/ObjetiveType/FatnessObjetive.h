// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestSystem/ObjetiveType/Step.h"
#include "FatnessObjetive.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UFatnessObjetive : public UStep
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetFatness;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString TextProgressFatness;
	
	virtual bool CheckStepComplete(FDataPlayer CompareData) override;
};
