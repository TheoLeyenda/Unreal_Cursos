// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/Task.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask() {}
// Cross Module References
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FDataPlayer();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ATask_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ATask();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics
	{
		struct _Script_BuildingEscape_eventOnUpdateTask_Parms
		{
			FDataPlayer DataPlayer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::NewProp_DataPlayer = { "DataPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BuildingEscape_eventOnUpdateTask_Parms, DataPlayer), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::NewProp_DataPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/Task.h" },
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
	DEFINE_FUNCTION(ATask::execFindInformation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindInformation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATask::execSendEventUpdateTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendEventUpdateTask();
		P_NATIVE_END;
	}
	void ATask::StaticRegisterNativesATask()
	{
		UClass* Class = ATask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindInformation", &ATask::execFindInformation },
			{ "SendEventUpdateTask", &ATask::execSendEventUpdateTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATask_FindInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATask_FindInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/Task.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATask_FindInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATask, nullptr, "FindInformation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATask_FindInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATask_FindInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATask_FindInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATask_FindInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATask_SendEventUpdateTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATask_SendEventUpdateTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/Task.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATask_SendEventUpdateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATask, nullptr, "SendEventUpdateTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATask_SendEventUpdateTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATask_SendEventUpdateTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATask_SendEventUpdateTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATask_SendEventUpdateTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATask_NoRegister()
	{
		return ATask::StaticClass();
	}
	struct Z_Construct_UClass_ATask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATask_FindInformation, "FindInformation" }, // 2034599011
		{ &Z_Construct_UFunction_ATask_SendEventUpdateTask, "SendEventUpdateTask" }, // 1838113786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestSystem/Task.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/Task.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATask_Statics::ClassParams = {
		&ATask::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATask, 3281496868);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ATask>()
	{
		return ATask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATask(Z_Construct_UClass_ATask, &ATask::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ATask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
