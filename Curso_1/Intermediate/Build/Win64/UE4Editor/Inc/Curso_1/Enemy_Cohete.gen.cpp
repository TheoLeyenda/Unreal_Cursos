// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso_1/Enemy_Cohete.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Cohete() {}
// Cross Module References
	CURSO_1_API UClass* Z_Construct_UClass_AEnemy_Cohete_NoRegister();
	CURSO_1_API UClass* Z_Construct_UClass_AEnemy_Cohete();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Curso_1();
// End Cross Module References
	void AEnemy_Cohete::StaticRegisterNativesAEnemy_Cohete()
	{
	}
	UClass* Z_Construct_UClass_AEnemy_Cohete_NoRegister()
	{
		return AEnemy_Cohete::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Cohete_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeihtToDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeihtToDestroy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Cohete_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Cohete_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy_Cohete.h" },
		{ "ModuleRelativePath", "Enemy_Cohete.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Cohete_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Enemy_Cohete - Movement" },
		{ "ModuleRelativePath", "Enemy_Cohete.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Cohete_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Cohete, Speed), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Cohete_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Cohete_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Cohete_Statics::NewProp_HeihtToDestroy_MetaData[] = {
		{ "Category", "Enemy_Cohete - Movement" },
		{ "ModuleRelativePath", "Enemy_Cohete.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Cohete_Statics::NewProp_HeihtToDestroy = { "HeihtToDestroy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Cohete, HeihtToDestroy), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Cohete_Statics::NewProp_HeihtToDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Cohete_Statics::NewProp_HeihtToDestroy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Cohete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Cohete_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Cohete_Statics::NewProp_HeihtToDestroy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Cohete_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Cohete>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Cohete_Statics::ClassParams = {
		&AEnemy_Cohete::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_Cohete_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Cohete_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Cohete_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Cohete_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_Cohete()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_Cohete_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy_Cohete, 3210522741);
	template<> CURSO_1_API UClass* StaticClass<AEnemy_Cohete>()
	{
		return AEnemy_Cohete::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy_Cohete(Z_Construct_UClass_AEnemy_Cohete, &AEnemy_Cohete::StaticClass, TEXT("/Script/Curso_1"), TEXT("AEnemy_Cohete"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Cohete);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
