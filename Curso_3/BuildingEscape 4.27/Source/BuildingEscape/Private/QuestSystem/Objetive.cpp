// Copyright Theo Leyenda 2022


#include "QuestSystem/Objetive.h"

void UObjetive::CheckObjetiveComplete(FDataPlayer CompareData)
{
	bDoneAccion = true;

	for(UStep* Step : StepsToCompleteObjective)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Tipo de step: %s"), *Step->GetClass()->GetName());
		if(!Step->CheckStepComplete(CompareData))
		{
			bDoneAccion = false;
		}
	}
}

void UObjetive::ResetData()
{
	bDoneAccion = false;
}
