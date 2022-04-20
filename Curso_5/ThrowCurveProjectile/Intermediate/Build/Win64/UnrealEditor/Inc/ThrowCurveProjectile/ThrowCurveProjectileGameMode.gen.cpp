// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThrowCurveProjectile/ThrowCurveProjectileGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowCurveProjectileGameMode() {}
// Cross Module References
	THROWCURVEPROJECTILE_API UClass* Z_Construct_UClass_AThrowCurveProjectileGameMode_NoRegister();
	THROWCURVEPROJECTILE_API UClass* Z_Construct_UClass_AThrowCurveProjectileGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ThrowCurveProjectile();
// End Cross Module References
	void AThrowCurveProjectileGameMode::StaticRegisterNativesAThrowCurveProjectileGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThrowCurveProjectileGameMode);
	UClass* Z_Construct_UClass_AThrowCurveProjectileGameMode_NoRegister()
	{
		return AThrowCurveProjectileGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AThrowCurveProjectileGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowCurveProjectileGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThrowCurveProjectile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowCurveProjectileGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ThrowCurveProjectileGameMode.h" },
		{ "ModuleRelativePath", "ThrowCurveProjectileGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowCurveProjectileGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowCurveProjectileGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowCurveProjectileGameMode_Statics::ClassParams = {
		&AThrowCurveProjectileGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AThrowCurveProjectileGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowCurveProjectileGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThrowCurveProjectileGameMode()
	{
		if (!Z_Registration_Info_UClass_AThrowCurveProjectileGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrowCurveProjectileGameMode.OuterSingleton, Z_Construct_UClass_AThrowCurveProjectileGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThrowCurveProjectileGameMode.OuterSingleton;
	}
	template<> THROWCURVEPROJECTILE_API UClass* StaticClass<AThrowCurveProjectileGameMode>()
	{
		return AThrowCurveProjectileGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowCurveProjectileGameMode);
	struct Z_CompiledInDeferFile_FID_ThrowCurveProjectile_Source_ThrowCurveProjectile_ThrowCurveProjectileGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThrowCurveProjectile_Source_ThrowCurveProjectile_ThrowCurveProjectileGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThrowCurveProjectileGameMode, AThrowCurveProjectileGameMode::StaticClass, TEXT("AThrowCurveProjectileGameMode"), &Z_Registration_Info_UClass_AThrowCurveProjectileGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowCurveProjectileGameMode), 636218045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThrowCurveProjectile_Source_ThrowCurveProjectile_ThrowCurveProjectileGameMode_h_3892003937(TEXT("/Script/ThrowCurveProjectile"),
		Z_CompiledInDeferFile_FID_ThrowCurveProjectile_Source_ThrowCurveProjectile_ThrowCurveProjectileGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThrowCurveProjectile_Source_ThrowCurveProjectile_ThrowCurveProjectileGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
