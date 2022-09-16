// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/LeverSwitchToCraft.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeverSwitchToCraft() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ALeverSwitchToCraft_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ALeverSwitchToCraft();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ALeverSwitch();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACraftingTable_NoRegister();
// End Cross Module References
	void ALeverSwitchToCraft::StaticRegisterNativesALeverSwitchToCraft()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALeverSwitchToCraft);
	UClass* Z_Construct_UClass_ALeverSwitchToCraft_NoRegister()
	{
		return ALeverSwitchToCraft::StaticClass();
	}
	struct Z_Construct_UClass_ALeverSwitchToCraft_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraftingTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CraftingTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALeverSwitchToCraft_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALeverSwitch,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitchToCraft_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LeverSwitchToCraft.h" },
		{ "ModuleRelativePath", "Public/LeverSwitchToCraft.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitchToCraft_Statics::NewProp_CraftingTable_MetaData[] = {
		{ "Category", "LeverSwitchToCraft" },
		{ "ModuleRelativePath", "Public/LeverSwitchToCraft.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverSwitchToCraft_Statics::NewProp_CraftingTable = { "CraftingTable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitchToCraft, CraftingTable), Z_Construct_UClass_ACraftingTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitchToCraft_Statics::NewProp_CraftingTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitchToCraft_Statics::NewProp_CraftingTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALeverSwitchToCraft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitchToCraft_Statics::NewProp_CraftingTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALeverSwitchToCraft_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeverSwitchToCraft>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALeverSwitchToCraft_Statics::ClassParams = {
		&ALeverSwitchToCraft::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALeverSwitchToCraft_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitchToCraft_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALeverSwitchToCraft_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitchToCraft_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALeverSwitchToCraft()
	{
		if (!Z_Registration_Info_UClass_ALeverSwitchToCraft.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALeverSwitchToCraft.OuterSingleton, Z_Construct_UClass_ALeverSwitchToCraft_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALeverSwitchToCraft.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ALeverSwitchToCraft>()
	{
		return ALeverSwitchToCraft::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALeverSwitchToCraft);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitchToCraft_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitchToCraft_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALeverSwitchToCraft, ALeverSwitchToCraft::StaticClass, TEXT("ALeverSwitchToCraft"), &Z_Registration_Info_UClass_ALeverSwitchToCraft, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALeverSwitchToCraft), 3703490341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitchToCraft_h_3919326841(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitchToCraft_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitchToCraft_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
