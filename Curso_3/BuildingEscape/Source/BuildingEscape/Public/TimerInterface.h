// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TimerInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTimerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BUILDINGESCAPE_API ITimerInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual bool ExecuteFinishTimeEvent();
};
