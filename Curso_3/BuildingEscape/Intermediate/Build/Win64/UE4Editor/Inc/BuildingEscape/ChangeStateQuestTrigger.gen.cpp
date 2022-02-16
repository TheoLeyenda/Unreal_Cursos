// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/ChangeStateQuestTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
class UScriptStruct* FChangeStateQuestInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDINGESCAPE_API uint32 Get_Z_Construct_UScriptStruct_FChangeStateQuestInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChangeStateQuestInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ChangeStateQuestInfo"), sizeof(FChangeStateQuestInfo), Get_Z_Construct_UScriptStruct_FChangeStateQuestInfo_Hash());
	}
	return Singleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FChangeStateQuestInfo>()
{
	return FChangeStateQuestInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChangeStateQuestInfo(FChangeStateQuestInfo::StaticStruct, TEXT("/Script/BuildingEscape"), TEXT("ChangeStateQuestInfo"), false, nullptr, nullptr);
static struct FScriptStruct_BuildingEscape_StaticRegisterNativesFChangeStateQuestInfo
{
	FScriptStruct_BuildingEscape_StaticRegisterNativesFChangeStateQuestInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChangeStateQuestInfo")),new UScriptStruct::TCppStructOps<FChangeStateQuestInfo>);
	}
} ScriptStruct_BuildingEscape_StaticRegisterNativesFChangeStateQuestInfo;
	struct Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewQuestState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewQuestState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/ChangeStateQuestTrigger.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChangeStateQuestInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_NewQuestState_MetaData[] = {
		{ "Category", "ChangeStateQuestInfo" },
		{ "ModuleRelativePath", "Public/ChangeStateQuestTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_NewQuestState = { "NewQuestState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChangeStateQuestInfo, NewQuestState), Z_Construct_UEnum_BuildingEscape_EQuestState, METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_NewQuestState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_NewQuestState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_QuestID_MetaData[] = {
		{ "Category", "ChangeStateQuestInfo" },
		{ "ModuleRelativePath", "Public/ChangeStateQuestTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChangeStateQuestInfo, QuestID), METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_QuestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_QuestID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_NewQuestState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::NewProp_QuestID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::ReturnStructParams = {
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChangeStateQuestInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChangeStateQuestInfo"), sizeof(FChangeStateQuestInfo), Get_Z_Construct_UScriptStruct_FChangeStateQuestInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChangeStateQuestInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChangeStateQuestInfo_Hash() { return 673375044U; }
	void AChangeStateQuestTrigger::StaticRegisterNativesAChangeStateQuestTrigger()
	{
	}
	UClass* Z_Construct_UClass_AChangeStateQuestTrigger_NoRegister()
	{
		return AChangeStateQuestTrigger::StaticClass();
	}
	struct Z_Construct_UClass_AChangeStateQuestTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestManager;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangeStateQuestsInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeStateQuestsInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChangeStateQuestsInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChangeStateQuestTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjectsInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChangeStateQuestTrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChangeStateQuestTrigger.h" },
		{ "ModuleRelativePath", "Public/ChangeStateQuestTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_QuestManager_MetaData[] = {
		{ "Category", "ChangeStateQuestTrigger" },
		{ "ModuleRelativePath", "Public/ChangeStateQuestTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_QuestManager = { "QuestManager", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChangeStateQuestTrigger, QuestManager), Z_Construct_UClass_AQuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_QuestManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_QuestManager_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_ChangeStateQuestsInfo_Inner = { "ChangeStateQuestsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChangeStateQuestInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_ChangeStateQuestsInfo_MetaData[] = {
		{ "Category", "ChangeStateQuestTrigger" },
		{ "ModuleRelativePath", "Public/ChangeStateQuestTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_ChangeStateQuestsInfo = { "ChangeStateQuestsInfo", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChangeStateQuestTrigger, ChangeStateQuestsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_ChangeStateQuestsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_ChangeStateQuestsInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChangeStateQuestTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_QuestManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_ChangeStateQuestsInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChangeStateQuestTrigger_Statics::NewProp_ChangeStateQuestsInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChangeStateQuestTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChangeStateQuestTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChangeStateQuestTrigger_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChangeStateQuestTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChangeStateQuestTrigger, 2749086944);
	template<> BUILDINGESCAPE_API UClass* StaticClass<AChangeStateQuestTrigger>()
	{
		return AChangeStateQuestTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChangeStateQuestTrigger(Z_Construct_UClass_AChangeStateQuestTrigger, &AChangeStateQuestTrigger::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("AChangeStateQuestTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChangeStateQuestTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
