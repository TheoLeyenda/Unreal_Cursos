// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjectSpawner.h"
#include "ObjectsInteractTrigger.h"
#include "SpawnerByCollision.generated.h"

UCLASS()
class BUILDINGESCAPE_API ASpawnerByCollision : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnerByCollision();
};
