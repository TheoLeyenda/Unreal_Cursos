// Copyright Theo Leyenda 2022


#include "Inventory.h"
#include "BuildingScapeCharacter.h"
#include "Grabber.h"

UInventory::UInventory()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UInventory::DropItem(UItem* Item)
{
	if(!BuildingScapeCharacter)
	{
		BuildingScapeCharacter = Cast<ABuildingScapeCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	}
	if(Item && BuildingScapeCharacter)
	{
		if(Item->BlueprintActorItem != nullptr)
		{
			if(BuildingScapeCharacter->Grabber)
			{
				GetWorld()->SpawnActor<AActor>(Item->BlueprintActorItem, BuildingScapeCharacter->Grabber->GetPlayerViewLocation() + (BuildingScapeCharacter->GetActorForwardVector() * DropItemOffset), FRotator::ZeroRotator);
			}
			else
			{
				GetWorld()->SpawnActor<AActor>(Item->BlueprintActorItem, BuildingScapeCharacter->GetActorLocation() + (BuildingScapeCharacter->GetActorForwardVector() * DropItemOffset), FRotator::ZeroRotator);
			}
			RemoveItem(Item);
		}
	}
}

void UInventory::AddItem(UItem* Item)
{
	Items.Add(Item);
	OnPlayerInventoryUpdated.Broadcast();
	OnPlayerInventorySpecificUpdate.Broadcast(this);
}

void UInventory::RemoveItem(UItem* Item)
{
	if(Items.Num() > 0 && Item)
	{
		Items.RemoveSingle(Item);
		OnPlayerInventoryUpdated.Broadcast();
		OnPlayerInventorySpecificUpdate.Broadcast(this);
	}
}

bool UInventory::CheckHaveItem(TSubclassOf<UItem> ItemClass)
{
	bool FindItem = false;

	for(int i = 0; i < Items.Num(); i++)
	{
		if(ItemClass == Items[i]->GetClass())
		{
			FindItem = true;
		}
	}
	
	return FindItem;
}

void UInventory::UseItem(UItem* Item)
{
	if(!Item->bUseItemFuncionality)
	{
		return;
	}
	
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
		if(Item->bSelectedItem)
		{
			if(!CurrentItemSelected)
			{
				CurrentItemSelected = Item;
			}
		}
		else
		{
			Item->Use(BuildingScapeCharacter);
			RemoveItem(Item);
			OnPlayerInventoryUpdated.Broadcast();
			OnPlayerInventorySpecificUpdate.Broadcast(this);
		}
	}
}

void UInventory::RemoveCurrentItemSelected()
{
	if(CurrentItemSelected)
	{
		RemoveItem(CurrentItemSelected);
		CurrentItemSelected = nullptr;
	}
}


