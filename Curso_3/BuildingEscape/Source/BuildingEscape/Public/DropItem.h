// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "DropItem.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UDropItem : public UItem
{
	GENERATED_BODY()
protected:

	virtual void Use(ABuildingScapeCharacter* Character) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Item")
	float SpawnOffsetZ = 100.0f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category= "Item", meta = (ClampMin = 0.0))
	TSubclassOf<AActor> BluprintActorDrop = nullptr;
};
