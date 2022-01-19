// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"

UENUM()
enum class ETypeOpenDoor
{
	Lerp,
	Interpolation,
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

	UPROPERTY(EditAnywhere, Category = "Open Door Settings")
	ETypeOpenDoor TypeOpenDoor = ETypeOpenDoor::Lerp;

	UPROPERTY(EditAnywhere, Category = "Open Door Settings")
	bool bUseShowRotationYaw = true;

	UPROPERTY(EditAnywhere, Category = "Open Door Settings")
	float SpeedOpenDoor;

	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate;

	UPROPERTY(EditAnywhere)
	AActor* ActorThatOpen;
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void RotateDoorAngle90();
	void OpenDoor(float TargetYaw, float DeltaTime);
	void ShowCurrentRotationYaw();
	void CheckOpenDoorByPressurePlate(float DeltaTime);
	void CheckShowCurrentRotationYaw();
private:
		UPROPERTY(EditAnywhere, Category = "Open Door Settings")
		float TargetYaw = 90.0f;
};
