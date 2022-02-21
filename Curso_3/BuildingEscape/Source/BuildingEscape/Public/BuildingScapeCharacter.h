// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "BuildingScapeCharacter.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStats
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "BuildingScapeCharacter Settings")
	float Fatness = 0.0f;

	UPROPERTY(EditAnywhere, Category= "BuildingScapeCharacter Settings")
	int Lifes = 3;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSubstractLife);
UCLASS()
class BUILDINGESCAPE_API ABuildingScapeCharacter : public ACharacter
{
	GENERATED_BODY()
	
	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;
public:
	// Sets default values for this character's properties
	ABuildingScapeCharacter();
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdatePlayerStats, ABuildingScapeCharacter*, BuildingScapeCharacter);

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnUpdatePlayerStats OnUpdatePlayerStats;
	
protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Camera)
	float BaseLookUpRate;

	FPlayerStats PlayerStats;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "BuildingScapeCharacter Settings")
	bool bEnableMovement = true;
	
	void Interact();

	void ThrowObject();

	UFUNCTION()
	void DisableMovement();

	UPROPERTY()
	class ABuildingEscapeGameMode* BuildingEscapeGameMode;
	
public:
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnSubstractLife OnSubstractLife;
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaSeconds) override;
	
	void MoveForward(float Val);

	void MoveRight(float Val);

	void Turn(float Value);

	void LookUp(float Value);

	UFUNCTION(BlueprintCallable)
	void SetPlayerFatness(float Value);
	UFUNCTION(BlueprintCallable)
	float GetPlayerFatness();
	UFUNCTION(BlueprintCallable)
	void AddPlayerFatness(float Value);
	UFUNCTION(BlueprintCallable)
	void SubstractPlayerFatness(float Value);
	
	void GrabPressed();
	void GrabRelease();
	
	UFUNCTION(BlueprintCallable)
	void SetPlayerLifes(int Value);
	UFUNCTION(BlueprintCallable)
	int GetPlayerLifes();
	UFUNCTION(BlueprintCallable)
	void SubstractLifes(int Value);
	UFUNCTION(BlueprintCallable)
	void AddLifes(int Value);
	
	void RestartGamePressed();
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category= "BuildingScapeCharacter Settings")
	class UGrabber* Grabber;

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= "BuildingScapeCharacter Settings")
	//class UInventoryComponent* InventoryComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= "BuildingScapeCharacter Settings")
	class UInventory* PlayerInventoryComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= "BuildingScapeCharacter Settings")
	class UInteractComponent* InteractComponent;
};


