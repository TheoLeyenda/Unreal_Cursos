// Copyright Theo Leyenda 2022


#include "QuestSystem/ObjetiveType/FatnessObjetive.h"

bool UFatnessObjetive::CheckStepComplete(FDataPlayer CompareData)
{

	FString CurrentFatnessText = FString::Printf(TEXT("%f"), CompareData.Fatness);
	FString SpaceText = "/";
	FString TargetFatnessText = FString::Printf(TEXT("%f"), TargetFatness);

	TextProgressFatness = CurrentFatnessText + SpaceText + TargetFatnessText;
	
	return CompareData.Fatness >= TargetFatness;
}
