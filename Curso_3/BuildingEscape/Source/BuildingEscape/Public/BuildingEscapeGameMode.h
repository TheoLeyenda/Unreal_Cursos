// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BuildingEscapeGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ABuildingEscapeGameMode : public AGameModeBase
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
	
};
