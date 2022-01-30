// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PuzzleChecker.generated.h"

UCLASS()
class BUILDINGESCAPE_API APuzzleChecker : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuzzleChecker();
	
protected:
	// Called when the game starts or when spawned

	virtual bool PuzzleSucces();

	virtual bool PuzzleFail();

	virtual void CheckPuzzleResult();
};
