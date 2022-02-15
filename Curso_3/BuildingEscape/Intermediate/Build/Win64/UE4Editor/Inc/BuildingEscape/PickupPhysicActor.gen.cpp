// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/PickupPhysicActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupPhysicActor() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_APickupPhysicActor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_APickupPhysicActor();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void APickupPhysicActor::StaticRegisterNativesAPickupPhysicActor()
	{
	}
	UClass* Z_Construct_UClass_APickupPhysicActor_NoRegister()
	{
		return APickupPhysicActor::StaticClass();
	}
	struct Z_Construct_UClass_APickupPhysicActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupPhysicActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupPhysicActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PickupPhysicActor.h" },
		{ "ModuleRelativePath", "Public/PickupPhysicActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupPhysicActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupPhysicActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickupPhysicActor_Statics::ClassParams = {
		&APickupPhysicActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickupPhysicActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupPhysicActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupPhysicActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickupPhysicActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupPhysicActor, 263933210);
	template<> BUILDINGESCAPE_API UClass* StaticClass<APickupPhysicActor>()
	{
		return APickupPhysicActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupPhysicActor(Z_Construct_UClass_APickupPhysicActor, &APickupPhysicActor::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("APickupPhysicActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupPhysicActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
