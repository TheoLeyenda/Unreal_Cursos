// Copyright Theo Leyenda 2022

#include "InventoryComponent.h"
#include "Item.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	for(UItem* Item : DefaultItems)
	{
		AddItem(Item);
	}
}


bool UInventoryComponent::AddItem(UItem* Item)
{
	if(Items.Num() >= Capacity || !Item)
	{
		return false;
	}
	Item->OwningInventory = this;
	Item->World = GetWorld();
	Items.Add(Item);
	//UE_LOG(LogTemp, Warning, TEXT("Call me"));
	OnInventoryUpdated.Broadcast();

	return true;
}

bool UInventoryComponent::RemoveItem(UItem* Item)
{
	if(!Item)
	{
		return false;
	}

	Item->OwningInventory = nullptr;
	Item->World = nullptr;
	Items.RemoveSingle(Item);
	OnInventoryUpdated.Broadcast();

	return true;
}

