// Copyright Theo Leyenda 2022


#include "QuestSystem/ObjetiveType/LifesObjetive.h"

bool ULifesObjetive::CheckStepComplete(FDataPlayer CompareData)
{
	return CompareData.Lifes >= TargetLifes;
}
