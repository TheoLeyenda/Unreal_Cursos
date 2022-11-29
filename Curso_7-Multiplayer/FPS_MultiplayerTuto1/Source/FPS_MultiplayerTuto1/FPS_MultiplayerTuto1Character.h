// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "GameFramework/Character.h"
#include "FPS_MultiplayerTuto1Character.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
class USoundBase;



DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUseItem);

UCLASS(config=Game)
class AFPS_MultiplayerTuto1Character : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;
	
protected:
	UPROPERTY(ReplicatedUsing= OnRep_Health, EditAnywhere, BlueprintReadWrite, Category= "Settings")
	float Health = 100;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= "Weapon")
	ABaseWeapon* CurrentWeapon = nullptr;
	
public:
	AFPS_MultiplayerTuto1Character();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float TurnRateGamepad;

	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnUseItem OnUseItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	UAnimMontage* AttackMontage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	USoundBase* AttackSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	TSubclassOf<UCameraShakeBase> AttackShake;
protected:
	void OnPrimaryAction();

	//-------------NEW ATTACK--------------------//
	UFUNCTION(Server, Unreliable, WithValidation)
	void ServerAttack();

	UFUNCTION(Server, Unreliable)
	void ServerPlayAttackSound();

	UFUNCTION(Server, Unreliable)
	void ServerPlayAttackAnimation();

	UFUNCTION(NetMulticast, Unreliable)
	void ClientPlayAttackSound();

	UFUNCTION(NetMulticast, Unreliable)
	void ClientPlayAttackAnimation();

	UFUNCTION(Client, Unreliable)
	void ClientPlayCameraShake();
	
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
	void OnRep_Health();

	float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	
public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	FRotator GetViewRotation() const override;
	
};

