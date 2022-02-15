// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "QuestSystem/QuestActorComponentID.h"
#include "InteractInterface.h"
#include "Trap.h"
#include "GameFramework/Actor.h"
#include "InteractTrigger.generated.h"

UENUM()
enum class ELastStateObjectOverlap
{
	BeginOverlap,
	EndOverlap,
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBeginOverlapInteractTrigger);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndOverlapInteractTrigger);

UCLASS()
class BUILDINGESCAPE_API AInteractTrigger : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompleteInteractTrigger, AInteractTrigger*, InteractTrigger);
	
public:	
	// Sets default values for this actor's properties
	AInteractTrigger();

	UPROPERTY(EditAnywhere)
	ATrap* Trap;

	UPROPERTY(EditAnywhere)
	bool bDestroyMeOnTrigger = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* BoxTriggerVolume;

	FOnBeginOverlapInteractTrigger OnBeginOverlapInteractTrigger;
	FOnEndOverlapInteractTrigger OnEndOverlapInteractTrigger;
	FOnCompleteInteractTrigger OnCompleteInteractTrigger;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	ELastStateObjectOverlap LastObjectRegister;

	UPROPERTY(EditAnywhere)
	UQuestActorComponentID* QuestActorComponentID;
	
	void ExecuteTrap();
	
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

