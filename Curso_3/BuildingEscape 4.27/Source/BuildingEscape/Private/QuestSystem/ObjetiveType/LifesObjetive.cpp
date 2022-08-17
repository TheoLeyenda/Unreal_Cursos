// Copyright Theo Leyenda 2022


#include "QuestSystem/ObjetiveType/LifesObjetive.h"

bool ULifesObjetive::CheckStepComplete(FDataPlayer CompareData)
{
	FString CurrentLifesText = FString("(") + FString::SanitizeFloat(CompareData.Lifes);
	FString SpaceText = "/";
	FString TargetLifesText =  FString::SanitizeFloat(TargetLifes) + FString(")");

	TextProgressLifes = CurrentLifesText + SpaceText + TargetLifesText;
	
	return CompareData.Lifes >= TargetLifes;
}
