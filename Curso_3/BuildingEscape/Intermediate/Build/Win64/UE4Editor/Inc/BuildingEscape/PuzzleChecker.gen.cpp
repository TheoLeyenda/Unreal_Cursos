// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/PuzzleChecker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleChecker() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_APuzzleChecker_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_APuzzleChecker();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void APuzzleChecker::StaticRegisterNativesAPuzzleChecker()
	{
	}
	UClass* Z_Construct_UClass_APuzzleChecker_NoRegister()
	{
		return APuzzleChecker::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleChecker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleChecker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleChecker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PuzzleChecker.h" },
		{ "ModuleRelativePath", "Public/PuzzleChecker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleChecker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleChecker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzleChecker_Statics::ClassParams = {
		&APuzzleChecker::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APuzzleChecker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleChecker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzleChecker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzleChecker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzleChecker, 855879101);
	template<> BUILDINGESCAPE_API UClass* StaticClass<APuzzleChecker>()
	{
		return APuzzleChecker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzleChecker(Z_Construct_UClass_APuzzleChecker, &APuzzleChecker::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("APuzzleChecker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleChecker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
