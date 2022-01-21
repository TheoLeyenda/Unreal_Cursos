// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"

UENUM()
enum class ETypeRotationDoor
{
	Lerp,
	Interpolation,
};
UENUM()
enum class ETypeOpenDoor
{
	TriggerVolumenCollisionPlayer,
	TriggerVolumenMassNumber,
	
};
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Door Settings")
	ETypeRotationDoor TypeRotationDoor = ETypeRotationDoor::Lerp;

	UPROPERTY(EditAnywhere, Category= "Door Settings")
	ETypeOpenDoor TypeOpenDoor = ETypeOpenDoor::TriggerVolumenMassNumber;
	
	UPROPERTY(EditAnywhere, Category = "Door Settings")
	bool bUseShowRotationYaw = true;

	UPROPERTY(EditAnywhere, Category = "Door Settings")
	float SpeedOpenDoor;

	UPROPERTY(EditAnywhere, Category= "Door Settings")
	float SpeedCloseDoor;

	UPROPERTY(EditAnywhere, Category = "Door Settings")
	float TargetYawOpenDoor = 90.0f;

	UPROPERTY(EditAnywhere, Category= "Door Settings")
	float TargetYawCloseDoor = 0.0f;

	UPROPERTY(EditAnywhere, Category= "Door Settings")
	ATriggerVolume* PressurePlate;

	UPROPERTY(EditAnywhere, Category= "Door Settings")
	AActor* ActorThatOpen;

	float DoorLastOpened = 0.0f;
	
	UPROPERTY(EditAnywhere, Category= "Door Settings")
	float DoorCloseDelay = 2.0f;

	UPROPERTY(EditAnywhere, Category= "Door Settings")
	float MassToOpenDoor = 50.0f;

	UPROPERTY()
	UAudioComponent* AudioComponent = nullptr;

	bool bOpenDoorSound = false;
	bool bCloseDoorSound = true;
	void CheckCloseDoorSound();
	void CheckOpenDoorSound();
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void RotateDoorAngle90();
	void RotationDoorYaw(float TargetAngleYaw, float DeltaTime, float SpeedRotation, ETypeRotationDoor TypeRotation);
	void ShowCurrentRotationYaw();
	void CheckTypeOpenDoor(float DeltaTime);
	void CheckOpenDoorByMassInPressurePlate(float DeltaTime);
	void CheckOpenDoorByCollisionPlayer(float DeltaTime);
	void CheckShowCurrentRotationYaw();
	float TotalMassActors() const;
	void FindAuidioComponent();
};
