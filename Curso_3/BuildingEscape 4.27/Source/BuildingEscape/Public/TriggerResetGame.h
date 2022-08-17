// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "TriggerResetGame.generated.h"

UCLASS()
class BUILDINGESCAPE_API ATriggerResetGame : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATriggerResetGame();

	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxTriggerVolume;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AActor>> ActorsToReset;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp
			, class AActor* OtherActor
			, class UPrimitiveComponent* OtherComp
			, int32 OtherBodyIndex
			, bool bFromSweep
			, const FHitResult& SweepResult);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
