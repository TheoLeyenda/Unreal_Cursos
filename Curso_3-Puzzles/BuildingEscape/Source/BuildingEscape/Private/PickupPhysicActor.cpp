// Copyright Theo Leyenda 2022


#include "PickupPhysicActor.h"

APickupPhysicActor::APickupPhysicActor() : APickup()
{
	StaticMeshComponent->SetupAttachment(SceneComponent);

	MyText->AttachToComponent(StaticMeshComponent, FAttachmentTransformRules::KeepRelativeTransform);
	MyText->SetRelativeLocation(FVector(0.0f,0.0f,220.0f));
	MyText->SetRelativeScale3D(FVector(5.0f,5.0f,5.0f));

	bUseRotatePickup = false;
}
