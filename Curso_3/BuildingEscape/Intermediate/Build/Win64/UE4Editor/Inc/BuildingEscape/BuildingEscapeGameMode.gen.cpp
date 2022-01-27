// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/BuildingEscapeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingEscapeGameMode() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingEscapeGameMode_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingEscapeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectSpawner_NoRegister();
// End Cross Module References
	void ABuildingEscapeGameMode::StaticRegisterNativesABuildingEscapeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABuildingEscapeGameMode_NoRegister()
	{
		return ABuildingEscapeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingEscapeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnerObjectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnerObjectClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnersObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnersObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnersObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingEscapeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingEscapeGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BuildingEscapeGameMode.h" },
		{ "ModuleRelativePath", "Public/BuildingEscapeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_SpawnerObjectClass_MetaData[] = {
		{ "Category", "Spawn Objects" },
		{ "ModuleRelativePath", "Public/BuildingEscapeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_SpawnerObjectClass = { "SpawnerObjectClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingEscapeGameMode, SpawnerObjectClass), Z_Construct_UClass_AObjectSpawner_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_SpawnerObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_SpawnerObjectClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_SpawnersObjects_Inner = { "SpawnersObjects", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AObjectSpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_SpawnersObjects_MetaData[] = {
		{ "Category", "Spawn Objects" },
		{ "ModuleRelativePath", "Public/BuildingEscapeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_SpawnersObjects = { "SpawnersObjects", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingEscapeGameMode, SpawnersObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_SpawnersObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_SpawnersObjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildingEscapeGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_SpawnerObjectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_SpawnersObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_SpawnersObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingEscapeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingEscapeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildingEscapeGameMode_Statics::ClassParams = {
		&ABuildingEscapeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuildingEscapeGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingEscapeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildingEscapeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingEscapeGameMode, 3532938476);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ABuildingEscapeGameMode>()
	{
		return ABuildingEscapeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingEscapeGameMode(Z_Construct_UClass_ABuildingEscapeGameMode, &ABuildingEscapeGameMode::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ABuildingEscapeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingEscapeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
