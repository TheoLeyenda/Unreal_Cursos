// Copyright Theo Leyenda 2022


#include "OpenDoor.h"
#include "Kismet/GameplayStatics.h" //UGameplayStatics

#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

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
	
	//ActorThatOpen = UGameplayStatics::GetPlayerPawn(GetWorld(),0);
	ActorThatOpen = GetWorld()->GetFirstPlayerController()->GetPawn();
	
	if(!PressurePlate)
	{
		UE_LOG(LogTemp, Error, TEXT("%s has the open door component on it, but no pressureplate set") , *GetOwner()->GetName())
	}
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	CheckShowCurrentRotationYaw();

	CheckDoorByPressurePlate(DeltaTime);
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

void UOpenDoor::RotationDooYaw(float TargetYawRotationDoor, float DeltaTime, float SpeedRotation)
{
	AActor* Owner = GetOwner();
	FRotator CurrentRotation = Owner->GetActorRotation();
	float CurrentYaw = CurrentRotation.Yaw;
	float newYaw = 0;

	if(TypeOpenDoor == ETypeOpenDoor::Lerp)
	{
		newYaw= FMath::Lerp(CurrentYaw, TargetYawRotationDoor, SpeedRotation* DeltaTime);
	}
	else if(TypeOpenDoor == ETypeOpenDoor::Interpolation)
	{
		newYaw= FMath::FInterpConstantTo(CurrentYaw, TargetYawRotationDoor,DeltaTime, SpeedRotation);
	}
	
	FRotator NewRotation = FRotator(CurrentRotation.Pitch, newYaw, CurrentRotation.Roll);
	
	Owner->SetActorRotation(NewRotation);
}

void UOpenDoor::CheckDoorByPressurePlate(float DeltaTime)
{
	if(PressurePlate)
	{
		if(PressurePlate->IsOverlappingActor(ActorThatOpen))
		{
			RotationDooYaw(TargetYawOpenDoor, DeltaTime, SpeedOpenDoor);
		}
		else
		{
			RotationDooYaw(TargetYawCloseDoor, DeltaTime, SpeedCloseDoor);
		}
	}
	
}

void UOpenDoor::CheckShowCurrentRotationYaw()
{
	if(bUseShowRotationYaw)
	{
		ShowCurrentRotationYaw();
	}
}
