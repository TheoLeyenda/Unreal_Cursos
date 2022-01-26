// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class BUILDINGESCAPE_API APickup : public AActor
{
	GENERATED_BODY()


public:	
	// Sets default values for this actor's properties
	APickup();
	
	virtual void Tick(float DeltaSeconds) override;
	
	UPROPERTY(EditAnywhere, Category= "Pickup")
	bool bUseMessagePickup = true;

	UPROPERTY(EditAnywhere, Category="Pickup")
	bool bUseRotatePickup = true;
	
	UPROPERTY(EditAnywhere, Category="Pickup")
	float SpeedRotatePickup = 50;
	
	void RotatePickUp(float DeltaTime);
	
	void MakeTextFacePlayer();

	UPROPERTY(EditAnywhere, Category="Pickup")
	UTextRenderComponent* MyText;

	UPROPERTY(EditAnywhere, Category="Pickup")
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, Category="Pickup")
	USceneComponent* SceneComponent;
	
};
