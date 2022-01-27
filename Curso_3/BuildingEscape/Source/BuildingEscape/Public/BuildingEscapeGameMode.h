 // Copyright Theo Leyenda 2022

#pragma once

#include <Actor.h>

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ObjectSpawner.h"
#include "GameFramework/PlayerStart.h"
#include "BuildingEscapeGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ABuildingEscapeGameMode : public AGameModeBase
{
	GENERATED_BODY()

	virtual void BeginPlay() override;

	APlayerStart* PlayerStart;

	void FindSpawners();
	void FindPlayerSpawn();

	UPROPERTY(EditAnywhere, Category="Spawn Objects")
	TSubclassOf<AObjectSpawner> SpawnerObjectClass;

	TArray<AActor*> AuxArrayActors; 
public:
	
	UPROPERTY(VisibleAnywhere, Category="Spawn Objects")
	TArray<AObjectSpawner*> SpawnersObjects;

	
	
	void Restart();
 	
};