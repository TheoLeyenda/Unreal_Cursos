// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/DropItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropItem() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UDropItem_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UDropItem();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UDropItem::StaticRegisterNativesUDropItem()
	{
	}
	UClass* Z_Construct_UClass_UDropItem_NoRegister()
	{
		return UDropItem::StaticClass();
	}
	struct Z_Construct_UClass_UDropItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BluprintActorDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BluprintActorDrop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDropItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItem,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DropItem.h" },
		{ "ModuleRelativePath", "Public/DropItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropItem_Statics::NewProp_SpawnOffsetZ_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/DropItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDropItem_Statics::NewProp_SpawnOffsetZ = { "SpawnOffsetZ", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDropItem, SpawnOffsetZ), METADATA_PARAMS(Z_Construct_UClass_UDropItem_Statics::NewProp_SpawnOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDropItem_Statics::NewProp_SpawnOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropItem_Statics::NewProp_BluprintActorDrop_MetaData[] = {
		{ "Category", "Item" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/DropItem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDropItem_Statics::NewProp_BluprintActorDrop = { "BluprintActorDrop", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDropItem, BluprintActorDrop), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDropItem_Statics::NewProp_BluprintActorDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDropItem_Statics::NewProp_BluprintActorDrop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDropItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropItem_Statics::NewProp_SpawnOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropItem_Statics::NewProp_BluprintActorDrop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDropItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDropItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDropItem_Statics::ClassParams = {
		&UDropItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDropItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDropItem_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDropItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDropItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDropItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDropItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDropItem, 744699776);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UDropItem>()
	{
		return UDropItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDropItem(Z_Construct_UClass_UDropItem, &UDropItem::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UDropItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDropItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
