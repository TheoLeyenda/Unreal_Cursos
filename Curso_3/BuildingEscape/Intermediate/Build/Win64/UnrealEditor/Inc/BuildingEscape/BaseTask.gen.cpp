// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/BaseTask.h"
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataPlayer;
		static void NewProp_bForceSend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::NewProp_DataPlayer = { "DataPlayer", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BuildingEscape_eventOnUpdateTask_Parms, DataPlayer), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(nullptr, 0) }; // 3108135505
	void Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::NewProp_bForceSend_SetBit(void* Obj)
	{
		((_Script_BuildingEscape_eventOnUpdateTask_Parms*)Obj)->bForceSend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::NewProp_bForceSend = { "bForceSend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_BuildingEscape_eventOnUpdateTask_Parms), &Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::NewProp_bForceSend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::NewProp_DataPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::NewProp_bForceSend,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape, nullptr, "OnUpdateTask__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::_Script_BuildingEscape_eventOnUpdateTask_Parms), Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTask_FindInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTask_FindInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTask, nullptr, "FindInformation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTask_FindInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTask_FindInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTask_FindInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTask_FindInformation_Statics::FuncParams);
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
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::NewProp_bForceSend_SetBit(void* Obj)
	{
		((BaseTask_eventSendEventUpdateTask_Parms*)Obj)->bForceSend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::NewProp_bForceSend = { "bForceSend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTask_eventSendEventUpdateTask_Parms), &Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::NewProp_bForceSend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::NewProp_bForceSend,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTask, nullptr, "SendEventUpdateTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::BaseTask_eventSendEventUpdateTask_Parms), Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTask_SendEventUpdateTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTask_SendEventUpdateTask_Statics::FuncParams);
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
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SendEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::NewProp_SendEvent_SetBit(void* Obj)
	{
		((BaseTask_eventSettingDataBaseTask_Parms*)Obj)->SendEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::NewProp_SendEvent = { "SendEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTask_eventSettingDataBaseTask_Parms), &Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::NewProp_SendEvent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::NewProp_SendEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTask, nullptr, "SettingDataBaseTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::BaseTask_eventSettingDataBaseTask_Parms), Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTask_SettingDataBaseTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTask_SettingDataBaseTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseTask);
	UClass* Z_Construct_UClass_UBaseTask_NoRegister()
	{
		return UBaseTask::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingScapeCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingScapeCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendDataPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SendDataPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseTask_FindInformation, "FindInformation" }, // 3957506154
		{ &Z_Construct_UFunction_UBaseTask_SendEventUpdateTask, "SendEventUpdateTask" }, // 2068632638
		{ &Z_Construct_UFunction_UBaseTask_SettingDataBaseTask, "SettingDataBaseTask" }, // 3986486137
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestSystem/BaseTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseTask.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTask_Statics::NewProp_BuildingScapeCharacter_MetaData[] = {
		{ "Category", "BaseTask" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTask_Statics::NewProp_BuildingScapeCharacter = { "BuildingScapeCharacter", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTask, BuildingScapeCharacter), Z_Construct_UClass_ABuildingScapeCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTask_Statics::NewProp_BuildingScapeCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTask_Statics::NewProp_BuildingScapeCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTask_Statics::NewProp_SendDataPlayer_MetaData[] = {
		{ "Category", "BaseTask" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseTask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseTask_Statics::NewProp_SendDataPlayer = { "SendDataPlayer", nullptr, (EPropertyFlags)0x0010008000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTask, SendDataPlayer), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(Z_Construct_UClass_UBaseTask_Statics::NewProp_SendDataPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTask_Statics::NewProp_SendDataPlayer_MetaData)) }; // 3108135505
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTask_Statics::NewProp_BuildingScapeCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTask_Statics::NewProp_SendDataPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseTask_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UBaseTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseTask.OuterSingleton, Z_Construct_UClass_UBaseTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseTask.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UBaseTask>()
	{
		return UBaseTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTask);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseTask, UBaseTask::StaticClass, TEXT("UBaseTask"), &Z_Registration_Info_UClass_UBaseTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseTask), 2968728332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_2845236660(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
