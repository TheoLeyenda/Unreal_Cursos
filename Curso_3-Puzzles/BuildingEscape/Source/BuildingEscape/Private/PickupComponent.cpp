// Copyright Theo Leyenda 2022
#include "PickupComponent.h"

#include "BuildingScapeCharacter.h"
#include "Inventory.h"



UPickupComponent::UPickupComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

bool UPickupComponent::ExecuteInteractInterface(ABuildingScapeCharacter* Character)
{
	if(!Character) {return false;}
	if(!Character->PlayerInventoryComponent){return false;}

	if(!PickupItem){return false;}
	
	Character->PlayerInventoryComponent->AddItem(PickupItem);
	GetOwner()->Destroy();
	UE_LOG(LogTemp, Warning, TEXT("LO LOGRE"));
	return true;
}

