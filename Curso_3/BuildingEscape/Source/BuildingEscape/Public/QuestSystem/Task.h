// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "StructsDataSystemQuest.h"

#include "GameFramework/Actor.h"
#include "Task.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateTask,FDataPlayer, DataPlayer);

UCLASS()
class BUILDINGESCAPE_API ATask : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ATask();

	virtual void BeginPlay() override;
	
	class ABuildingScapeCharacter* BuildingScapeCharacter;
	FDataPlayer SendDataPlayer;
	
	FOnUpdateTask OnUpdateTask;

	UFUNCTION()
	void SendEventUpdateTask();

	UFUNCTION()
	virtual void FindInformation();
};
