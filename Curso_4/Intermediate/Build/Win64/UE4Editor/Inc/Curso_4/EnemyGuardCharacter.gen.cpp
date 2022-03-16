// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso_4/Public/Characters/Enemys/EnemyGuardCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyGuardCharacter() {}
// Cross Module References
	CURSO_4_API UClass* Z_Construct_UClass_AEnemyGuardCharacter_NoRegister();
	CURSO_4_API UClass* Z_Construct_UClass_AEnemyGuardCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Curso_4();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void AEnemyGuardCharacter::StaticRegisterNativesAEnemyGuardCharacter()
	{
	}
	UClass* Z_Construct_UClass_AEnemyGuardCharacter_NoRegister()
	{
		return AEnemyGuardCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyGuardCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToNextWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToNextWaypoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyGuardCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyGuardCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Enemys/EnemyGuardCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/Enemys/EnemyGuardCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Enemys/EnemyGuardCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyGuardCharacter, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_SplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_CurrentDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Characters/Enemys/EnemyGuardCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_CurrentDistance = { "CurrentDistance", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyGuardCharacter, CurrentDistance), METADATA_PARAMS(Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_CurrentDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_CurrentDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_DistanceToNextWaypoint_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Characters/Enemys/EnemyGuardCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_DistanceToNextWaypoint = { "DistanceToNextWaypoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyGuardCharacter, DistanceToNextWaypoint), METADATA_PARAMS(Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_DistanceToNextWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_DistanceToNextWaypoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyGuardCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_SplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_CurrentDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyGuardCharacter_Statics::NewProp_DistanceToNextWaypoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyGuardCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyGuardCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyGuardCharacter_Statics::ClassParams = {
		&AEnemyGuardCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyGuardCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyGuardCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyGuardCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyGuardCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyGuardCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyGuardCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyGuardCharacter, 1806465894);
	template<> CURSO_4_API UClass* StaticClass<AEnemyGuardCharacter>()
	{
		return AEnemyGuardCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyGuardCharacter(Z_Construct_UClass_AEnemyGuardCharacter, &AEnemyGuardCharacter::StaticClass, TEXT("/Script/Curso_4"), TEXT("AEnemyGuardCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyGuardCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
