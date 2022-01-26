// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "BuildingScapeCharacter.h"
#include "InventoryComponent.h"
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

	virtual UWorld* GetWorld() const { return World;}
	
	UPROPERTY(Transient)
	UWorld* World;
	
	/** The Text for using the item. (Equip, Eat, etc)**/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Item")
	FText UseActionText;

	/**The mesh to display for this items pickup**/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Item")
	UStaticMesh* PickupMesh;

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

	/**The Inventory that owns this item**/
	UPROPERTY()
	UInventoryComponent* OwningInventory;

	virtual void Use(ABuildingScapeCharacter* Character);

	UFUNCTION(BlueprintImplementableEvent)
	void OnUse(ABuildingScapeCharacter* Character);
};
