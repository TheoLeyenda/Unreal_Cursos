// Copyright Theo Leyenda 2022


#include "QuestSystem/ObjetiveType/FatnessObjetive.h"

bool UFatnessObjetive::CheckStepComplete(FDataPlayer CompareData)
{
	return CompareData.Fatness >= TargetFatness;
}
