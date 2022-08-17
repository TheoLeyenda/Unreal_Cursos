// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestSystem/ObjetiveType/Step.h"
#include "CounterObjetive.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UCounterObjetive : public UStep
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, Category="Settings")
	TArray<UStep*> StepsToProgress;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Settings")
	int CurrentProgressToObjetive = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	int TargetToObjective;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= "Settings")
	FString TextProgress;

	virtual bool CheckStepComplete(FDataPlayer CompareData) override;
};
