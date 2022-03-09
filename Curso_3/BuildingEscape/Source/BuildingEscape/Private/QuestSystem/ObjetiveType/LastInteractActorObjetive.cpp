// Copyright Theo Leyenda 2022


#include "QuestSystem/ObjetiveType/LastInteractActorObjetive.h"

bool ULastInteractActorObjetive::CheckStepComplete(FDataPlayer CompareData)
{
	return (CompareData.LastInteractActorInfo.ActorBlueprint == ActorClass && CompareData.LastInteractActorInfo.ID == ID);
}
