// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestSystem/ObjetiveType/Step.h"
#include "NeedItemObjetive.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UNeedItemObjetive : public UStep
{
	GENERATED_BODY()
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UItem>> NeedItems;
	
	virtual bool CheckStepComplete(FDataPlayer CompareData) override;
};
