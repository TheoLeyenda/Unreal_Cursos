// Copyright Theo Leyenda 2022


#include "Inventory.h"
#include "BuildingScapeCharacter.h"

// Sets default values for this component's properties
UInventory::UInventory()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UInventory::AddItem(UItem* Item)
{
	if(Items.Num() < Capacity)
	{
		Items.Add(Item);
		OnPlayerInventoryUpdated.Broadcast();
	}
}

void UInventory::RemoveItem(UItem* Item)
{
	if(Items.Num() > 0 && Item)
	{
		Items.RemoveSingle(Item);
		OnPlayerInventoryUpdated.Broadcast();
	}
}

void UInventory::UseItem(UItem* Item)
{
	bool EnableUseItem = false;
	for(UItem* AuxItem : Items)
	{
		if(AuxItem == Item)
		{
			if(!BuildingScapeCharacter)
			{
				BuildingScapeCharacter = Cast<ABuildingScapeCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
			}
			if(Item && BuildingScapeCharacter)
			{
				EnableUseItem = true;
			}
		}
	}
	if(EnableUseItem)
	{
		Item->Use(BuildingScapeCharacter);
		RemoveItem(Item);
		OnPlayerInventoryUpdated.Broadcast();
	}
}


