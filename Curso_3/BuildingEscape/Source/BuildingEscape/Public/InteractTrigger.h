// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "InteractInterface.h"
#include "GameFramework/Actor.h"
#include "InteractTrigger.generated.h"

UENUM()
enum class ELastStateObjectOverlap
{
	BeginOverlap,
	EndOverlap,
};

UCLASS()
class BUILDINGESCAPE_API AInteractTrigger : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Interact Trigger")
	UBoxComponent* BoxTriggerVolume;

	ELastStateObjectOverlap LastObjectRegister;
	
	UFUNCTION()
	virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp
			, class AActor* OtherActor
			, class UPrimitiveComponent* OtherComp
			, int32 OtherBodyIndex
			, bool bFromSweep
			, const FHitResult& SweepResult);
	
	UFUNCTION()
	virtual void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp
		, class AActor* OtherActor
		, class UPrimitiveComponent* OtherComp
		, int32 OtherBodyIndex);

	virtual bool ExecuteInteractInterface() override;

};
