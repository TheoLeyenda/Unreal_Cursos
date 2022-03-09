// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestSystem/Objetive.h"
#include "LifesObjetive.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ULifesObjetive : public UObjetive
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TargetLifes;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString TextProgressLifes;
	
	virtual bool CheckStepComplete(FDataPlayer CompareData) override;
};
