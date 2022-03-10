// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/BaseTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTask() {}
// Cross Module References
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FDataPlayer();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseTask_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingScapeCharacter_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics
	{
		struct _Script_BuildingEscape_eventOnUpdateTask_Parms
		{
			FDataPlayer DataPlayer;
			bool bForceSend;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataPlayer;
		static void NewProp_bForceSend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceSend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::NewProp_DataPlayer = { "DataPlayer", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BuildingEscape_eventOnUpdateTask_Parms, DataPlayer), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::NewProp_bForceSend_SetBit(void* Obj)
	{
		((_Script_BuildingEscape_eventOnUpdateTask_Parms*)Obj)->bForceSend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::NewProp_bForceSend = { "bForceSend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_BuildingEscape_eventOnUpdateTask_Parms), &Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::NewProp_bForceSend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::NewProp_DataPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::NewProp_bForceSend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape, nullptr, "OnUpdateTask__DelegateSignature", nullptr, nullptr, sizeof(_Script_BuildingEscape_eventOnUpdateTask_Parms), Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBaseTask::execSettingDataBaseTask)
	{
		P_GET_UBOOL(Z_Param_SendEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SettingDataBaseTask(Z_Param_SendEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTask::execFindInformation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindInformation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTask::execSendEventUpdateTask)
	{
		P_GET_UBOOL(Z_Param_bForceSend);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendEventUpdateTask(Z_Param_bForceSend);
		P_NATIVE_END;
	}
	void UBaseTask::StaticRegisterNativesUBaseTask()
	{
		UClass* Class = UBaseTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindInformation", &UBaseTask::execFindInformation },
			{ "SendEventUpdateTask", &UBaseTask::execSendEventUpdateTask },
			{ "SettingDataBaseTask", &UBaseTask::execSettingDataBaseTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseTask_FindInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTask_FindInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTask_FindInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTask, nullptr, "FindInformation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTask_FindInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTask_FindInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTask_FindInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTask_FindInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics
	{
		struct BaseTask_eventSendEventUpdateTask_Parms
		{
			bool bForceSend;
		};
		static void NewProp_bForceSend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceSend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::NewProp_bForceSend_SetBit(void* Obj)
	{
		((BaseTask_eventSendEventUpdateTask_Parms*)Obj)->bForceSend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::NewProp_bForceSend = { "bForceSend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTask_eventSendEventUpdateTask_Parms), &Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::NewProp_bForceSend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::NewProp_bForceSend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTask, nullptr, "SendEventUpdateTask", nullptr, nullptr, sizeof(BaseTask_eventSendEventUpdateTask_Parms), Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTask_SendEventUpdateTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics
	{
		struct BaseTask_eventSettingDataBaseTask_Parms
		{
			bool SendEvent;
		};
		static void NewProp_SendEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SendEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::NewProp_SendEvent_SetBit(void* Obj)
	{
		((BaseTask_eventSettingDataBaseTask_Parms*)Obj)->SendEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::NewProp_SendEvent = { "SendEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTask_eventSettingDataBaseTask_Parms), &Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::NewProp_SendEvent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::NewProp_SendEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTask, nullptr, "SettingDataBaseTask", nullptr, nullptr, sizeof(BaseTask_eventSettingDataBaseTask_Parms), Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTask_SettingDataBaseTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseTask_NoRegister()
	{
		return UBaseTask::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingScapeCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildingScapeCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendDataPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SendDataPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseTask_FindInformation, "FindInformation" }, // 1024883878
		{ &Z_Construct_UFunction_UBaseTask_SendEventUpdateTask, "SendEventUpdateTask" }, // 130796148
		{ &Z_Construct_UFunction_UBaseTask_SettingDataBaseTask, "SettingDataBaseTask" }, // 1308136079
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestSystem/BaseTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTask_Statics::NewProp_BuildingScapeCharacter_MetaData[] = {
		{ "Category", "BaseTask" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseTask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTask_Statics::NewProp_BuildingScapeCharacter = { "BuildingScapeCharacter", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTask, BuildingScapeCharacter), Z_Construct_UClass_ABuildingScapeCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTask_Statics::NewProp_BuildingScapeCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTask_Statics::NewProp_BuildingScapeCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTask_Statics::NewProp_SendDataPlayer_MetaData[] = {
		{ "Category", "BaseTask" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseTask.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseTask_Statics::NewProp_SendDataPlayer = { "SendDataPlayer", nullptr, (EPropertyFlags)0x0010008000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTask, SendDataPlayer), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(Z_Construct_UClass_UBaseTask_Statics::NewProp_SendDataPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTask_Statics::NewProp_SendDataPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTask_Statics::NewProp_BuildingScapeCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTask_Statics::NewProp_SendDataPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseTask_Statics::ClassParams = {
		&UBaseTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTask_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseTask, 4005682828);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UBaseTask>()
	{
		return UBaseTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseTask(Z_Construct_UClass_UBaseTask, &UBaseTask::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UBaseTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
