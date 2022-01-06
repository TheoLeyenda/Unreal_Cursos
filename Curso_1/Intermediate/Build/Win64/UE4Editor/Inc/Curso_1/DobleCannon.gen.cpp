// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso_1/DobleCannon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDobleCannon() {}
// Cross Module References
	CURSO_1_API UClass* Z_Construct_UClass_ADobleCannon_NoRegister();
	CURSO_1_API UClass* Z_Construct_UClass_ADobleCannon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Curso_1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CURSO_1_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void ADobleCannon::StaticRegisterNativesADobleCannon()
	{
	}
	UClass* Z_Construct_UClass_ADobleCannon_NoRegister()
	{
		return ADobleCannon::StaticClass();
	}
	struct Z_Construct_UClass_ADobleCannon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnCannonLocation1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnCannonLocation1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnCannonRotator1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnCannonRotator1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnCannonLocation2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnCannonLocation2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnCannonRotator2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnCannonRotator2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADobleCannon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADobleCannon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DobleCannon.h" },
		{ "ModuleRelativePath", "DobleCannon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADobleCannon_Statics::NewProp_BulletBlueprint_MetaData[] = {
		{ "Category", "DobleCannon" },
		{ "ModuleRelativePath", "DobleCannon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADobleCannon_Statics::NewProp_BulletBlueprint = { "BulletBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADobleCannon, BulletBlueprint), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADobleCannon_Statics::NewProp_BulletBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADobleCannon_Statics::NewProp_BulletBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonLocation1_MetaData[] = {
		{ "Category", "DobleCannon" },
		{ "ModuleRelativePath", "DobleCannon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonLocation1 = { "SpawnCannonLocation1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADobleCannon, SpawnCannonLocation1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonLocation1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonLocation1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonRotator1_MetaData[] = {
		{ "Category", "DobleCannon" },
		{ "ModuleRelativePath", "DobleCannon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonRotator1 = { "SpawnCannonRotator1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADobleCannon, SpawnCannonRotator1), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonRotator1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonRotator1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonLocation2_MetaData[] = {
		{ "Category", "DobleCannon" },
		{ "ModuleRelativePath", "DobleCannon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonLocation2 = { "SpawnCannonLocation2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADobleCannon, SpawnCannonLocation2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonLocation2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonLocation2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonRotator2_MetaData[] = {
		{ "Category", "DobleCannon" },
		{ "ModuleRelativePath", "DobleCannon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonRotator2 = { "SpawnCannonRotator2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADobleCannon, SpawnCannonRotator2), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonRotator2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonRotator2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADobleCannon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADobleCannon_Statics::NewProp_BulletBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonLocation1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonRotator1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonLocation2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADobleCannon_Statics::NewProp_SpawnCannonRotator2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADobleCannon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADobleCannon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADobleCannon_Statics::ClassParams = {
		&ADobleCannon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADobleCannon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADobleCannon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADobleCannon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADobleCannon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADobleCannon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADobleCannon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADobleCannon, 1711869927);
	template<> CURSO_1_API UClass* StaticClass<ADobleCannon>()
	{
		return ADobleCannon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADobleCannon(Z_Construct_UClass_ADobleCannon, &ADobleCannon::StaticClass, TEXT("/Script/Curso_1"), TEXT("ADobleCannon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADobleCannon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
