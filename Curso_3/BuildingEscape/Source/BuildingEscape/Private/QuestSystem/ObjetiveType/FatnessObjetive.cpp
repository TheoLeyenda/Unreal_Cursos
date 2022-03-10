// Copyright Theo Leyenda 2022


#include "QuestSystem/ObjetiveType/FatnessObjetive.h"

bool UFatnessObjetive::CheckStepComplete(FDataPlayer CompareData)
{
	FString CurrentFatnessText = FString("(") + FString::SanitizeFloat(CompareData.Fatness);
	FString SpaceText = "/";
	FString TargetFatnessText = FString::SanitizeFloat(TargetFatness) + FString(")");

	TextProgressFatness = CurrentFatnessText + SpaceText + TargetFatnessText;
	
	return CompareData.Fatness >= TargetFatness;
}
