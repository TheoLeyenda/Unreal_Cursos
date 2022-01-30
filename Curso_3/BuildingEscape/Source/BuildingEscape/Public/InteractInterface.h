// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BuildingScapeCharacter.h"
#include "InteractInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

class BUILDINGESCAPE_API IInteractInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	virtual bool ExecuteInteractInterface();

	virtual bool ExecuteInterfaceOnHitInteraction(float DeltaSeconds);
	
	virtual bool ExecuteInteractInterface(ABuildingScapeCharacter* Character);
};
