// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestSystem/Objetive.h"
#include "LastInteractActorObjetive.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ULastInteractActorObjetive : public UObjetive
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ID;
	
	virtual bool CheckStepComplete(FDataPlayer CompareData) override;
};
