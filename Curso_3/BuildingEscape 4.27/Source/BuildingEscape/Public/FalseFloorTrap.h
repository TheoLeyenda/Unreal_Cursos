// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Trap.h"
#include "FalseFloorTrap.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API AFalseFloorTrap : public ATrap
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TArray<AActor*> ObjectsFloor;

	virtual void ResetTrap() override;
	
	UStaticMeshComponent* StaticMesh;
	
	virtual bool ExecuteTrapInterface() override;
};
