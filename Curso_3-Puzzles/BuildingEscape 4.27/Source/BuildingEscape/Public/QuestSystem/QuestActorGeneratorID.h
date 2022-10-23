// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestActorComponentID.h"
#include "GameFramework/Actor.h"
#include "QuestActorGeneratorID.generated.h"

UCLASS()
class BUILDINGESCAPE_API AQuestActorGeneratorID : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AQuestActorGeneratorID();

protected:
	// Called when the game starts or when spawned

	UPROPERTY(VisibleAnywhere)
	TArray<UQuestActorComponentID*> QuestActorComponentIds;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> NamesActors;
	
	UPROPERTY(EditAnywhere)
	TArray<AActor*> Actors;

	UPROPERTY(EditAnywhere)
	bool bShowNames = false;
	
	virtual void BeginPlay() override;

	UFUNCTION()
	void ShowNamesActors();
};
