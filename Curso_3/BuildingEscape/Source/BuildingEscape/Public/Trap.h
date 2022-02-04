// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "TrapInterface.h"
#include "GameFramework/Actor.h"
#include "Trap.generated.h"

UCLASS()
class BUILDINGESCAPE_API ATrap : public AActor, public ITrapInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrap();

	virtual bool ExecuteTrapInterface() override;
};
