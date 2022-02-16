// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractInterface.h"
#include "InteractComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteract, UInteractComponent*, InteractComponent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UInteractComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractComponent();

protected:

	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;

	FVector GetPlayerReach();
	FHitResult GetFirstPhysicsBodyInReach();

	IInteractInterface* InteractInterface;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interact Component")
	float Reach = 200.0f;
	bool bEnableInteract = false;
public:

	UPROPERTY(BlueprintReadWrite)
	FOnInteract OnInteract;

	UPROPERTY(VisibleAnywhere)
	AActor* ActorHit;
	
	UFUNCTION()
	void Interact(class ABuildingScapeCharacter* Character);
	void CheckEnableInteract(float DeltaSeconds);
};
