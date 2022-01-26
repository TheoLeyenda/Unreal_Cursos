// Copyright Theo Leyenda 2022

#include "Item.h"

UItem::UItem()
{
	Weight = 1.0f;
	ItemDisplayName = FText::FromString("Item");
	UseActionText = FText::FromString("Use");
}

void UItem::Use(ABuildingScapeCharacter* Character)
{
	
}