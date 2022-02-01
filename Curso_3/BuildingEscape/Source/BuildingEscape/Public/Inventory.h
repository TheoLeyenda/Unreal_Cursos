// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Components/ActorComponent.h"
#include "Inventory.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerInventoryUpdated);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UInventory : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventory();
	
	class ABuildingScapeCharacter* BuildingScapeCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 0.0))
	int32 Capacity = 20;

	UPROPERTY(VisibleAnywhere)
	UItem* CurrentItemSelected;
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnPlayerInventoryUpdated OnPlayerInventoryUpdated;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<UItem*> Items;

	UFUNCTION(BlueprintCallable)
	void AddItem(UItem* Item);

	UFUNCTION(BlueprintCallable)
	void RemoveItem(UItem* Item);

	UFUNCTION(BlueprintCallable)
	void UseItem(UItem* Item);

	UFUNCTION(BlueprintCallable)
	void RemoveCurrentItemSelected();
};
