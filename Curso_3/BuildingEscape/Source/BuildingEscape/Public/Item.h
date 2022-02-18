// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "BuildingScapeCharacter.h"
#include "UObject/NoExportTypes.h"
#include "Item.generated.h"

/**
 * 
 */
UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class BUILDINGESCAPE_API UItem : public UObject
{
	GENERATED_BODY()

public:
	UItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Item")
	bool bSelectedItem = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Item")
	TSubclassOf<AActor> BlueprintActorItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Item")
	bool bUseItemFuncionality = true;
	
	/** The Text for using the item. (Equip, Eat, etc)**/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Item")
	FText UseActionText;

	/**The thumbnail for this item**/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Item")
	UTexture2D* Thumbnail;

	/**The display name for this item in the inventory**/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Item")
	FText ItemDisplayName;

	/**An optional description for the item**/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Item", meta = (MultiLine = true))
	FText ItemDescription;

	/**The weight of the item**/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Item", meta = (ClampMin = 0.0))
	float Weight;

	virtual void Use(ABuildingScapeCharacter* Character);

	virtual void Use();
	UFUNCTION(BlueprintImplementableEvent)
	void OnUse(ABuildingScapeCharacter* Character);
};
