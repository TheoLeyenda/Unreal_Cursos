// Copyright Theo Leyenda 2022


#include "ModifiableStaticMesh.h"

// Sets default values
AModifiableStaticMesh::AModifiableStaticMesh()
{
	PrimaryActorTick.bCanEverTick = false;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
}

void AModifiableStaticMesh::SetNewMaterial(int IndexMaterial, UMaterialInterface* MaterialInterface)
{
	StaticMesh->SetMaterial(IndexMaterial, MaterialInterface);
}


