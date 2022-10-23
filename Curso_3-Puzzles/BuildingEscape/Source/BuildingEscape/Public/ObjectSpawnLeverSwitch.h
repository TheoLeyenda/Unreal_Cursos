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
	UFUNCTION()
	void SpawnObect();

	UFUNCTION()
	void EnableSpawners();
public:

	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere)
	bool bSpawnObjectToPositiveLeverSwitch = false;
	
	FTimerHandle TimerEnableSpawn;

	float DelayTimerEnableSpawn = 0.2f;
	
	UPROPERTY(EditAnywhere)
	bool bEnableSpawnersInBeginPlay = false;

	UPROPERTY(EditAnywhere)
	bool bSpawnerOnceUse = false;

	bool bFlagSpawnerUse = true;
	
	UPROPERTY(EditAnywhere)
	TArray<AObjectSpawner*> Spawners;
	
	virtual bool ExecuteInteractInterface(ABuildingScapeCharacter* Character) override;

	void SetEnableSpawners(bool Value);
	
};
