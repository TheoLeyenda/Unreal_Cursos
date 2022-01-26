// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "FoodItem.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UFoodItem : public UItem
{
	GENERATED_BODY()
protected:

	virtual void Use(ABuildingScapeCharacter* Character) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category= "Item", meta = (ClampMin = 0.0))
	float HealthToHeal = 10.0f;
};