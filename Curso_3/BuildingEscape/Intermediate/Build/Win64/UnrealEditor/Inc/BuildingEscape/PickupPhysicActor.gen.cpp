// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/PickupPhysicActor.h"
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupPhysicActor);
	UClass* Z_Construct_UClass_APickupPhysicActor_NoRegister()
	{
		return APickupPhysicActor::StaticClass();
	}
	struct Z_Construct_UClass_APickupPhysicActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupPhysicActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupPhysicActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PickupPhysicActor.h" },
		{ "ModuleRelativePath", "Public/PickupPhysicActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupPhysicActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupPhysicActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupPhysicActor_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_APickupPhysicActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupPhysicActor.OuterSingleton, Z_Construct_UClass_APickupPhysicActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickupPhysicActor.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<APickupPhysicActor>()
	{
		return APickupPhysicActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupPhysicActor);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PickupPhysicActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PickupPhysicActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickupPhysicActor, APickupPhysicActor::StaticClass, TEXT("APickupPhysicActor"), &Z_Registration_Info_UClass_APickupPhysicActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupPhysicActor), 2277176594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PickupPhysicActor_h_1835117364(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PickupPhysicActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PickupPhysicActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
