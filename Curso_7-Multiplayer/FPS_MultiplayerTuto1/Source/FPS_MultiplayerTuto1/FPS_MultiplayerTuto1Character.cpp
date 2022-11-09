#include "FPS_MultiplayerTuto1Character.h"
#include "FPS_MultiplayerTuto1Projectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Net/UnrealNetwork.h"
#include "FPS_MultiplayerPlayerController.h"

AFPS_MultiplayerTuto1Character::AFPS_MultiplayerTuto1Character()
{
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	TurnRateGamepad = 45.f;

	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f));
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

}

void AFPS_MultiplayerTuto1Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	
	PlayerInputComponent->BindAction("PrimaryAction", IE_Pressed, this, &AFPS_MultiplayerTuto1Character::StartFiring);
	PlayerInputComponent->BindAction("PrimaryAction", IE_Released, this, &AFPS_MultiplayerTuto1Character::StopFiring);
	
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AFPS_MultiplayerTuto1Character::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &AFPS_MultiplayerTuto1Character::MoveRight);
	
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &AFPS_MultiplayerTuto1Character::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &AFPS_MultiplayerTuto1Character::LookUpAtRate);
}

void AFPS_MultiplayerTuto1Character::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	//SETEO LA NUEVA ROTACION A LA CAMARA PARA QUE ESTA AFECTE A SU VEZ AL MESH QUE TIENE DE HIJO.

	//PARA QUE LA EL PERSONAJE ENTERO SEA VISIBLE TENGO QUE DESTILDAR LA OPCION DE Only Owner See de todos los Meshes.
	FirstPersonCameraComponent->SetWorldRotation(GetViewRotation());
}


//Esta funcion no nesecita Header, es para replicar propiedades en la clase AFPS_MultiplayerTuto1Character.
void AFPS_MultiplayerTuto1Character::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	//REPLICO LA Task
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AFPS_MultiplayerTuto1Character, Task);
}

void AFPS_MultiplayerTuto1Character::OnRep_Task()
{
	switch (Task)
	{
	case ETaskEnum::None:
		UE_LOG(LogTemp, Warning, TEXT("Task: None"))
		break;
	case ETaskEnum::Fire:
		UE_LOG(LogTemp, Warning, TEXT("Task: Fire"))
		OnFire();
		break;
	case ETaskEnum::Reload:
		UE_LOG(LogTemp, Warning, TEXT("Task: Reload"))
		break;
	}
	
}

void AFPS_MultiplayerTuto1Character::OnRep_Health()
{
	FirstPersonCameraComponent->PostProcessSettings.SceneFringeIntensity = 5.0f - Health * 0.05f;
	
}

float AFPS_MultiplayerTuto1Character::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent,
	AController* EventInstigator, AActor* DamageCauser)
{
	Health -= DamageAmount;
	if(Health <= 0)
	{
		if(auto* MultiplayerPlayerController = Cast<AFPS_MultiplayerPlayerController>(GetController()))
		{
			MultiplayerPlayerController->OnKilled();
		}

		Destroy();
	}

	OnRep_Health();
	return DamageAmount;
}

FRotator AFPS_MultiplayerTuto1Character::GetViewRotation() const
{
	//RECREO LA ROTACION EN MI PERSONAJE PARA LUEGO REPLICARLA.
	if(Controller)
	{
		return Controller->GetControlRotation();
	}

	return FRotator(RemoteViewPitch / 255.0f * 360.0f, GetActorRotation().Yaw, 0.0f);
}

void AFPS_MultiplayerTuto1Character::StartFiring()
{
	UE_LOG(LogTemp, Warning, TEXT("StartFiring"))
	PerformTask(ETaskEnum::Fire);
}

void AFPS_MultiplayerTuto1Character::StopFiring()
{
	UE_LOG(LogTemp, Warning, TEXT("StopFiring"))
	PerformTask(ETaskEnum::None);
}

void AFPS_MultiplayerTuto1Character::PerformTask(ETaskEnum::Type NewTask)
{
	if(GetNetMode() == NM_Client)
	{
		ServerPerformTask(NewTask);
		return;
	}
	
	Task = NewTask;
	OnRep_Task();
}

void AFPS_MultiplayerTuto1Character::ServerPerformTask_Implementation(ETaskEnum::Type NewTask)
{
	PerformTask(NewTask);
}

bool AFPS_MultiplayerTuto1Character::ServerPerformTask_Validate(ETaskEnum::Type NewTask)
{
	return true;
}

void AFPS_MultiplayerTuto1Character::OnFire()
{
	if(Task != ETaskEnum::Fire) return;
	
	OnUseItem.Broadcast();

	GetWorldTimerManager().SetTimer(TimerHandle_Task, this, &AFPS_MultiplayerTuto1Character::OnFire, DelayHandle_Task, false);
}

void AFPS_MultiplayerTuto1Character::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AFPS_MultiplayerTuto1Character::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AFPS_MultiplayerTuto1Character::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AFPS_MultiplayerTuto1Character::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}
