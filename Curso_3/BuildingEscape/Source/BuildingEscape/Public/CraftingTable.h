// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "ObjectSpawner.h"
#include "GameFramework/Actor.h"
#include "CraftingTable.generated.h"

USTRUCT()
struct FActorsPlaceInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere)
	AActor* CurrentActorPlace;
	UPROPERTY(VisibleAnywhere)
	int indexPlace;
};

USTRUCT()
struct FCraftingInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> CraftingActorSpawn;
	UPROPERTY(EditAnywhere)
	TArray<FActorsPlaceInfo> ActorsRequired;
};

UCLASS()
class BUILDINGESCAPE_API ACraftingTable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACraftingTable();

protected:
	UPROPERTY(VisibleAnywhere)
	int CountSlotsCraftingTable = 9;
	UPROPERTY(VisibleAnywhere)
	TArray<FActorsPlaceInfo> ActorsPlaceInfo;
	UPROPERTY(VisibleAnywhere)
	TArray<FCraftingInfo> CraftingInfo;

	UPROPERTY(EditAnywhere)
	AObjectSpawner* ObjectSpawner;
public:
	void CheckCrafting();
};
