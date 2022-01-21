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
	
	CheckTypeOpenDoor(DeltaTime);
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

void UOpenDoor::RotationDoorYaw(float TargetYawRotationDoor, float DeltaTime, float SpeedRotation, ETypeRotationDoor TypeRotation)
{
	AActor* Owner = GetOwner();
	FRotator CurrentRotation = Owner->GetActorRotation();
	float CurrentYaw = CurrentRotation.Yaw;
	float newYaw = 0;

	if(TypeRotation == ETypeRotationDoor::Lerp)
	{
		newYaw= FMath::Lerp(CurrentYaw, TargetYawRotationDoor, SpeedRotation* DeltaTime);
	}
	else if(TypeRotation == ETypeRotationDoor::Interpolation)
	{
		newYaw= FMath::FInterpConstantTo(CurrentYaw, TargetYawRotationDoor,DeltaTime, SpeedRotation);
	}
	
	FRotator NewRotation = FRotator(CurrentRotation.Pitch, newYaw, CurrentRotation.Roll);
	
	Owner->SetActorRotation(NewRotation);
}

void UOpenDoor::CheckTypeOpenDoor(float DeltaTime)
{
	if(TypeOpenDoor == ETypeOpenDoor::TriggerVolumenMassNumber)
	{
		CheckOpenDoorByMassInPressurePlate(DeltaTime);
	}
	else if(TypeOpenDoor == ETypeOpenDoor::TriggerVolumenCollisionPlayer)
	{
		CheckOpenDoorByCollisionPlayer(DeltaTime);
	}
}


void UOpenDoor::CheckOpenDoorByMassInPressurePlate(float DeltaTime)
{
	if(PressurePlate)
	{
		if(TotalMassActors() > MassToOpenDoor)
		{
			RotationDoorYaw(TargetYawOpenDoor, DeltaTime, SpeedOpenDoor, TypeRotationDoor);
			DoorLastOpened = GetWorld()->GetTimeSeconds();
		}
		else
		{
			if(GetWorld()->GetTimeSeconds() - DoorLastOpened > DoorCloseDelay)
			{
				RotationDoorYaw(TargetYawCloseDoor, DeltaTime, SpeedCloseDoor, TypeRotationDoor);
			}
		}
	}
	
}

void UOpenDoor::CheckOpenDoorByCollisionPlayer(float DeltaTime)
{
	if(PressurePlate)
	{
		if(PressurePlate->IsOverlappingActor(ActorThatOpen))
		{
			RotationDoorYaw(TargetYawOpenDoor, DeltaTime, SpeedOpenDoor, TypeRotationDoor);
			DoorLastOpened = GetWorld()->GetTimeSeconds();
		}
		else
		{
			if(GetWorld()->GetTimeSeconds() - DoorLastOpened > DoorCloseDelay)
			{
				RotationDoorYaw(TargetYawCloseDoor, DeltaTime, SpeedCloseDoor, TypeRotationDoor);
			}
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

float UOpenDoor::TotalMassActors() const
{
	float TotalMass = 0.0f;
	TArray<AActor*> OverlapingActors;

	PressurePlate->GetOverlappingActors(OverlapingActors);

	for(AActor* Actor: OverlapingActors)
	{
		TotalMass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}
	
	return TotalMass;
}
