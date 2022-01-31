// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjectSpawner.generated.h"

USTRUCT()
struct FObjectSpawn
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ObjectBlueprint;
	UPROPERTY(EditAnywhere)
	int CountObjectsSpawn;
};

UCLASS()
class BUILDINGESCAPE_API AObjectSpawner : public AActor
{
	GENERATED_BODY()
	
	UWorld* World;

	int CurrentIndexSpawn = 0;
	int CountObjectSpawn = 0;

protected:
	void SpawnObjects();
	
public:
	virtual void BeginPlay() override;
	// Sets default values for this actor's properties
	AObjectSpawner();	

	UPROPERTY(EditAnywhere, meta = (ClampMin = 0))
	float RangeGeneratorX;

	UPROPERTY(EditAnywhere, meta = (ClampMin = 0))
	float RangeGeneratorY;
	
	UPROPERTY(EditAnywhere)
	TArray<FObjectSpawn> ObjectsSpawn;

	UPROPERTY(EditAnywhere)
	bool bEnableSpawnObject = true;
	
	FTimerHandle TimerSpawnObject;
	UPROPERTY(EditAnywhere)
	float DelaySpawnObject = 0.5f;
	void SendTimerSpawnObject();
	
	TArray<AActor*> ObjectSpawned;

	void DestroySpawnedObjects();
};
