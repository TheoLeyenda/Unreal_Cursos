// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "InteractTrigger.h"
#include "SubstractLifeTrigger.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ASubstractLifeTrigger : public AInteractTrigger
{
	GENERATED_BODY()
public:
	ASubstractLifeTrigger();

	virtual void BeginPlay() override;
	
	ABuildingScapeCharacter* Player;

	UPROPERTY(EditAnywhere, meta = (ClampMin = 0.1f))
	float DelayEnableSubstractLife = 1.0f;
	FTimerHandle TimerEnableSubstractLife;
	UPROPERTY(VisibleAnywhere)
	bool bEnableSubstractLife = true;
	
	UPROPERTY(EditAnywhere)
	int CountSubstractLifes = 1;

	UPROPERTY(VisibleAnywhere)
	AActor* LastActorCollision;
		
virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex
	, bool bFromSweep
	, const FHitResult& SweepResult) override;
	
	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

	void SendTimerEnableSubstractLife();

	void EnableSubstractLife();
	
	virtual bool ExecuteInteractInterface() override;
};

