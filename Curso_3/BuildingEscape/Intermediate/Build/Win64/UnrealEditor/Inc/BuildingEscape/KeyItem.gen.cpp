// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/KeyItem.h"
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKeyItem);
	UClass* Z_Construct_UClass_UKeyItem_NoRegister()
	{
		return UKeyItem::StaticClass();
	}
	struct Z_Construct_UClass_UKeyItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKeyItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItem,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "KeyItem.h" },
		{ "ModuleRelativePath", "Public/KeyItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKeyItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyItem_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UKeyItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyItem.OuterSingleton, Z_Construct_UClass_UKeyItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKeyItem.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UKeyItem>()
	{
		return UKeyItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyItem);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_KeyItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_KeyItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKeyItem, UKeyItem::StaticClass, TEXT("UKeyItem"), &Z_Registration_Info_UClass_UKeyItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyItem), 1356946754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_KeyItem_h_1860173737(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_KeyItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_KeyItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
