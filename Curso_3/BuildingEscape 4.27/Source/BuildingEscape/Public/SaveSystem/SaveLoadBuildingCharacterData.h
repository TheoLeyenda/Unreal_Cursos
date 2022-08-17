// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "SaveSystem/SaveLoadData.h"
#include "Inventory.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "SaveLoadBuildingCharacterData.generated.h"

struct FSaveArchive : public FObjectAndNameAsStringProxyArchive
{
	FSaveArchive(FArchive& InInnerArchive, bool bInLoadIfFindFails) : FObjectAndNameAsStringProxyArchive(InInnerArchive, bInLoadIfFindFails)
	{
		ArIsSaveGame = true;
		ArNoDelta = true;
	}
};

USTRUCT(BlueprintType)
struct FActorSpawnInfo
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FTransform ActorTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FPlayerStats PlayerStats;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<UItem*> Items;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TSoftClassPtr<class AActor> ActorPtr = nullptr;

	TArray<uint8> ActorSaveData;

	friend FSaveArchive& operator<<(FSaveArchive& Ar, FActorSpawnInfo& ActorData)
	{
		Ar << ActorData.ActorTransform;
		Ar << ActorData.ActorPtr;
		Ar << ActorData.PlayerStats.Fatness;
		Ar << ActorData.PlayerStats.Lifes;
		Ar << ActorData.ActorSaveData;
		Ar << ActorData.Items;
		return Ar;
	}
};
UCLASS()
class BUILDINGESCAPE_API USaveLoadBuildingCharacterData : public USaveLoadData
{
	GENERATED_BODY()
	
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

public:
	virtual void Save(AActor* Actor) override;

	virtual void Load(AActor* Actor) override;
};
