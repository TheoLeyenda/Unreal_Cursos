// Copyright Theo Leyenda 2022


#include "QuestSystem/ObjetiveType/NeedItemObjetive.h"

bool UNeedItemObjetive::CheckStepComplete(FDataPlayer CompareData)
{
	if(!CompareData.InventoryComponent)
	{
		return false;
	}

	bool bDoneAccion = true;
	for(int i = 0; i < NeedItems.Num(); i++)
	{
		if(!CompareData.InventoryComponent->CheckHaveItem(NeedItems[i]))
		{
			bDoneAccion = false;
			break;
		}
	}
	
	return bDoneAccion;
}
