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
	
public:
	virtual void BeginPlay() override;
	// Sets default values for this actor's properties
	AObjectSpawner();	

	UPROPERTY(EditAnywhere, Category="Objects Spawn")
	TArray<FObjectSpawn> ObjectsSpawn;

	TArray<AActor*> ObjectSpawned;
	
	void SpawnObjects();

	void DestroySpawnedObjects();
};
