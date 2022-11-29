// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	SemiAuto,
	Burst,
	Auto,
};

UCLASS()
class FPS_MULTIPLAYERTUTO1_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	ABaseWeapon();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= "Weapon")
	USkeletalMeshComponent* WeaponMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Weapon")
	EWeaponType WeaponType = EWeaponType::SemiAuto;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Weapon")
	float DamageAmount = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Weapon")
	float AttackRate = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	UAnimMontage* WeaponMontage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	USoundBase* WeaponSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	TSubclassOf<UCameraShakeBase> WeaponShake;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector MuzzleOffset = FVector(100.0f, 0.0f, 10.0f);
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Attack();
};
