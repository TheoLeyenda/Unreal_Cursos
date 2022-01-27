// Copyright Theo Leyenda 2022


#include "BuildingScapeCharacter.h"
#include "InventoryComponent.h"
#include "DrawDebugHelpers.h"
#include "Item.h"
#include "Pickup.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ABuildingScapeCharacter::ABuildingScapeCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	
	BaseTurnRate = 45.0f;
	BaseLookUpRate = 45.0f;

	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Inventory System //
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>("Inventory");
}

// Called to bind functionality to input
void ABuildingScapeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ABuildingScapeCharacter::TakeObject);
	
	PlayerInputComponent->BindAxis("MoveForward", this, &ABuildingScapeCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABuildingScapeCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &ABuildingScapeCharacter::Turn);

	PlayerInputComponent->BindAxis("LookUp", this, &ABuildingScapeCharacter::LookUp);

}

void ABuildingScapeCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	CheckEnableTakeObject();
	
}

void ABuildingScapeCharacter::MoveForward(float Value)
{
	if(!bEnableMovement){return;}
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ABuildingScapeCharacter::MoveRight(float Value)
{
	if(!bEnableMovement){return;}
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ABuildingScapeCharacter::Turn(float Value)
{
	if(!bEnableMovement){return;}
	AddControllerYawInput(Value);
}

void ABuildingScapeCharacter::LookUp(float Value)
{
	if(!bEnableMovement){return;}
	AddControllerPitchInput(Value);
}

void ABuildingScapeCharacter::CheckEnableTakeObject()
{
	FHitResult HitResult = GetFirstPhysicsBodyInReach();

	AActor* ActorHit = HitResult.GetActor();

	if(!ActorHit)
	{
		CurrentPickupTake = nullptr;
		return;
	}

	APickup* Pickup = Cast<APickup>(ActorHit);
	CurrentPickupTake = Pickup;
	if(CurrentPickupTake)
	{
		CurrentPickupTake->ShowMessagePickup();
	}
}

FVector ABuildingScapeCharacter::GetPlayerReach()
{
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation,OUT PlayerViewPointRotation);
	FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * Reach;

	return LineTraceEnd;
}

FHitResult ABuildingScapeCharacter::GetFirstPhysicsBodyInReach()
{
	FVector LineTraceEnd = GetPlayerReach();
	
	FHitResult Hit;
	FCollisionQueryParams TraceParams(FName(TEXT("")), false, GetOwner());
	GetWorld()->LineTraceSingleByObjectType(
		OUT Hit,
		PlayerViewPointLocation,
		LineTraceEnd,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParams
	);

	AActor* ActorHit = Hit.GetActor();

//	DrawDebugLine(
//	GetWorld(),
//	PlayerViewPointLocation,
//	LineTraceEnd,
//	FColor::Green,
//	false,
//	0.0f,
//	0,
//	5.
//	);
	
	if(ActorHit)
	{
		//Logging out to test
		UE_LOG(LogTemp, Warning, TEXT("Line trace has hit: %s"), *ActorHit->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("NO le hice hit a un sorongo"));
	}
	return Hit;
}

void ABuildingScapeCharacter::TakeObject()
{
	if(CurrentPickupTake)
	{
		if(CurrentPickupTake->PickupItem)
		{
			InventoryComponent->AddItem(CurrentPickupTake->PickupItem);
		}
		CurrentPickupTake->Destroy();
		CurrentPickupTake = nullptr;
	}
}

void ABuildingScapeCharacter::SetPlayerHealth(float Value)
{
	Health = Value;
}

float ABuildingScapeCharacter::GetPlayerHealth()
{
	return Health;
}



void ABuildingScapeCharacter::UseItem(UItem* Item)
{
	if(Item)
	{
		Item->Use(this);
		Item->OnUse(this); //bp->Event.
	}
}
