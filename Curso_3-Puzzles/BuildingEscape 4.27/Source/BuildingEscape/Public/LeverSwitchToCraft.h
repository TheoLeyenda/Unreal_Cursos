// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "LeverSwitch.h"
#include "CraftingTable.h"
#include "LeverSwitchToCraft.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ALeverSwitchToCraft : public ALeverSwitch
{
	GENERATED_BODY()

public:
	ALeverSwitchToCraft();
	
	UPROPERTY(EditAnywhere)
	ACraftingTable* CraftingTable;

	virtual bool ExecuteInteractInterface(ABuildingScapeCharacter* Character) override;
};
