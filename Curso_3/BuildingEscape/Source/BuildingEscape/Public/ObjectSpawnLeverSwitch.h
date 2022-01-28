// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "LeverSwitch.h"
#include "ObjectSpawner.h"
#include "ObjectSpawnLeverSwitch.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API AObjectSpawnLeverSwitch : public ALeverSwitch
{
	GENERATED_BODY()

	AObjectSpawnLeverSwitch();
	
protected:
	void SpawnObect();
public:
	
	UPROPERTY(EditAnywhere)
	bool bSpawnObjectToPositiveLeverSwitch = false;

	UPROPERTY(EditAnywhere)
	TArray<AObjectSpawner*> Spawners;
	
	virtual bool ExecuteInteractInterface(ABuildingScapeCharacter* Character) override;
};
