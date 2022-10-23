// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/RandomSpawnObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomSpawnObject() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ARandomSpawnObject_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ARandomSpawnObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectSpawner_NoRegister();
// End Cross Module References
	void ARandomSpawnObject::StaticRegisterNativesARandomSpawnObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARandomSpawnObject);
	UClass* Z_Construct_UClass_ARandomSpawnObject_NoRegister()
	{
		return ARandomSpawnObject::StaticClass();
	}
	struct Z_Construct_UClass_ARandomSpawnObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomSpawnOnBeginPlay_MetaData[];
#endif
		static void NewProp_bRandomSpawnOnBeginPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomSpawnOnBeginPlay;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spawners_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spawners_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Spawners;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARandomSpawnObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomSpawnObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RandomSpawnObject.h" },
		{ "ModuleRelativePath", "Public/RandomSpawnObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomSpawnObject_Statics::NewProp_bRandomSpawnOnBeginPlay_MetaData[] = {
		{ "Category", "RandomSpawnObject" },
		{ "ModuleRelativePath", "Public/RandomSpawnObject.h" },
	};
#endif
	void Z_Construct_UClass_ARandomSpawnObject_Statics::NewProp_bRandomSpawnOnBeginPlay_SetBit(void* Obj)
	{
		((ARandomSpawnObject*)Obj)->bRandomSpawnOnBeginPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARandomSpawnObject_Statics::NewProp_bRandomSpawnOnBeginPlay = { "bRandomSpawnOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARandomSpawnObject), &Z_Construct_UClass_ARandomSpawnObject_Statics::NewProp_bRandomSpawnOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARandomSpawnObject_Statics::NewProp_bRandomSpawnOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpawnObject_Statics::NewProp_bRandomSpawnOnBeginPlay_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARandomSpawnObject_Statics::NewProp_Spawners_Inner = { "Spawners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AObjectSpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomSpawnObject_Statics::NewProp_Spawners_MetaData[] = {
		{ "Category", "RandomSpawnObject" },
		{ "ModuleRelativePath", "Public/RandomSpawnObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARandomSpawnObject_Statics::NewProp_Spawners = { "Spawners", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomSpawnObject, Spawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARandomSpawnObject_Statics::NewProp_Spawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpawnObject_Statics::NewProp_Spawners_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandomSpawnObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpawnObject_Statics::NewProp_bRandomSpawnOnBeginPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpawnObject_Statics::NewProp_Spawners_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomSpawnObject_Statics::NewProp_Spawners,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARandomSpawnObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomSpawnObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARandomSpawnObject_Statics::ClassParams = {
		&ARandomSpawnObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARandomSpawnObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpawnObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARandomSpawnObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomSpawnObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARandomSpawnObject()
	{
		if (!Z_Registration_Info_UClass_ARandomSpawnObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARandomSpawnObject.OuterSingleton, Z_Construct_UClass_ARandomSpawnObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARandomSpawnObject.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ARandomSpawnObject>()
	{
		return ARandomSpawnObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomSpawnObject);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARandomSpawnObject, ARandomSpawnObject::StaticClass, TEXT("ARandomSpawnObject"), &Z_Registration_Info_UClass_ARandomSpawnObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARandomSpawnObject), 645481264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_2859394923(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
