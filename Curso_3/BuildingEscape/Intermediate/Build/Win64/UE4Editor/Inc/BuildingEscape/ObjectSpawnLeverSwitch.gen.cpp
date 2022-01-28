// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/ObjectSpawnLeverSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectSpawnLeverSwitch() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectSpawnLeverSwitch_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectSpawnLeverSwitch();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ALeverSwitch();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectSpawner_NoRegister();
// End Cross Module References
	void AObjectSpawnLeverSwitch::StaticRegisterNativesAObjectSpawnLeverSwitch()
	{
	}
	UClass* Z_Construct_UClass_AObjectSpawnLeverSwitch_NoRegister()
	{
		return AObjectSpawnLeverSwitch::StaticClass();
	}
	struct Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnObjectToPositiveLeverSwitch_MetaData[];
#endif
		static void NewProp_bSpawnObjectToPositiveLeverSwitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnObjectToPositiveLeverSwitch;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spawners;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALeverSwitch,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObjectSpawnLeverSwitch.h" },
		{ "ModuleRelativePath", "Public/ObjectSpawnLeverSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::NewProp_bSpawnObjectToPositiveLeverSwitch_MetaData[] = {
		{ "Category", "ObjectSpawnLeverSwitch" },
		{ "ModuleRelativePath", "Public/ObjectSpawnLeverSwitch.h" },
	};
#endif
	void Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::NewProp_bSpawnObjectToPositiveLeverSwitch_SetBit(void* Obj)
	{
		((AObjectSpawnLeverSwitch*)Obj)->bSpawnObjectToPositiveLeverSwitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::NewProp_bSpawnObjectToPositiveLeverSwitch = { "bSpawnObjectToPositiveLeverSwitch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObjectSpawnLeverSwitch), &Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::NewProp_bSpawnObjectToPositiveLeverSwitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::NewProp_bSpawnObjectToPositiveLeverSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::NewProp_bSpawnObjectToPositiveLeverSwitch_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::NewProp_Spawners_Inner = { "Spawners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AObjectSpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::NewProp_Spawners_MetaData[] = {
		{ "Category", "ObjectSpawnLeverSwitch" },
		{ "ModuleRelativePath", "Public/ObjectSpawnLeverSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::NewProp_Spawners = { "Spawners", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectSpawnLeverSwitch, Spawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::NewProp_Spawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::NewProp_Spawners_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::NewProp_bSpawnObjectToPositiveLeverSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::NewProp_Spawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::NewProp_Spawners,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjectSpawnLeverSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::ClassParams = {
		&AObjectSpawnLeverSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjectSpawnLeverSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjectSpawnLeverSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjectSpawnLeverSwitch, 1445605948);
	template<> BUILDINGESCAPE_API UClass* StaticClass<AObjectSpawnLeverSwitch>()
	{
		return AObjectSpawnLeverSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjectSpawnLeverSwitch(Z_Construct_UClass_AObjectSpawnLeverSwitch, &AObjectSpawnLeverSwitch::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("AObjectSpawnLeverSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectSpawnLeverSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
