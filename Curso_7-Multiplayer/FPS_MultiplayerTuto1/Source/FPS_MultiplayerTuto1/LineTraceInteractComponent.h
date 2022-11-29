// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractComponent.h"
#include "LineTraceInteractComponent.generated.h"

/**
 * 
 */
UCLASS()
class FPS_MULTIPLAYERTUTO1_API ULineTraceInteractComponent : public UInteractComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Category= "Settings")
	bool bConfirmInteract = false;

	FHitResult HitResult;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	float LineTraceInteractionRange = 300.0f;
	
	bool CheckInteraction();
	
	virtual bool Interaction() override;
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
