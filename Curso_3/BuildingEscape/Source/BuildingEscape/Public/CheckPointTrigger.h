// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "ObjectSpawner.h"
#include "BuildingEscapeGameMode.h"
#include "InteractTrigger.h"
#include "CheckPointTrigger.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ACheckPointTrigger : public AInteractTrigger
{
	GENERATED_BODY()
protected:

	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere)
	AActor* PointToCurrentRespawn;
	
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp
		, AActor* OtherActor
		, UPrimitiveComponent* OtherComp
		, int32 OtherBodyIndex
		, bool bFromSweep
		, const FHitResult& SweepResult) override;

	UPROPERTY(VisibleAnywhere)
	AActor* PlayerStart;
	
	ABuildingEscapeGameMode* BuildingEscapeGameMode;
};
