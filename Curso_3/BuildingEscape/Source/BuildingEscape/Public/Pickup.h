// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "QuestSystem/QuestActorComponentID.h"
#include "InteractInterface.h"
#include "Item.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class BUILDINGESCAPE_API APickup : public AActor, public IInteractInterface
{
	GENERATED_BODY()

protected:
	FTimerHandle TimerToCheckHideMessage;
	float TimeToHideMessage = 0.1f;
	bool bEnableDestroyTimer = false;
	
public:	
	// Sets default values for this actor's properties
	APickup();
	
	UPROPERTY(EditAnywhere)
	UQuestActorComponentID* QuestActorComponentID;	

	void Tick(float DeltaSeconds) override;
	
	UPROPERTY(EditAnywhere, Category= "Pickup")
	bool bEnableUseMessagePickup = true;
	
	bool bUseMessagePickup = false;
	
	UPROPERTY(EditAnywhere, Category="Pickup")
	bool bUseRotatePickup = true;
	
	UPROPERTY(EditAnywhere, Category="Pickup")
	float SpeedRotatePickup = 50;
	
	void RotatePickUp(float DeltaTime);

	void ShowMessagePickup();

	void HideMessagePickup();
	
	void MakeTextFacePlayer();

	virtual bool ExecuteInteractInterface(ABuildingScapeCharacter* Character) override;
	
	virtual bool ExecuteInterfaceOnHitInteraction(float DeltaSeconds) override;
	
	UPROPERTY(EditAnywhere, Category="Pickup")
	UTextRenderComponent* MyText;

	UPROPERTY(EditAnywhere, Category="Pickup")
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, Category="Pickup")
	USceneComponent* SceneComponent;

	UPROPERTY(EditDefaultsOnly, Instanced, Category= "Pickup")
	UItem* PickupItem;
};
