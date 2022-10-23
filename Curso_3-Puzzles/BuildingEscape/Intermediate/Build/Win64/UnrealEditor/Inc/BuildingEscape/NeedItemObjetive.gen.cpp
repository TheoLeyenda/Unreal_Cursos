// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/ObjetiveType/NeedItemObjetive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeedItemObjetive() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UNeedItemObjetive_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UNeedItemObjetive();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UStep();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem_NoRegister();
// End Cross Module References
	void UNeedItemObjetive::StaticRegisterNativesUNeedItemObjetive()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeedItemObjetive);
	UClass* Z_Construct_UClass_UNeedItemObjetive_NoRegister()
	{
		return UNeedItemObjetive::StaticClass();
	}
	struct Z_Construct_UClass_UNeedItemObjetive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NeedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NeedItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeedItemObjetive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStep,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeedItemObjetive_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/ObjetiveType/NeedItemObjetive.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/NeedItemObjetive.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNeedItemObjetive_Statics::NewProp_NeedItems_Inner = { "NeedItems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeedItemObjetive_Statics::NewProp_NeedItems_MetaData[] = {
		{ "Category", "NeedItemObjetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/NeedItemObjetive.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeedItemObjetive_Statics::NewProp_NeedItems = { "NeedItems", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNeedItemObjetive, NeedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeedItemObjetive_Statics::NewProp_NeedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeedItemObjetive_Statics::NewProp_NeedItems_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeedItemObjetive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeedItemObjetive_Statics::NewProp_NeedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeedItemObjetive_Statics::NewProp_NeedItems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeedItemObjetive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeedItemObjetive>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeedItemObjetive_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UNeedItemObjetive.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeedItemObjetive.OuterSingleton, Z_Construct_UClass_UNeedItemObjetive_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeedItemObjetive.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UNeedItemObjetive>()
	{
		return UNeedItemObjetive::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeedItemObjetive);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_NeedItemObjetive_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_NeedItemObjetive_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeedItemObjetive, UNeedItemObjetive::StaticClass, TEXT("UNeedItemObjetive"), &Z_Registration_Info_UClass_UNeedItemObjetive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeedItemObjetive), 307108764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_NeedItemObjetive_h_2405826594(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_NeedItemObjetive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_NeedItemObjetive_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
