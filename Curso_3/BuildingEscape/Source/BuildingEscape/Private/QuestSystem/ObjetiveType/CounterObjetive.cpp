// Copyright Theo Leyenda 2022


#include "QuestSystem/ObjetiveType/CounterObjetive.h"

bool UCounterObjetive::CheckStepComplete(FDataPlayer CompareData)
{

	if(CurrentProgressToObjetive >= TargetToObjective)
	{
		return true;
	}
	
	CurrentProgressToObjetive = 0;

	for(UStep* Step : StepsToProgress)
	{
		if(Step)
		{
			if(Step->CheckStepComplete(CompareData))
			{
				CurrentProgressToObjetive++;
			}
		}
	}
	
	FString ProgressToObjetiveText = FString("(") + FString::SanitizeFloat(CurrentProgressToObjetive);
	FString SpaceText = "/";
	FString TargetToObjectiveText = FString::SanitizeFloat(TargetToObjective) + FString(")");

	TextProgress = ProgressToObjetiveText + SpaceText + TargetToObjectiveText;
	
	return CurrentProgressToObjetive >= TargetToObjective;
}
