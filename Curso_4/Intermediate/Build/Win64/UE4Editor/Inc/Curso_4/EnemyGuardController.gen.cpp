// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso_4/Public/Characters/Controllers/EnemyGuardController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyGuardController() {}
// Cross Module References
	CURSO_4_API UClass* Z_Construct_UClass_AEnemyGuardController_NoRegister();
	CURSO_4_API UClass* Z_Construct_UClass_AEnemyGuardController();
	CURSO_4_API UClass* Z_Construct_UClass_AAIControllerBase();
	UPackage* Z_Construct_UPackage__Script_Curso_4();
// End Cross Module References
	void AEnemyGuardController::StaticRegisterNativesAEnemyGuardController()
	{
	}
	UClass* Z_Construct_UClass_AEnemyGuardController_NoRegister()
	{
		return AEnemyGuardController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyGuardController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyGuardController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyGuardController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Characters/Controllers/EnemyGuardController.h" },
		{ "ModuleRelativePath", "Public/Characters/Controllers/EnemyGuardController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyGuardController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyGuardController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyGuardController_Statics::ClassParams = {
		&AEnemyGuardController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyGuardController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyGuardController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyGuardController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyGuardController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyGuardController, 2710133680);
	template<> CURSO_4_API UClass* StaticClass<AEnemyGuardController>()
	{
		return AEnemyGuardController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyGuardController(Z_Construct_UClass_AEnemyGuardController, &AEnemyGuardController::StaticClass, TEXT("/Script/Curso_4"), TEXT("AEnemyGuardController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyGuardController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
