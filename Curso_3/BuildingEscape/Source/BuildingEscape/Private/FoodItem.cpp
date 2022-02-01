// Copyright Theo Leyenda 2022


#include "FoodItem.h"

void UFoodItem::Use(ABuildingScapeCharacter* Character)
{
	Super::Use(Character);
	if(Character)
	{
		Character->SetPlayerFatness(Character->GetPlayerFatness() + HealthToHeal);
	}
}