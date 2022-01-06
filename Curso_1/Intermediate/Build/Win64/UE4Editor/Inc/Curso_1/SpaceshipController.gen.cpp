// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso_1/SpaceshipController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceshipController() {}
// Cross Module References
	CURSO_1_API UClass* Z_Construct_UClass_ASpaceshipController_NoRegister();
	CURSO_1_API UClass* Z_Construct_UClass_ASpaceshipController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Curso_1();
// End Cross Module References
	void ASpaceshipController::StaticRegisterNativesASpaceshipController()
	{
	}
	UClass* Z_Construct_UClass_ASpaceshipController_NoRegister()
	{
		return ASpaceshipController::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceshipController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceshipController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpaceshipController.h" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceshipController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceshipController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpaceshipController_Statics::ClassParams = {
		&ASpaceshipController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceshipController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpaceshipController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceshipController, 4252477797);
	template<> CURSO_1_API UClass* StaticClass<ASpaceshipController>()
	{
		return ASpaceshipController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceshipController(Z_Construct_UClass_ASpaceshipController, &ASpaceshipController::StaticClass, TEXT("/Script/Curso_1"), TEXT("ASpaceshipController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceshipController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
