// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/ObjetiveType/LifesObjetive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifesObjetive() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ULifesObjetive_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ULifesObjetive();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UStep();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void ULifesObjetive::StaticRegisterNativesULifesObjetive()
	{
	}
	UClass* Z_Construct_UClass_ULifesObjetive_NoRegister()
	{
		return ULifesObjetive::StaticClass();
	}
	struct Z_Construct_UClass_ULifesObjetive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLifes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetLifes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextProgressLifes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextProgressLifes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifesObjetive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStep,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifesObjetive_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/ObjetiveType/LifesObjetive.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/LifesObjetive.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifesObjetive_Statics::NewProp_TargetLifes_MetaData[] = {
		{ "Category", "LifesObjetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/LifesObjetive.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULifesObjetive_Statics::NewProp_TargetLifes = { "TargetLifes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifesObjetive, TargetLifes), METADATA_PARAMS(Z_Construct_UClass_ULifesObjetive_Statics::NewProp_TargetLifes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifesObjetive_Statics::NewProp_TargetLifes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifesObjetive_Statics::NewProp_TextProgressLifes_MetaData[] = {
		{ "Category", "LifesObjetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/LifesObjetive.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULifesObjetive_Statics::NewProp_TextProgressLifes = { "TextProgressLifes", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifesObjetive, TextProgressLifes), METADATA_PARAMS(Z_Construct_UClass_ULifesObjetive_Statics::NewProp_TextProgressLifes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifesObjetive_Statics::NewProp_TextProgressLifes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifesObjetive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifesObjetive_Statics::NewProp_TargetLifes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifesObjetive_Statics::NewProp_TextProgressLifes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifesObjetive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifesObjetive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULifesObjetive_Statics::ClassParams = {
		&ULifesObjetive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifesObjetive_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifesObjetive_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifesObjetive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifesObjetive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifesObjetive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULifesObjetive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULifesObjetive, 3182334939);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ULifesObjetive>()
	{
		return ULifesObjetive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULifesObjetive(Z_Construct_UClass_ULifesObjetive, &ULifesObjetive::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ULifesObjetive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifesObjetive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
