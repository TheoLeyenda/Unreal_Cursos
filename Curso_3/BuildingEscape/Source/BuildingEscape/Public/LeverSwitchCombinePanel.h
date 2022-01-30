// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "CombinePanel.h"
#include "BuildingEscapeGameMode.h"
#include "ObjectSpawnLeverSwitch.h"
#include "LeverSwitchCombinePanel.generated.h"

/**
 * 
*/
USTRUCT()
struct FSpawnObjectInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere)
	int Code;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ObjectSpawn;
};

USTRUCT()
struct FSwitcherInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	AObjectSpawnLeverSwitch* LeverSwitch;
	UPROPERTY(VisibleAnywhere)
	int Code;
	UPROPERTY(VisibleAnywhere)
	TSubclassOf<AActor> ObjectSpawn;
	UPROPERTY(VisibleAnywhere)
	bool CheckDone = false;
};

UCLASS()
class BUILDINGESCAPE_API ALeverSwitchCombinePanel : public ACombinePanel
{
	GENERATED_BODY()

	ALeverSwitchCombinePanel();
	
	UPROPERTY(EditAnywhere)
	TArray<FSpawnObjectInfo> SpawnObjectsInfo;
	UPROPERTY(EditAnywhere)
	TArray<FSwitcherInfo> LeverSwitchesInfo;
	int CurrentSwitcher = 0;
protected:

	UPROPERTY(EditAnywhere)
	int LifeSubstractForFail = 1;
	
	ABuildingEscapeGameMode* BuildingEscapeGameMode;
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	void ResetCombinePanel(bool FailCombinePanel);
};

