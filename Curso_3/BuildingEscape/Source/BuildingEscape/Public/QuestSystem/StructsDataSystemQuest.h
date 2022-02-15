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

	UPROPERTY(Instanced, EditAnywhere)
	TArray<UItem*> NeedItems;

	UPROPERTY(VisibleAnywhere)
	UInventory* InventoryComponent;
	
	UPROPERTY(EditAnywhere)
	float Fatness;
	UPROPERTY(EditAnywhere)
	int Lifes;
	UPROPERTY(EditAnywhere)
	FLastInteractActorInfo LastInteractActorInfo;
	//DATA QUE RECIVO DE LAS TASK PARA MANDAR AL QuestManager.
};

UCLASS()
class BUILDINGESCAPE_API UStructsDataSystemQuest : public UObject
{
	GENERATED_BODY()
};
