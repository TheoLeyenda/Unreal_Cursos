// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/QuestManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestManager() {}
// Cross Module References
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FQuestInfo();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseQuest_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AQuestManager_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AQuestManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	BUILDINGESCAPE_API UEnum* Z_Construct_UEnum_BuildingEscape_EQuestState();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UQuestEvaluatorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape, nullptr, "OnFinishAllQuest__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FQuestInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDINGESCAPE_API uint32 Get_Z_Construct_UScriptStruct_FQuestInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("QuestInfo"), sizeof(FQuestInfo), Get_Z_Construct_UScriptStruct_FQuestInfo_Hash());
	}
	return Singleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FQuestInfo>()
{
	return FQuestInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestInfo(FQuestInfo::StaticStruct, TEXT("/Script/BuildingEscape"), TEXT("QuestInfo"), false, nullptr, nullptr);
static struct FScriptStruct_BuildingEscape_StaticRegisterNativesFQuestInfo
{
	FScriptStruct_BuildingEscape_StaticRegisterNativesFQuestInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestInfo")),new UScriptStruct::TCppStructOps<FQuestInfo>);
	}
} ScriptStruct_BuildingEscape_StaticRegisterNativesFQuestInfo;
	struct Z_Construct_UScriptStruct_FQuestInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameRowReadDataQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameRowReadDataQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckedDone_MetaData[];
#endif
		static void NewProp_bCheckedDone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckedDone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Quest_MetaData[] = {
		{ "Category", "QuestInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestInfo, Quest), Z_Construct_UClass_UBaseQuest_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_NameRowReadDataQuest_MetaData[] = {
		{ "Category", "QuestInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_NameRowReadDataQuest = { "NameRowReadDataQuest", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestInfo, NameRowReadDataQuest), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_NameRowReadDataQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_NameRowReadDataQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_bCheckedDone_MetaData[] = {
		{ "Category", "QuestInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_bCheckedDone_SetBit(void* Obj)
	{
		((FQuestInfo*)Obj)->bCheckedDone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_bCheckedDone = { "bCheckedDone", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQuestInfo), &Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_bCheckedDone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_bCheckedDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_bCheckedDone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Quest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_NameRowReadDataQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_bCheckedDone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"QuestInfo",
		sizeof(FQuestInfo),
		alignof(FQuestInfo),
		Z_Construct_UScriptStruct_FQuestInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestInfo"), sizeof(FQuestInfo), Get_Z_Construct_UScriptStruct_FQuestInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestInfo_Hash() { return 2710825194U; }
	DEFINE_FUNCTION(AQuestManager::execLoadQuestsInfoDataTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadQuestsInfoDataTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuestManager::execSendEventFinishAllQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendEventFinishAllQuest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuestManager::execCheckQuests)
	{
		P_GET_OBJECT(UQuestEvaluatorComponent,Z_Param_QuestEvaluatorComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckQuests(Z_Param_QuestEvaluatorComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuestManager::execChangeStateQuest)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_indexQuest);
		P_GET_PROPERTY(FByteProperty,Z_Param_NewQuestState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeStateQuest(Z_Param_indexQuest,EQuestState(Z_Param_NewQuestState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuestManager::execFindQuestEvaluatorComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindQuestEvaluatorComponents();
		P_NATIVE_END;
	}
	void AQuestManager::StaticRegisterNativesAQuestManager()
	{
		UClass* Class = AQuestManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeStateQuest", &AQuestManager::execChangeStateQuest },
			{ "CheckQuests", &AQuestManager::execCheckQuests },
			{ "FindQuestEvaluatorComponents", &AQuestManager::execFindQuestEvaluatorComponents },
			{ "LoadQuestsInfoDataTable", &AQuestManager::execLoadQuestsInfoDataTable },
			{ "SendEventFinishAllQuest", &AQuestManager::execSendEventFinishAllQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics
	{
		struct QuestManager_eventChangeStateQuest_Parms
		{
			int32 indexQuest;
			TEnumAsByte<EQuestState> NewQuestState;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_indexQuest;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewQuestState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::NewProp_indexQuest = { "indexQuest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManager_eventChangeStateQuest_Parms, indexQuest), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::NewProp_NewQuestState = { "NewQuestState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManager_eventChangeStateQuest_Parms, NewQuestState), Z_Construct_UEnum_BuildingEscape_EQuestState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::NewProp_indexQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::NewProp_NewQuestState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestManager, nullptr, "ChangeStateQuest", nullptr, nullptr, sizeof(QuestManager_eventChangeStateQuest_Parms), Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestManager_ChangeStateQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuestManager_CheckQuests_Statics
	{
		struct QuestManager_eventCheckQuests_Parms
		{
			UQuestEvaluatorComponent* QuestEvaluatorComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestEvaluatorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestEvaluatorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::NewProp_QuestEvaluatorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::NewProp_QuestEvaluatorComponent = { "QuestEvaluatorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManager_eventCheckQuests_Parms, QuestEvaluatorComponent), Z_Construct_UClass_UQuestEvaluatorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::NewProp_QuestEvaluatorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::NewProp_QuestEvaluatorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::NewProp_QuestEvaluatorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestManager, nullptr, "CheckQuests", nullptr, nullptr, sizeof(QuestManager_eventCheckQuests_Parms), Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestManager_CheckQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestManager, nullptr, "FindQuestEvaluatorComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestManager, nullptr, "LoadQuestsInfoDataTable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestManager, nullptr, "SendEventFinishAllQuest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AQuestManager_NoRegister()
	{
		return AQuestManager::StaticClass();
	}
	struct Z_Construct_UClass_AQuestManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestsInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestsInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestsInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestEvaluatorComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestEvaluatorComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestEvaluatorComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuestManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AQuestManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AQuestManager_ChangeStateQuest, "ChangeStateQuest" }, // 3860857611
		{ &Z_Construct_UFunction_AQuestManager_CheckQuests, "CheckQuests" }, // 1827095961
		{ &Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents, "FindQuestEvaluatorComponents" }, // 1346233233
		{ &Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable, "LoadQuestsInfoDataTable" }, // 2266640779
		{ &Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest, "SendEventFinishAllQuest" }, // 1237057515
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestSystem/QuestManager.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestsInfo_Inner = { "QuestsInfo", nullptr, (EPropertyFlags)0x0000008000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestsInfo_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestsInfo = { "QuestsInfo", nullptr, (EPropertyFlags)0x0010008000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestManager, QuestsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestsInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestManager_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestManager_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestManager, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuestManager_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::NewProp_DataTable_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestEvaluatorComponents_Inner = { "QuestEvaluatorComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestEvaluatorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestEvaluatorComponents_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestEvaluatorComponents = { "QuestEvaluatorComponents", nullptr, (EPropertyFlags)0x0010008000020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestManager, QuestEvaluatorComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestEvaluatorComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestEvaluatorComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuestManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestsInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestsInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestManager_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestEvaluatorComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestEvaluatorComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuestManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuestManager_Statics::ClassParams = {
		&AQuestManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AQuestManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AQuestManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuestManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuestManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuestManager, 1927370199);
	template<> BUILDINGESCAPE_API UClass* StaticClass<AQuestManager>()
	{
		return AQuestManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuestManager(Z_Construct_UClass_AQuestManager, &AQuestManager::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("AQuestManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
