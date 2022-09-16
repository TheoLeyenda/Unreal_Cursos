// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/ChangeStateQuestTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangeStateQuestTrigger() {}
// Cross Module References
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FChangeStateQuestInfo();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UEnum* Z_Construct_UEnum_BuildingEscape_EQuestState();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AChangeStateQuestTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AChangeStateQuestTrigger();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectsInteractTrigger();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AQuestManager_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChangeStateQuestInfo;
class UScriptStruct* FChangeStateQuestInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChangeStateQuestInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChangeStateQuestInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChangeStateQuestInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ChangeStateQuestInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ChangeStateQuestInfo.OuterSingleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FChangeStateQuestInfo>()
{
	return FChangeStateQuestInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewQuestState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewQuestState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/ChangeStateQuestTrigger.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChangeStateQuestInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_NewQuestState_MetaData[] = {
		{ "Category", "ChangeStateQuestInfo" },
		{ "ModuleRelativePath", "Public/ChangeStateQuestTrigger.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_NewQuestState = { "NewQuestState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChangeStateQuestInfo, NewQuestState), Z_Construct_UEnum_BuildingEscape_EQuestState, METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_NewQuestState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_NewQuestState_MetaData)) }; // 4604206
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_QuestID_MetaData[] = {
		{ "Category", "ChangeStateQuestInfo" },
		{ "ModuleRelativePath", "Public/ChangeStateQuestTrigger.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChangeStateQuestInfo, QuestID), METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_QuestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_QuestID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_NewQuestState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_QuestID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"ChangeStateQuestInfo",
		sizeof(FChangeStateQuestInfo),
		alignof(FChangeStateQuestInfo),
		Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChangeStateQuestInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ChangeStateQuestInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChangeStateQuestInfo.InnerSingleton, Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChangeStateQuestInfo.InnerSingleton;
	}
	void AChangeStateQuestTrigger::StaticRegisterNativesAChangeStateQuestTrigger()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChangeStateQuestTrigger);
	UClass* Z_Construct_UClass_AChangeStateQuestTrigger_NoRegister()
	{
		return AChangeStateQuestTrigger::StaticClass();
	}
	struct Z_Construct_UClass_AChangeStateQuestTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManager;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeStateQuestsInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeStateQuestsInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChangeStateQuestsInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChangeStateQuestTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjectsInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChangeStateQuestTrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChangeStateQuestTrigger.h" },
		{ "ModuleRelativePath", "Public/ChangeStateQuestTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_QuestManager_MetaData[] = {
		{ "Category", "ChangeStateQuestTrigger" },
		{ "ModuleRelativePath", "Public/ChangeStateQuestTrigger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_QuestManager = { "QuestManager", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChangeStateQuestTrigger, QuestManager), Z_Construct_UClass_AQuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_QuestManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_QuestManager_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_ChangeStateQuestsInfo_Inner = { "ChangeStateQuestsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChangeStateQuestInfo, METADATA_PARAMS(nullptr, 0) }; // 2296872504
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_ChangeStateQuestsInfo_MetaData[] = {
		{ "Category", "ChangeStateQuestTrigger" },
		{ "ModuleRelativePath", "Public/ChangeStateQuestTrigger.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_ChangeStateQuestsInfo = { "ChangeStateQuestsInfo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChangeStateQuestTrigger, ChangeStateQuestsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_ChangeStateQuestsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_ChangeStateQuestsInfo_MetaData)) }; // 2296872504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChangeStateQuestTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_QuestManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_ChangeStateQuestsInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_ChangeStateQuestsInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChangeStateQuestTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChangeStateQuestTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChangeStateQuestTrigger_Statics::ClassParams = {
		&AChangeStateQuestTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChangeStateQuestTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChangeStateQuestTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChangeStateQuestTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChangeStateQuestTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChangeStateQuestTrigger()
	{
		if (!Z_Registration_Info_UClass_AChangeStateQuestTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChangeStateQuestTrigger.OuterSingleton, Z_Construct_UClass_AChangeStateQuestTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChangeStateQuestTrigger.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<AChangeStateQuestTrigger>()
	{
		return AChangeStateQuestTrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChangeStateQuestTrigger);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ChangeStateQuestTrigger_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ChangeStateQuestTrigger_h_Statics::ScriptStructInfo[] = {
		{ FChangeStateQuestInfo::StaticStruct, Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewStructOps, TEXT("ChangeStateQuestInfo"), &Z_Registration_Info_UScriptStruct_ChangeStateQuestInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChangeStateQuestInfo), 2296872504U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ChangeStateQuestTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChangeStateQuestTrigger, AChangeStateQuestTrigger::StaticClass, TEXT("AChangeStateQuestTrigger"), &Z_Registration_Info_UClass_AChangeStateQuestTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChangeStateQuestTrigger), 3221281217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ChangeStateQuestTrigger_h_8062259(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ChangeStateQuestTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ChangeStateQuestTrigger_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ChangeStateQuestTrigger_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ChangeStateQuestTrigger_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
