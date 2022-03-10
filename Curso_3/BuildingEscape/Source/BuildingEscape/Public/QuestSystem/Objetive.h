// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestEvaluatorComponent.h"
#include "ObjetiveType/Step.h"
#include "Engine/DataAsset.h"
#include "Objetive.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BUILDINGESCAPE_API UObjetive : public UDataAsset
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDoneAccion = false;

	UPROPERTY(EditAnywhere)
	bool bUseIdentificationObject = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UStep*> StepsToCompleteObjective;
	
	UFUNCTION()
	void CheckObjetiveComplete(FDataPlayer CompareData);
	
	UFUNCTION()
	virtual void ResetData();
};
