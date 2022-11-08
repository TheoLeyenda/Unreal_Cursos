// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPS_MultiplayerTuto1Character.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
class USoundBase;

UENUM()
namespace ETaskEnum
{
	enum Type
	{
		None,
		Fire,
		Reload,
	};
}


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUseItem);

UCLASS(config=Game)
class AFPS_MultiplayerTuto1Character : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	UPROPERTY(ReplicatedUsing= OnRep_Task)
	TEnumAsByte<ETaskEnum::Type> Task = ETaskEnum::None;

	FTimerHandle TimerHandle_Task;

	float DelayHandle_Task = 0.1f;

public:
	AFPS_MultiplayerTuto1Character();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float TurnRateGamepad;

	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnUseItem OnUseItem;
protected:

	void PerformTask(ETaskEnum::Type NewTask);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerPerformTask(ETaskEnum::Type NewTask);
	
	void StartFiring();

	void StopFiring();
	
	/** Fires a projectile. */
	void OnFire();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles strafing movement, left and right */
	void MoveRight(float Val);
	
	void TurnAtRate(float Rate);
	
	void LookUpAtRate(float Rate);
	
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION()
	void OnRep_Task();
	
public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	FRotator GetViewRotation() const override;

};

