// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPS_MultiplayerTuto1Character.h"
#include "Components/ActorComponent.h"
#include "InteractComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPS_MULTIPLAYERTUTO1_API UInteractComponent : public UActorComponent
{
	GENERATED_BODY()
protected:
	void SetupInteractComponent();
public:
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintCallable)
	virtual bool Interaction();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= "Settings")
	AController* OwnerController;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= "Settings")
	APawn* OwnerPawn;
};
