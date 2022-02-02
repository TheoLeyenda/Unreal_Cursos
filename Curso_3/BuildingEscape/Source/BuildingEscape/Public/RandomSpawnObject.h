// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "ObjectSpawner.h"
#include "GameFramework/Actor.h"
#include "RandomSpawnObject.generated.h"

UCLASS()
class BUILDINGESCAPE_API ARandomSpawnObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARandomSpawnObject();

	void UseRandomSpawner();

protected:

	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
	bool bRandomSpawnOnBeginPlay;

	UPROPERTY(EditAnywhere)
	TArray<AObjectSpawner*> Spawners;

};
