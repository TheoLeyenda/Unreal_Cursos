// Copyright Theo Leyenda 2022


#include "QuestSystem/ObjetiveType/LifesObjetive.h"

bool ULifesObjetive::CheckStepComplete(FDataPlayer CompareData)
{
	FString CurrentLifesText = FString::Printf(TEXT("%d"), CompareData.Lifes);
	FString SpaceText = "/";
	FString TargetLifesText = FString::Printf(TEXT("%d"), TargetLifes);

	TextProgressLifes = CurrentLifesText + SpaceText + TargetLifesText;
	
	return CompareData.Lifes >= TargetLifes;
}
