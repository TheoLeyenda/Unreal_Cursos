// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/TaskActivateInteractTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskActivateInteractTrigger() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ATaskActivateInteractTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ATaskActivateInteractTrigger();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ATask();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractTrigger_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATaskActivateInteractTrigger::execSettingDataTask)
	{
		P_GET_OBJECT(AInteractTrigger,Z_Param_InteractTrigger);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SettingDataTask(Z_Param_InteractTrigger);
		P_NATIVE_END;
	}
	void ATaskActivateInteractTrigger::StaticRegisterNativesATaskActivateInteractTrigger()
	{
		UClass* Class = ATaskActivateInteractTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SettingDataTask", &ATaskActivateInteractTrigger::execSettingDataTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATaskActivateInteractTrigger_SettingDataTask_Statics
	{
		struct TaskActivateInteractTrigger_eventSettingDataTask_Parms
		{
			AInteractTrigger* InteractTrigger;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATaskActivateInteractTrigger_SettingDataTask_Statics::NewProp_InteractTrigger = { "InteractTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskActivateInteractTrigger_eventSettingDataTask_Parms, InteractTrigger), Z_Construct_UClass_AInteractTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATaskActivateInteractTrigger_SettingDataTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATaskActivateInteractTrigger_SettingDataTask_Statics::NewProp_InteractTrigger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATaskActivateInteractTrigger_SettingDataTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActivateInteractTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATaskActivateInteractTrigger_SettingDataTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATaskActivateInteractTrigger, nullptr, "SettingDataTask", nullptr, nullptr, sizeof(TaskActivateInteractTrigger_eventSettingDataTask_Parms), Z_Construct_UFunction_ATaskActivateInteractTrigger_SettingDataTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATaskActivateInteractTrigger_SettingDataTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATaskActivateInteractTrigger_SettingDataTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATaskActivateInteractTrigger_SettingDataTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATaskActivateInteractTrigger_SettingDataTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATaskActivateInteractTrigger_SettingDataTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATaskActivateInteractTrigger_NoRegister()
	{
		return ATaskActivateInteractTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ATaskActivateInteractTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATaskActivateInteractTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATask,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATaskActivateInteractTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATaskActivateInteractTrigger_SettingDataTask, "SettingDataTask" }, // 3509030957
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATaskActivateInteractTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/TaskActivateInteractTrigger.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActivateInteractTrigger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATaskActivateInteractTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATaskActivateInteractTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATaskActivateInteractTrigger_Statics::ClassParams = {
		&ATaskActivateInteractTrigger::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATaskActivateInteractTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATaskActivateInteractTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATaskActivateInteractTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATaskActivateInteractTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATaskActivateInteractTrigger, 3480333327);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ATaskActivateInteractTrigger>()
	{
		return ATaskActivateInteractTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATaskActivateInteractTrigger(Z_Construct_UClass_ATaskActivateInteractTrigger, &ATaskActivateInteractTrigger::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ATaskActivateInteractTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATaskActivateInteractTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
