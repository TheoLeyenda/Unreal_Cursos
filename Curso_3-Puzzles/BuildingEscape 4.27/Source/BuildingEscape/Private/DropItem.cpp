// Copyright Theo Leyenda 2022


#include "DropItem.h"

#include "Grabber.h"

void UDropItem::Use(ABuildingScapeCharacter* Character)
{
	Super::Use(Character);
	if(Character)
	{
		if(Character->Grabber)
		{
			GetWorld()->SpawnActor<AActor>(BluprintActorDrop, Character->Grabber->GetPlayerViewLocation() + (Character->GetActorForwardVector() * SpawnOffsetZ), FRotator::ZeroRotator);
		}
		else
		{
			GetWorld()->SpawnActor<AActor>(BluprintActorDrop, Character->GetActorLocation() + (Character->GetActorForwardVector() * SpawnOffsetZ), FRotator::ZeroRotator);
		}
	}
}
