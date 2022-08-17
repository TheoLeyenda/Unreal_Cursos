// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "InteractInterface.h"
#include "Item.h"
#include "Door.h"
#include "LockedDoor.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ALockedDoor : public ADoor
{
	GENERATED_BODY()

public:
	ALockedDoor();

	UPROPERTY(EditDefaultsOnly, Instanced)
	UItem* ItemToOpenDoor;

	
	virtual void BeginPlay() override;
	
	virtual bool ExecuteInteractInterface(ABuildingScapeCharacter* Character) override;
};
