// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/CombineLeverSwitcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombineLeverSwitcher() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACombineLeverSwitcher_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACombineLeverSwitcher();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void ACombineLeverSwitcher::StaticRegisterNativesACombineLeverSwitcher()
	{
	}
	UClass* Z_Construct_UClass_ACombineLeverSwitcher_NoRegister()
	{
		return ACombineLeverSwitcher::StaticClass();
	}
	struct Z_Construct_UClass_ACombineLeverSwitcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACombineLeverSwitcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombineLeverSwitcher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombineLeverSwitcher.h" },
		{ "ModuleRelativePath", "Public/CombineLeverSwitcher.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACombineLeverSwitcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombineLeverSwitcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACombineLeverSwitcher_Statics::ClassParams = {
		&ACombineLeverSwitcher::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACombineLeverSwitcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACombineLeverSwitcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACombineLeverSwitcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACombineLeverSwitcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACombineLeverSwitcher, 1780817912);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ACombineLeverSwitcher>()
	{
		return ACombineLeverSwitcher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACombineLeverSwitcher(Z_Construct_UClass_ACombineLeverSwitcher, &ACombineLeverSwitcher::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ACombineLeverSwitcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombineLeverSwitcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
