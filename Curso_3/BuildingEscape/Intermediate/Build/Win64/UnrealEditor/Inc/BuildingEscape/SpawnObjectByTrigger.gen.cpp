// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/SpawnObjectByTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnObjectByTrigger() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ASpawnObjectByTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ASpawnObjectByTrigger();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectsInteractTrigger();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectSpawner_NoRegister();
// End Cross Module References
	void ASpawnObjectByTrigger::StaticRegisterNativesASpawnObjectByTrigger()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnObjectByTrigger);
	UClass* Z_Construct_UClass_ASpawnObjectByTrigger_NoRegister()
	{
		return ASpawnObjectByTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnObjectByTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOtherObjectInTrigger_MetaData[];
#endif
		static void NewProp_bDestroyOtherObjectInTrigger_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOtherObjectInTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroymeInTrigger_MetaData[];
#endif
		static void NewProp_bDestroymeInTrigger_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroymeInTrigger;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spawners_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spawners_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Spawners;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnObjectByTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjectsInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnObjectByTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SpawnObjectByTrigger.h" },
		{ "ModuleRelativePath", "Public/SpawnObjectByTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_bDestroyOtherObjectInTrigger_MetaData[] = {
		{ "Category", "SpawnObjectByTrigger" },
		{ "ModuleRelativePath", "Public/SpawnObjectByTrigger.h" },
	};
#endif
	void Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_bDestroyOtherObjectInTrigger_SetBit(void* Obj)
	{
		((ASpawnObjectByTrigger*)Obj)->bDestroyOtherObjectInTrigger = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_bDestroyOtherObjectInTrigger = { "bDestroyOtherObjectInTrigger", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpawnObjectByTrigger), &Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_bDestroyOtherObjectInTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_bDestroyOtherObjectInTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_bDestroyOtherObjectInTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_bDestroymeInTrigger_MetaData[] = {
		{ "Category", "SpawnObjectByTrigger" },
		{ "ModuleRelativePath", "Public/SpawnObjectByTrigger.h" },
	};
#endif
	void Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_bDestroymeInTrigger_SetBit(void* Obj)
	{
		((ASpawnObjectByTrigger*)Obj)->bDestroymeInTrigger = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_bDestroymeInTrigger = { "bDestroymeInTrigger", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpawnObjectByTrigger), &Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_bDestroymeInTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_bDestroymeInTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_bDestroymeInTrigger_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_Spawners_Inner = { "Spawners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AObjectSpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_Spawners_MetaData[] = {
		{ "Category", "SpawnObjectByTrigger" },
		{ "ModuleRelativePath", "Public/SpawnObjectByTrigger.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_Spawners = { "Spawners", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnObjectByTrigger, Spawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_Spawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_Spawners_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnObjectByTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_bDestroyOtherObjectInTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_bDestroymeInTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_Spawners_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnObjectByTrigger_Statics::NewProp_Spawners,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnObjectByTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnObjectByTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnObjectByTrigger_Statics::ClassParams = {
		&ASpawnObjectByTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawnObjectByTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnObjectByTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnObjectByTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnObjectByTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnObjectByTrigger()
	{
		if (!Z_Registration_Info_UClass_ASpawnObjectByTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnObjectByTrigger.OuterSingleton, Z_Construct_UClass_ASpawnObjectByTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawnObjectByTrigger.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ASpawnObjectByTrigger>()
	{
		return ASpawnObjectByTrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnObjectByTrigger);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SpawnObjectByTrigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SpawnObjectByTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnObjectByTrigger, ASpawnObjectByTrigger::StaticClass, TEXT("ASpawnObjectByTrigger"), &Z_Registration_Info_UClass_ASpawnObjectByTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnObjectByTrigger), 819352934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SpawnObjectByTrigger_h_4131792251(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SpawnObjectByTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SpawnObjectByTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
