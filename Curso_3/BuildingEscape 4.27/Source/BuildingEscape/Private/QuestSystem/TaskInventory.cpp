// Copyright Theo Leyenda 2022


#include "QuestSystem/TaskInventory.h"
#include "Kismet/GameplayStatics.h"

void UTaskInventory::FindInformation()
{
	Super::FindInformation();

	TArray<AActor*> Actors;

	Inventarys.Empty();
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABuildingScapeCharacter::StaticClass(),Actors);

	if(Actors.Num() > 0)
	{
		for(AActor* Actor : Actors)
		{
			if(Actor)
			{
				UInventory* InventoryComponent = Cast<UInventory>(Actor->GetComponentByClass(UInventory::StaticClass()));
				if(InventoryComponent)
				{
					InventoryComponent->OnPlayerInventorySpecificUpdate.AddDynamic(this, &UTaskInventory::SettingDataTask);
					Inventarys.Add(InventoryComponent);
				}
			}
		}
	}
}

void UTaskInventory::SettingDataTask(UInventory* Inventory)
{
	if(!BuildingScapeCharacter){return;}

	if(!Inventory){return;}
	
	SettingDataBaseTask(false);

	SendDataPlayer.InventoryComponent = Inventory;
	SendDataPlayer.InventoryComponent->Items = Inventory->Items;
	
	SendEventUpdateTask(false);
}
