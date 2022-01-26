// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DrawDebugHelpers.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Grabber.generated.h"

#define OUT

UENUM()
enum class ETypeGrabbel
{
	AtLocation,
	AtLocationAndRotation,
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	float Reach = 100.0f;

	UPROPERTY(EditAnywhere)
	FColor ColorDebugLine = FColor::Emerald;

	UPROPERTY(EditAnywhere)
	ETypeGrabbel TypeGrabbel;
	
	UPhysicsHandleComponent* PhysicsHandle = nullptr;
	
	void FindPhysicsHandle();

	void SetupInputComponent();
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	void GrabPressed();
	void GrabRelease();
private:
	UInputComponent* InputComponent = nullptr;

	UPROPERTY(EditAnywhere)
	bool bShowLogsPlayerLocationAndRotation = false;

	UPROPERTY(EditAnywhere)
	bool bShowDrawDebugLine = false;

	UPROPERTY(EditAnywhere)
	bool bShowHitActorName = false;

	void ShowDrawDebugLine();
	void ShowLogsPlayerlocationAndRotation();
	void ShowLineTraceHitActor(FHitResult Hit);
	
	FHitResult GetFirstPhysicsBodyInReach();

	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	FVector GetPlayerReach();
};
