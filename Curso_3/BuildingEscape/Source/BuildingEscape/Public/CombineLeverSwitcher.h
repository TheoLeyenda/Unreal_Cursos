// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CombineLeverSwitcher.generated.h"

UCLASS()
class BUILDINGESCAPE_API ACombineLeverSwitcher : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACombineLeverSwitcher();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
