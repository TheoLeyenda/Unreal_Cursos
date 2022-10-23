// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TrapInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTrapInterface : public UInterface
{
	GENERATED_BODY()
};

class BUILDINGESCAPE_API ITrapInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual bool ExecuteTrapInterface();
};
