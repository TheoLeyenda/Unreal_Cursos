// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "TimeEventOver.h"
#include "SelfDestructionByTimeOver.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API USelfDestructionByTimeOver : public UTimeEventOver
{
	GENERATED_BODY()
public:
	USelfDestructionByTimeOver();

	virtual bool ExecuteFinishTimeEvent();
};
