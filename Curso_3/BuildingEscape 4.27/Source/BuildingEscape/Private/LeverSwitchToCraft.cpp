// Copyright Theo Leyenda 2022


#include "LeverSwitchToCraft.h"

ALeverSwitchToCraft::ALeverSwitchToCraft() : ALeverSwitch(){}

bool ALeverSwitchToCraft::ExecuteInteractInterface(ABuildingScapeCharacter* Character)
{
	if(!CraftingTable)
	{
		return false;
	}

	CraftingTable->CheckCrafting();
	
	return Super::ExecuteInteractInterface(Character);
}
