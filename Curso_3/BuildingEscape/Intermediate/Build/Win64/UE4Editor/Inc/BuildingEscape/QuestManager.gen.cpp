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
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AQuestManager_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AQuestManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	BUILDINGESCAPE_API UEnum* Z_Construct_UEnum_BuildingEscape_EQuestState();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UQuestEvaluatorComponent_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AQuest_NoRegister();
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
		P_GET_ENUM(EQuestState,Z_Param_NewQuestState);
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
			{ "SendEventFinishAllQuest", &AQuestManager::execSendEventFinishAllQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics
	{
		struct QuestManager_eventChangeStateQuest_Parms
		{
			int32 indexQuest;
			EQuestState NewQuestState;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_indexQuest;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NewQuestState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewQuestState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::NewProp_indexQuest = { "indexQuest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManager_eventChangeStateQuest_Parms, indexQuest), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::NewProp_NewQuestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::NewProp_NewQuestState = { "NewQuestState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManager_eventChangeStateQuest_Parms, NewQuestState), Z_Construct_UEnum_BuildingEscape_EQuestState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::NewProp_indexQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestManager_ChangeStateQuest_Statics::NewProp_NewQuestState_Underlying,
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Quests;
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
		{ &Z_Construct_UFunction_AQuestManager_ChangeStateQuest, "ChangeStateQuest" }, // 2862675333
		{ &Z_Construct_UFunction_AQuestManager_CheckQuests, "CheckQuests" }, // 1827095961
		{ &Z_Construct_UFunction_AQuestManager_FindQuestEvaluatorComponents, "FindQuestEvaluatorComponents" }, // 1346233233
		{ &Z_Construct_UFunction_AQuestManager_SendEventFinishAllQuest, "SendEventFinishAllQuest" }, // 1237057515
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestSystem/QuestManager.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestManager_Statics::NewProp_Quests_Inner = { "Quests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestManager_Statics::NewProp_Quests_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AQuestManager_Statics::NewProp_Quests = { "Quests", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestManager, Quests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AQuestManager_Statics::NewProp_Quests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::NewProp_Quests_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestManager_Statics::NewProp_Quests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestManager_Statics::NewProp_Quests,
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
	IMPLEMENT_CLASS(AQuestManager, 3271883568);
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
