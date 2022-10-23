// Copyright Theo Leyenda 2022


#include "SaveSystem/SaveLoadData.h"

bool USaveLoadData::ShouldCreateSubsystem(UObject* Outer) const
{
	return Super::ShouldCreateSubsystem(Outer);
}

void USaveLoadData::Save(AActor* Actor){}

void USaveLoadData::Load(AActor* Actor){}
