// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/LeverSwitchToCraft.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
	UClass* Z_Construct_UClass_ALeverSwitchToCraft_NoRegister()
	{
		return ALeverSwitchToCraft::StaticClass();
	}
	struct Z_Construct_UClass_ALeverSwitchToCraft_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CraftingTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CraftingTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALeverSwitchToCraft_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALeverSwitch,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitchToCraft_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LeverSwitchToCraft.h" },
		{ "ModuleRelativePath", "Public/LeverSwitchToCraft.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitchToCraft_Statics::NewProp_CraftingTable_MetaData[] = {
		{ "Category", "LeverSwitchToCraft" },
		{ "ModuleRelativePath", "Public/LeverSwitchToCraft.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverSwitchToCraft_Statics::NewProp_CraftingTable = { "CraftingTable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitchToCraft, CraftingTable), Z_Construct_UClass_ACraftingTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitchToCraft_Statics::NewProp_CraftingTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitchToCraft_Statics::NewProp_CraftingTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALeverSwitchToCraft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitchToCraft_Statics::NewProp_CraftingTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALeverSwitchToCraft_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeverSwitchToCraft>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALeverSwitchToCraft_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALeverSwitchToCraft_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALeverSwitchToCraft, 3856387859);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ALeverSwitchToCraft>()
	{
		return ALeverSwitchToCraft::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALeverSwitchToCraft(Z_Construct_UClass_ALeverSwitchToCraft, &ALeverSwitchToCraft::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ALeverSwitchToCraft"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALeverSwitchToCraft);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
