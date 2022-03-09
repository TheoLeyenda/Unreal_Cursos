// Copyright Theo Leyenda 2022


#include "QuestSystem/Objetive.h"

void UObjetive::CheckObjetiveComplete(FDataPlayer CompareData)
{
	bDoneAccion = true;

	for(UObjetive* Step : StepsToCompleteObjective)
	{
		if(!CheckStepComplete(CompareData))
		{
			bDoneAccion = false;
			break;
		}
	}
}

bool UObjetive::CheckStepComplete(FDataPlayer CompareData)
{
	return false;
}

void UObjetive::ResetData()
{
	bDoneAccion = false;
}
