// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "InteractTrigger.h"
#include "DestroyObjectsByTrigger.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ADestroyObjectsByTrigger : public AInteractTrigger
{
	GENERATED_BODY()
	virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp
			, class AActor* OtherActor
			, class UPrimitiveComponent* OtherComp
			, int32 OtherBodyIndex
			, bool bFromSweep
			, const FHitResult& SweepResult);

	virtual bool ExecuteInteractInterface(AActor* Actor) override;
};
