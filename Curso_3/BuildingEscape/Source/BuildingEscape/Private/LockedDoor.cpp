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
	//UE_LOG(LogTemp, Warning, TEXT("ENTRE HOLIS UWU"));
	if(!Character) {return false;}
	if(!Character->PlayerInventoryComponent){return false;}
	if(!Character->PlayerInventoryComponent->CurrentItemSelected){return false;}


	//UE_LOG(LogTemp, Warning, TEXT("ENTRE HOLIS UWU 2"));
	if(Character->PlayerInventoryComponent->CurrentItemSelected->GetClass() == ItemToOpenDoor->GetClass())
	{
		//UE_LOG(LogTemp, Warning, TEXT("ENTRE HOLIS UWU 3"));
		if(StateDoor == EStateDoor::Closed)
		{
			Character->PlayerInventoryComponent->RemoveCurrentItemSelected();
		}
		SetStateDoor(EStateDoor::Opened);
		CheckDoor();
		
	}
	return true;
}
