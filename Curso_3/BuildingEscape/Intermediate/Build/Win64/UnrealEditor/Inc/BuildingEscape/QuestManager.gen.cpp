// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/QuestManager.h"
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
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape, nullptr, "OnFinishAllQuest__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestInfo;
class UScriptStruct* FQuestInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("QuestInfo"));
	}
	return Z_Registration_Info_UScriptStruct_QuestInfo.OuterSingleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FQuestInfo>()
{
	return FQuestInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameRowReadDataQuest_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameRowReadDataQuest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckedDone_MetaData[];
#endif
		static void NewProp_bCheckedDone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckedDone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Quest_MetaData[] = {
		{ "Category", "QuestInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestInfo, Quest), Z_Construct_UClass_UBaseQuest_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_NameRowReadDataQuest_MetaData[] = {
		{ "Category", "QuestInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_NameRowReadDataQuest = { "NameRowReadDataQuest", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestInfo, NameRowReadDataQuest), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_NameRowReadDataQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_NameRowReadDataQuest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_bCheckedDone_MetaData[] = {
		{ "Category", "QuestInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_bCheckedDone_SetBit(void* Obj)
	{
		((FQuestInfo*)Obj)->bCheckedDone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_bCheckedDone = { "bCheckedDone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQuestInfo), &Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_bCheckedDone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_bCheckedDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_bCheckedDone_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_NameRowReadDataQuest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_bCheckedDone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestInfo_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_QuestInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestInfo.InnerSingleton, Z_Construct_UScriptStruct_FQuestInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestInfo.InnerSingleton;
	}
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
		P_GET_UBOOL(Z_Param_bForceSend);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckQuests(Z_Param_QuestEvaluatorComponent,Z_Param_bForceSend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuestManager::execChangeStateQuest)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IdQuest);
		P_GET_PROPERTY(FByteProperty,Z_Param_NewQuestState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeStateQuest(Z_Param_IdQuest,EQuestState(Z_Param_NewQuestState));
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
			int32 IdQuest;
			TEnumAsByte<EQuestState> NewQuestState;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IdQuest;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewQuestState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::NewProp_IdQuest = { "IdQuest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManager_eventChangeStateQuest_Parms, IdQuest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::NewProp_NewQuestState = { "NewQuestState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManager_eventChangeStateQuest_Parms, NewQuestState), Z_Construct_UEnum_BuildingEscape_EQuestState, METADATA_PARAMS(nullptr, 0) }; // 4604206
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::NewProp_IdQuest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::NewProp_NewQuestState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestManager, nullptr, "ChangeStateQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::QuestManager_eventChangeStateQuest_Parms), Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestManager_ChangeStateQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuestManager_CheckQuests_Statics
	{
		struct QuestManager_eventCheckQuests_Parms
		{
			UQuestEvaluatorComponent* QuestEvaluatorComponent;
			bool bForceSend;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestEvaluatorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestEvaluatorComponent;
		static void NewProp_bForceSend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::NewProp_QuestEvaluatorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::NewProp_QuestEvaluatorComponent = { "QuestEvaluatorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManager_eventCheckQuests_Parms, QuestEvaluatorComponent), Z_Construct_UClass_UQuestEvaluatorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::NewProp_QuestEvaluatorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::NewProp_QuestEvaluatorComponent_MetaData)) };
	void Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::NewProp_bForceSend_SetBit(void* Obj)
	{
		((QuestManager_eventCheckQuests_Parms*)Obj)->bForceSend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::NewProp_bForceSend = { "bForceSend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestManager_eventCheckQuests_Parms), &Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::NewProp_bForceSend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::NewProp_QuestEvaluatorComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::NewProp_bForceSend,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestManager, nullptr, "CheckQuests", nullptr, nullptr, sizeof(Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::QuestManager_eventCheckQuests_Parms), Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestManager_CheckQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuestManager_CheckQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestManager, nullptr, "FindQuestEvaluatorComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestManager, nullptr, "LoadQuestsInfoDataTable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestManager, nullptr, "SendEventFinishAllQuest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQuestManager);
	UClass* Z_Construct_UClass_AQuestManager_NoRegister()
	{
		return AQuestManager::StaticClass();
	}
	struct Z_Construct_UClass_AQuestManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestsInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestsInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestsInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestEvaluatorComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestEvaluatorComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestEvaluatorComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuestManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AQuestManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AQuestManager_ChangeStateQuest, "ChangeStateQuest" }, // 3700669108
		{ &Z_Construct_UFunction_AQuestManager_CheckQuests, "CheckQuests" }, // 4082266988
		{ &Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents, "FindQuestEvaluatorComponents" }, // 2110098820
		{ &Z_Construct_UFunction_AQuestManager_LoadQuestsInfoDataTable, "LoadQuestsInfoDataTable" }, // 2449783513
		{ &Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest, "SendEventFinishAllQuest" }, // 2397670004
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestSystem/QuestManager.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestsInfo_Inner = { "QuestsInfo", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestInfo, METADATA_PARAMS(nullptr, 0) }; // 4078575986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestsInfo_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestsInfo = { "QuestsInfo", nullptr, (EPropertyFlags)0x0010008000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestManager, QuestsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestsInfo_MetaData)) }; // 4078575986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestManager_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestManager_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestManager, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuestManager_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::NewProp_DataTable_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestEvaluatorComponents_Inner = { "QuestEvaluatorComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestEvaluatorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestEvaluatorComponents_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestEvaluatorComponents = { "QuestEvaluatorComponents", nullptr, (EPropertyFlags)0x0010008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestManager, QuestEvaluatorComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestEvaluatorComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestEvaluatorComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuestManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestsInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestsInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestManager_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestEvaluatorComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestEvaluatorComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuestManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AQuestManager_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_AQuestManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQuestManager.OuterSingleton, Z_Construct_UClass_AQuestManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AQuestManager.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<AQuestManager>()
	{
		return AQuestManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestManager);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_Statics::ScriptStructInfo[] = {
		{ FQuestInfo::StaticStruct, Z_Construct_UScriptStruct_FQuestInfo_Statics::NewStructOps, TEXT("QuestInfo"), &Z_Registration_Info_UScriptStruct_QuestInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestInfo), 4078575986U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AQuestManager, AQuestManager::StaticClass, TEXT("AQuestManager"), &Z_Registration_Info_UClass_AQuestManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQuestManager), 2878169460U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_3359586690(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
