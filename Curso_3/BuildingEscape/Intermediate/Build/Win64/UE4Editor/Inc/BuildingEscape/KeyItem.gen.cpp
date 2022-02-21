// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/KeyItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyItem() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UKeyItem_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UKeyItem();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void UKeyItem::StaticRegisterNativesUKeyItem()
	{
	}
	UClass* Z_Construct_UClass_UKeyItem_NoRegister()
	{
		return UKeyItem::StaticClass();
	}
	struct Z_Construct_UClass_UKeyItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKeyItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItem,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "KeyItem.h" },
		{ "ModuleRelativePath", "Public/KeyItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKeyItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKeyItem_Statics::ClassParams = {
		&UKeyItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKeyItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKeyItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKeyItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKeyItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKeyItem, 2138784670);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UKeyItem>()
	{
		return UKeyItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKeyItem(Z_Construct_UClass_UKeyItem, &UKeyItem::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UKeyItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
