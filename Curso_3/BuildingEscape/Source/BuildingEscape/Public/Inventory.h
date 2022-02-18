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
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerInventorySpecificUpdate, UInventory*, Inventory);
	// Sets default values for this component's properties
	UInventory();
	
	class ABuildingScapeCharacter* BuildingScapeCharacter;

	UPROPERTY(VisibleAnywhere)
	UItem* CurrentItemSelected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DropItemOffset = 200.0f;

	UFUNCTION(BlueprintCallable)
	void DropItem(UItem* Item);
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnPlayerInventoryUpdated OnPlayerInventoryUpdated;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnPlayerInventorySpecificUpdate OnPlayerInventorySpecificUpdate;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<UItem*> Items;

	UFUNCTION(BlueprintCallable)
	void AddItem(UItem* Item);

	UFUNCTION(BlueprintCallable)
	void RemoveItem(UItem* Item);

	UFUNCTION()
	bool CheckHaveItem(TSubclassOf<UItem> ItemClass);
	
	UFUNCTION(BlueprintCallable)
	void UseItem(UItem* Item);

	UFUNCTION(BlueprintCallable)
	void RemoveCurrentItemSelected();
};
