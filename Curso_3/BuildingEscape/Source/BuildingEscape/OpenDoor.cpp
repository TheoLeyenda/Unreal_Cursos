// Copyright Theo Leyenda 2022


#include "OpenDoor.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(bUseShowRotationYaw)
	{
		ShowCurrentRotationYaw();
	}

	if(TypeOpenDoor == ETypeOpenDoor::TickAndLerp || TypeOpenDoor == ETypeOpenDoor::TickAndInterpolation)
	{
		OpenDoorByLerp(TargetYaw, 0, 1, DeltaTime);
	}
}

void UOpenDoor::RotateDoorAngle90()
{
	FRotator CurrentRotation = GetOwner()->GetActorRotation();
	CurrentRotation.Yaw = 90.0f;

	GetOwner()->SetActorRotation(CurrentRotation);
}

void UOpenDoor::ShowCurrentRotationYaw()
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *GetOwner()->GetActorRotation().ToString());
	UE_LOG(LogTemp, Warning, TEXT("Yaw is: %f"), GetOwner()->GetActorRotation().Yaw);

}

void UOpenDoor::OpenDoorByLerp(float TargetYawRotationDoor, float MinAlpha, float MaxAlpha, float DeltaTime)
{
	AActor* Owner = GetOwner();
	FRotator CurrentRotation = Owner->GetActorRotation();
	float CurrentYaw = CurrentRotation.Yaw;
	float newYaw = 0;

	if(TypeOpenDoor == ETypeOpenDoor::TickAndLerp || TypeOpenDoor == ETypeOpenDoor::TimelineAndlerp)
	{
		newYaw= FMath::Lerp(CurrentYaw, TargetYawRotationDoor, SpeedOpenDoorByLerp* DeltaTime);
	}
	else if(TypeOpenDoor == ETypeOpenDoor::TickAndInterpolation || TypeOpenDoor == ETypeOpenDoor::TimelineAndInterpolation)
	{
		newYaw= FMath::FInterpConstantTo(CurrentYaw, TargetYawRotationDoor,DeltaTime, SpeedOpenDoorByLerp);
	}
	
	FRotator NewRotation = FRotator(CurrentRotation.Pitch, newYaw, CurrentRotation.Roll);
	
	Owner->SetActorRotation(NewRotation);
}
