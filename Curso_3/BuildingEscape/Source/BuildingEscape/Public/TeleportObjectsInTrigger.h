// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "ObjectsInteractTrigger.h"
#include "TeleportObjectsInTrigger.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ATeleportObjectsInTrigger : public AObjectsInteractTrigger
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TArray<AActor*> PointsToTeleport;

	virtual bool ExecuteInteractInterface(AActor* Actor) override;
	
};
