// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SaveLoadData.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API USaveLoadData : public UWorldSubsystem
{
	GENERATED_BODY()
	
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
public:
	UFUNCTION()
	virtual void Save(AActor* Actor);

	UFUNCTION()
	virtual void Load(AActor* Actor);
};
