// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestSystem/ObjetiveType/Step.h"
#include "LifesObjetive.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ULifesObjetive : public UStep
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TargetLifes;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString TextProgressLifes;
	
	virtual bool CheckStepComplete(FDataPlayer CompareData) override;
};
