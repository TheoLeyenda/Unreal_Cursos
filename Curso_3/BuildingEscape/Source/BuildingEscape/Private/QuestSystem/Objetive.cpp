// Copyright Theo Leyenda 2022


#include "QuestSystem/Objetive.h"

void UObjetive::CheckObjetiveComplete(FDataPlayer CompareData)
{
	bDoneAccion = true;

	for(UStep* Step : StepsToCompleteObjective)
	{
		if(!Step->CheckStepComplete(CompareData))
		{
			bDoneAccion = false;
			break;
		}
	}
}

void UObjetive::ResetData()
{
	bDoneAccion = false;
}
