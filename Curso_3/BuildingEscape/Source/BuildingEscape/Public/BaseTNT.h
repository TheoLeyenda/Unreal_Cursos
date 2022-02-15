// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "QuestSystem/QuestActorComponentID.h"
#include "BaseTNT.generated.h"

UCLASS()
class BUILDINGESCAPE_API ABaseTNT : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseTNT();

	UPROPERTY(EditAnywhere)
	UQuestActorComponentID* QuestActorComponentID;
	
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AActor>> ActorsToDestroy;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ParticleBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SceneComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* BoxComponent;
	
	virtual void BeginPlay() override;
	
	UFUNCTION()
	virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp
			, class AActor* OtherActor
			, class UPrimitiveComponent* OtherComp
			, int32 OtherBodyIndex
			, bool bFromSweep
			, const FHitResult& SweepResult);

	virtual void Explotion(AActor* Actor);

};

