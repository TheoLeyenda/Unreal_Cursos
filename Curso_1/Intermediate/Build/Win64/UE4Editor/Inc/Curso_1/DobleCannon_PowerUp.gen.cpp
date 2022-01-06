// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso_1/DobleCannon_PowerUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDobleCannon_PowerUp() {}
// Cross Module References
	CURSO_1_API UClass* Z_Construct_UClass_ADobleCannon_PowerUp_NoRegister();
	CURSO_1_API UClass* Z_Construct_UClass_ADobleCannon_PowerUp();
	CURSO_1_API UClass* Z_Construct_UClass_APowerUp();
	UPackage* Z_Construct_UPackage__Script_Curso_1();
// End Cross Module References
	void ADobleCannon_PowerUp::StaticRegisterNativesADobleCannon_PowerUp()
	{
	}
	UClass* Z_Construct_UClass_ADobleCannon_PowerUp_NoRegister()
	{
		return ADobleCannon_PowerUp::StaticClass();
	}
	struct Z_Construct_UClass_ADobleCannon_PowerUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADobleCannon_PowerUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APowerUp,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADobleCannon_PowerUp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DobleCannon_PowerUp.h" },
		{ "ModuleRelativePath", "DobleCannon_PowerUp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADobleCannon_PowerUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADobleCannon_PowerUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADobleCannon_PowerUp_Statics::ClassParams = {
		&ADobleCannon_PowerUp::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADobleCannon_PowerUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADobleCannon_PowerUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADobleCannon_PowerUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADobleCannon_PowerUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADobleCannon_PowerUp, 4242234099);
	template<> CURSO_1_API UClass* StaticClass<ADobleCannon_PowerUp>()
	{
		return ADobleCannon_PowerUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADobleCannon_PowerUp(Z_Construct_UClass_ADobleCannon_PowerUp, &ADobleCannon_PowerUp::StaticClass, TEXT("/Script/Curso_1"), TEXT("ADobleCannon_PowerUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADobleCannon_PowerUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
