// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/DropItem.h"
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDropItem);
	UClass* Z_Construct_UClass_UDropItem_NoRegister()
	{
		return UDropItem::StaticClass();
	}
	struct Z_Construct_UClass_UDropItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOffsetZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnOffsetZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BluprintActorDrop_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BluprintActorDrop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDropItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItem,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DropItem.h" },
		{ "ModuleRelativePath", "Public/DropItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropItem_Statics::NewProp_SpawnOffsetZ_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/DropItem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDropItem_Statics::NewProp_SpawnOffsetZ = { "SpawnOffsetZ", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDropItem, SpawnOffsetZ), METADATA_PARAMS(Z_Construct_UClass_UDropItem_Statics::NewProp_SpawnOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDropItem_Statics::NewProp_SpawnOffsetZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropItem_Statics::NewProp_BluprintActorDrop_MetaData[] = {
		{ "Category", "Item" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/DropItem.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDropItem_Statics::NewProp_BluprintActorDrop = { "BluprintActorDrop", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDropItem, BluprintActorDrop), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDropItem_Statics::NewProp_BluprintActorDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDropItem_Statics::NewProp_BluprintActorDrop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDropItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropItem_Statics::NewProp_SpawnOffsetZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropItem_Statics::NewProp_BluprintActorDrop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDropItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDropItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDropItem_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UDropItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDropItem.OuterSingleton, Z_Construct_UClass_UDropItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDropItem.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UDropItem>()
	{
		return UDropItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDropItem);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DropItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DropItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDropItem, UDropItem::StaticClass, TEXT("UDropItem"), &Z_Registration_Info_UClass_UDropItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDropItem), 3591682520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DropItem_h_2554965802(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DropItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DropItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
