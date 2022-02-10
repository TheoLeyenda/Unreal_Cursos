// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StructsDataSystemQuest.generated.h"


USTRUCT()
struct FInteractActorActivateData
{

	GENERATED_BODY()

	FInteractActorActivateData()
	{
		ActorBlueprint = nullptr;
		Actor = nullptr;
	}
	FInteractActorActivateData(TSubclassOf<AActor> ValueBlueprint, AActor* ValueActor)
	{
		ActorBlueprint = ValueBlueprint;
		Actor = ValueActor;
	}
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ActorBlueprint; // Clase del objeto activado.
	UPROPERTY(EditAnywhere)
	AActor* Actor; // Referencia al objeto en el mundo.
};

USTRUCT(BlueprintType)
struct FDataPlayer
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	float Fatness;
	UPROPERTY(EditAnywhere)
	float Lifes;
	UPROPERTY(EditAnywhere)
	TArray<FInteractActorActivateData> InteractActorsActivateData;
	//DATA QUE RECIVO DE LAS TASK PARA MANDAR AL QuestManager.
};

UCLASS()
class BUILDINGESCAPE_API UStructsDataSystemQuest : public UObject
{
	GENERATED_BODY()
};
