// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/FoodItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoodItem() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UFoodItem_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UFoodItem();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void UFoodItem::StaticRegisterNativesUFoodItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoodItem);
	UClass* Z_Construct_UClass_UFoodItem_NoRegister()
	{
		return UFoodItem::StaticClass();
	}
	struct Z_Construct_UClass_UFoodItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddFatness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AddFatness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoodItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItem,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoodItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FoodItem.h" },
		{ "ModuleRelativePath", "Public/FoodItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoodItem_Statics::NewProp_AddFatness_MetaData[] = {
		{ "Category", "Item" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/FoodItem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoodItem_Statics::NewProp_AddFatness = { "AddFatness", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoodItem, AddFatness), METADATA_PARAMS(Z_Construct_UClass_UFoodItem_Statics::NewProp_AddFatness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoodItem_Statics::NewProp_AddFatness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoodItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoodItem_Statics::NewProp_AddFatness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoodItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoodItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoodItem_Statics::ClassParams = {
		&UFoodItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFoodItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFoodItem_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoodItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoodItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoodItem()
	{
		if (!Z_Registration_Info_UClass_UFoodItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoodItem.OuterSingleton, Z_Construct_UClass_UFoodItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoodItem.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UFoodItem>()
	{
		return UFoodItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoodItem);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_FoodItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_FoodItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoodItem, UFoodItem::StaticClass, TEXT("UFoodItem"), &Z_Registration_Info_UClass_UFoodItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoodItem), 58787320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_FoodItem_h_1655398830(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_FoodItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_FoodItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
