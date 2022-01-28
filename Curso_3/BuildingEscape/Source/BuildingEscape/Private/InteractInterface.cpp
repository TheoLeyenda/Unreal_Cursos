// Copyright Theo Leyenda 2022


#include "InteractInterface.h"

// Add default functionality here for any IInteractInterface functions that are not pure virtual.
bool IInteractInterface::ExecuteInteractInterface()
{
	return false;	
}

bool IInteractInterface::ExecuteInterfaceOnHitInteraction(float DeltaSeconds)
{
	return false;
}

bool IInteractInterface::ExecuteInteractInterface(ABuildingScapeCharacter* Character)
{
	return false;
}
