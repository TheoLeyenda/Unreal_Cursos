// Copyright Theo Leyenda 2022


#include "FoodItem.h"

void UFoodItem::Use(ABuildingScapeCharacter* Character)
{
	UE_LOG(LogTemp, Warning,TEXT("HE USADO EL MORFI"));
	Super::Use(Character);
	if(Character)
	{
		Character->SetPlayerHealth(Character->GetPlayerHealth() + HealthToHeal);

		if(OwningInventory)
		{
			UE_LOG(LogTemp, Warning,TEXT("Y HE REMOVIDO EL ITEM"));
			OwningInventory->RemoveItem(this);
		}
	}
}