// Copyright Theo Leyenda 2022


#include "QuestSystem/ObjetiveType/LastInteractActorObjetive.h"

bool ULastInteractActorObjetive::CheckStepComplete(FDataPlayer CompareData)
{
	//if(!CompareData.LastInteractActorInfo.ActorBlueprint || !ActorClass) return false;
	//UE_LOG(LogTemp, Warning, TEXT("%s == %s"), *CompareData.LastInteractActorInfo.ActorBlueprint->GetName(), *ActorClass->GetName());
	//UE_LOG(LogTemp, Warning, TEXT("%d == %d"), CompareData.LastInteractActorInfo.ID, ID);
	return (CompareData.LastInteractActorInfo.ActorBlueprint == ActorClass && CompareData.LastInteractActorInfo.ID == ID);
}
