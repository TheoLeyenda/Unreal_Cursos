// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "InteractTrigger.h"
#include "ObjectsInteractTrigger.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API AObjectsInteractTrigger : public AInteractTrigger
{
	GENERATED_BODY()
	
	AObjectsInteractTrigger();
protected:

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AActor>> ObjectsToOverlapCheck;

	bool bIsOverlapWithSomeSpecificObject = false;
	
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex
	, bool bFromSweep
	, const FHitResult& SweepResult) override;
	
	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComp
		, AActor* OtherActor
		, UPrimitiveComponent* OtherComp
		, int32 OtherBodyIndex) override;
	
public:
	bool IsOverlapWithSomeSpecificObject();
};
