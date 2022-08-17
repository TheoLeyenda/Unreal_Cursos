// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Inventory.h"
#include "UObject/NoExportTypes.h"
#include "StructsDataSystemQuest.generated.h"


USTRUCT()
struct FLastInteractActorInfo
{

	GENERATED_BODY()

	FLastInteractActorInfo()
	{
		ActorBlueprint = nullptr;
	}
	FLastInteractActorInfo(TSubclassOf<AActor> ValueBlueprint)
	{
		ActorBlueprint = ValueBlueprint;
	}
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ActorBlueprint; // Clase del objeto activado.
	UPROPERTY(EditAnywhere)
	int32 ID;
};

USTRUCT(BlueprintType)
struct FDataPlayer
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<UItem>> NeedItems;

	UPROPERTY(VisibleAnywhere)
	UInventory* InventoryComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseFatnessText;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Fatness;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString TextProgressFatness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseLifesText;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Lifes;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString TextProgressLifes;
	
	UPROPERTY(EditAnywhere)
	FLastInteractActorInfo LastInteractActorInfo;
};

UCLASS()
class BUILDINGESCAPE_API UStructsDataSystemQuest : public UObject
{
	GENERATED_BODY()
};
