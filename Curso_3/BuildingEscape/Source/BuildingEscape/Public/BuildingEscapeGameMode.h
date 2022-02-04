 // Copyright Theo Leyenda 2022

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BuildingEscapeGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameOverActivate);
UCLASS()
class BUILDINGESCAPE_API ABuildingEscapeGameMode : public AGameModeBase
{
	GENERATED_BODY()

	virtual void BeginPlay() override;

	class ABuildingScapeCharacter* CurrentCharacter = nullptr;
	
	UFUNCTION()
	void CheckPlayerDead();

public:
	
	ABuildingScapeCharacter* FindCurrentCharacter();

	UFUNCTION(BlueprintCallable)
	void Restart();

	ABuildingScapeCharacter* GetCurrentCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bGameOver = false;

	UPROPERTY(BlueprintAssignable)
	FOnGameOverActivate OnGameoverActivate;

	UFUNCTION(BlueprintCallable)
	void LoadMap(FString Name);
	
	void ActivateGameOver();
};
