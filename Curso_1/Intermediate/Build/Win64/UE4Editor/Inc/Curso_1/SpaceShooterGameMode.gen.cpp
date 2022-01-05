// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso_1/SpaceShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceShooterGameMode() {}
// Cross Module References
	CURSO_1_API UClass* Z_Construct_UClass_ASpaceShooterGameMode_NoRegister();
	CURSO_1_API UClass* Z_Construct_UClass_ASpaceShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Curso_1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CURSO_1_API UClass* Z_Construct_UClass_AEnemy_Cohete_NoRegister();
// End Cross Module References
	void ASpaceShooterGameMode::StaticRegisterNativesASpaceShooterGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASpaceShooterGameMode_NoRegister()
	{
		return ASpaceShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy_CoheteBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Enemy_CoheteBlueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpaceShooterGameMode.h" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Enemy_CoheteBlueprint_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Enemy_CoheteBlueprint = { "Enemy_CoheteBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, Enemy_CoheteBlueprint), Z_Construct_UClass_AEnemy_Cohete_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Enemy_CoheteBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Enemy_CoheteBlueprint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpaceShooterGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Enemy_CoheteBlueprint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceShooterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::ClassParams = {
		&ASpaceShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpaceShooterGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpaceShooterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceShooterGameMode, 368320718);
	template<> CURSO_1_API UClass* StaticClass<ASpaceShooterGameMode>()
	{
		return ASpaceShooterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceShooterGameMode(Z_Construct_UClass_ASpaceShooterGameMode, &ASpaceShooterGameMode::StaticClass, TEXT("/Script/Curso_1"), TEXT("ASpaceShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
