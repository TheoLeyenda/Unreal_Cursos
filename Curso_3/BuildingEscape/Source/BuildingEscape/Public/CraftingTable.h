// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "ObjectSpawner.h"
#include "ObjectsInteractTrigger.h"
#include "GameFramework/Actor.h"
#include "CraftingTable.generated.h"

USTRUCT()
struct FActorsRequired
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ActorPlaceRequired;
	UPROPERTY(EditAnywhere)
	int indexPlace;
};

USTRUCT()
struct FActorsPlaceInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	AActor* CurrentActorPlace;
	UPROPERTY(EditAnywhere)
	int indexPlace;
};

USTRUCT()
struct FMatrixActorsPlace
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere)
	FActorsPlaceInfo ActorsPlace;
	
	UPROPERTY(EditAnywhere)
	AInteractTrigger* InteractTrigger;
	
	void CheckCurrentActorPlace()
	{
		if(!InteractTrigger)
		{
			ActorsPlace.CurrentActorPlace = nullptr;
			return;
		}
		TArray<AActor*> Actors;
		
		InteractTrigger->BoxTriggerVolume->GetOverlappingActors(Actors);

		if(Actors.Num() > 0)
		{
			ActorsPlace.CurrentActorPlace = Actors[Actors.Num()-1];
		}
		else
		{
			ActorsPlace.CurrentActorPlace = nullptr;
		}
	}
};

USTRUCT()
struct FCraftingInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> CraftingActorSpawn;
	UPROPERTY(EditAnywhere)
	int CountActorsSpawns;
	UPROPERTY(EditAnywhere)
	TArray<FActorsRequired> ActorsRequired;

};

UCLASS()
class BUILDINGESCAPE_API ACraftingTable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACraftingTable();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	int CountSlots = 9;
	
	UPROPERTY(EditAnywhere)
	TArray<FMatrixActorsPlace> MatrixActorsPlaceInfo;
	
	UPROPERTY(EditAnywhere)
	TArray<FActorsPlaceInfo> ComparePlaceActorsInfo;
	
	UPROPERTY(EditAnywhere)
	TArray<FCraftingInfo> CraftingInfo;

	UPROPERTY(EditAnywhere)
	AObjectSpawner* ObjectSpawner;
public:
	void CheckCrafting();
};
