// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "FireWeapon.generated.h"

UCLASS()
class FPS_MULTIPLAYERTUTO1_API AFireWeapon : public ABaseWeapon
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(EditAnywhere, Category= "Weapon")
	TSubclassOf<class AFPS_MultiplayerTuto1Projectile> ProjectileClass;

};
