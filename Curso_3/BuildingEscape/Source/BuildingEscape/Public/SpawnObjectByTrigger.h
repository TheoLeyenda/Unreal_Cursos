// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "ObjectsInteractTrigger.h"
#include "ObjectSpawner.h"
#include "SpawnObjectByTrigger.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ASpawnObjectByTrigger : public AObjectsInteractTrigger
{
	GENERATED_BODY()
public:
	ASpawnObjectByTrigger();

	UPROPERTY(EditAnywhere)
	bool bDestroymeInTrigger = true;
	
	UPROPERTY(EditAnywhere)
	TArray<AObjectSpawner*> Spawners;

	virtual bool ExecuteInteractInterface() override;
};
