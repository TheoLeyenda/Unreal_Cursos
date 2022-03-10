// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestSystem/QuestEvaluatorComponent.h"
#include "Engine/DataAsset.h"
#include "Step.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UStep : public UDataAsset
{
	GENERATED_BODY()
public:
	UFUNCTION()
	virtual bool CheckStepComplete(FDataPlayer CompareData);
};
