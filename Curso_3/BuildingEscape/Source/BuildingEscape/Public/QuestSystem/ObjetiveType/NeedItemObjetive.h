// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestSystem/Objetive.h"
#include "NeedItemObjetive.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UNeedItemObjetive : public UObjetive
{
	GENERATED_BODY()
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UItem>> NeedItems;
	
	virtual bool CheckStepComplete(FDataPlayer CompareData) override;
};
