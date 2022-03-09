// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestSystem/Objetive.h"
#include "FatnessObjetive.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UFatnessObjetive : public UObjetive
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TargetFatness;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString TextProgressFatness;
	
	virtual bool CheckStepComplete(FDataPlayer CompareData) override;
};
