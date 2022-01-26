// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "BuildingScapeCharacter.generated.h"

UCLASS()
class BUILDINGESCAPE_API ABuildingScapeCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;
public:
	// Sets default values for this character's properties
	ABuildingScapeCharacter();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Camera)
	float BaseLookUpRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Stats")
	float Health = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player Stats")
	bool bEnableMovement = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UInventoryComponent* InventoryComponent;

public:	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float Val);

	void MoveRight(float Val);

	void Turn(float Value);

	void LookUp(float Value);
	
	void SetPlayerHealth(float Value);

	float GetPlayerHealth();

	void CheckTakeObject();
	
	UFUNCTION(BlueprintCallable)
    void UseItem(class UItem* Item);
};
