// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/ObjetiveType/NeedItemObjetive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeedItemObjetive() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UNeedItemObjetive_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UNeedItemObjetive();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UObjetive();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem_NoRegister();
// End Cross Module References
	void UNeedItemObjetive::StaticRegisterNativesUNeedItemObjetive()
	{
	}
	UClass* Z_Construct_UClass_UNeedItemObjetive_NoRegister()
	{
		return UNeedItemObjetive::StaticClass();
	}
	struct Z_Construct_UClass_UNeedItemObjetive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NeedItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NeedItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeedItemObjetive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjetive,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeedItemObjetive_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/ObjetiveType/NeedItemObjetive.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/NeedItemObjetive.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNeedItemObjetive_Statics::NewProp_NeedItems_Inner = { "NeedItems", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeedItemObjetive_Statics::NewProp_NeedItems_MetaData[] = {
		{ "Category", "NeedItemObjetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/NeedItemObjetive.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeedItemObjetive_Statics::NewProp_NeedItems = { "NeedItems", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNeedItemObjetive, NeedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeedItemObjetive_Statics::NewProp_NeedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeedItemObjetive_Statics::NewProp_NeedItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeedItemObjetive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeedItemObjetive_Statics::NewProp_NeedItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeedItemObjetive_Statics::NewProp_NeedItems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeedItemObjetive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeedItemObjetive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNeedItemObjetive_Statics::ClassParams = {
		&UNeedItemObjetive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNeedItemObjetive_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNeedItemObjetive_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNeedItemObjetive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeedItemObjetive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeedItemObjetive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNeedItemObjetive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNeedItemObjetive, 2605292624);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UNeedItemObjetive>()
	{
		return UNeedItemObjetive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNeedItemObjetive(Z_Construct_UClass_UNeedItemObjetive, &UNeedItemObjetive::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UNeedItemObjetive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeedItemObjetive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
