// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "CombinePanel.h"
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
	int code;
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
	int code;
	UPROPERTY(VisibleAnywhere)
	TSubclassOf<AActor> ObjectSpawn;
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
	int currentSwitcher = 0;
protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;
	
	virtual void CheckCurrentAnswer();

	virtual void InputCodeAnswer(int Code);
};
