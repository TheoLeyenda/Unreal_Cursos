 // Copyright Theo Leyenda 2022

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BuildingScapeCharacter.h"
#include "ObjectSpawner.h"
#include "GameFramework/PlayerStart.h"
#include "BuildingEscapeGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ABuildingEscapeGameMode : public AGameModeBase
{
	GENERATED_BODY()

	virtual void BeginPlay() override;

	ABuildingScapeCharacter* CurrentCharacter = nullptr;
	
	UFUNCTION()
	void CheckPlayerDead();

public:
	
	ABuildingScapeCharacter* FindCurrentCharacter();
	
	void Restart();

	ABuildingScapeCharacter* GetCurrentCharacter();
};
