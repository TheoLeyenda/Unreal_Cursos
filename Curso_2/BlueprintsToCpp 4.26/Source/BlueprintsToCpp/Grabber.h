// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/PrimitiveComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class BLUEPRINTSTOCPP_API UGrabber : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FVector GetMaxGrabLocation() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FVector GetHoldLocation() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	UPhysicsHandleComponent*  GetPhysicsComponent();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) // se utiliza para crear un evento en unreal y definirlo por blueprint en este.
	void NotifyQuestActor(AActor* Actor);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool TraceForPhysicsBodies(AActor*& HitActor, UPrimitiveComponent*& HitComponent);
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float MaxGrabDistance = 100;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float HoldDistance = 100;
};
