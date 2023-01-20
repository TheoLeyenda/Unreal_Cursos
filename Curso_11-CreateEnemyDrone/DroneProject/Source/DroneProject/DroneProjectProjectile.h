// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DroneProjectProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS(config=Game)
class ADroneProjectProjectile : public AActor
{
	GENERATED_BODY()

	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;

public:
	ADroneProjectProjectile();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= Projectile)
	float ImpactImpulse = 75.0f;
	
	/** called when projectile hits something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	//Damage del proyectil, esto luego se pasara a la clase weapon quien sera la que contenga el daño, esto estara aqui temporalmente.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage = 10;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= Projectile)
	TSubclassOf<UDamageType> DamageType;
	//------------------------------------------------------------------------------------------------------------------------------//
	
	/** Returns CollisionComp subobject **/
	USphereComponent* GetCollisionComp() const { return CollisionComp; }
	/** Returns ProjectileMovement subobject **/
	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
};

