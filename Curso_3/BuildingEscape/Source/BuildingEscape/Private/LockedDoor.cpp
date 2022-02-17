// Copyright Theo Leyenda 2022


#include "LockedDoor.h"

#include "Inventory.h"

ALockedDoor::ALockedDoor() : ADoor() {}

void ALockedDoor::BeginPlay()
{
	Super::BeginPlay();
	
	StateDoor = EStateDoor::Closed;
	CheckDoor();
}

bool ALockedDoor::ExecuteInteractInterface(ABuildingScapeCharacter* Character)
{
	if(!Character) {return false;}
	if(!Character->PlayerInventoryComponent){return false;}
	if(!Character->PlayerInventoryComponent->CurrentItemSelected){return false;}
	
	if(Character->PlayerInventoryComponent->CurrentItemSelected->GetClass() == ItemToOpenDoor->GetClass())
	{
		if(StateDoor == EStateDoor::Closed)
		{
			Character->PlayerInventoryComponent->RemoveCurrentItemSelected();
		}
		SetStateDoor(EStateDoor::Opened);
		CheckDoor();
		
	}
	return true;
}
