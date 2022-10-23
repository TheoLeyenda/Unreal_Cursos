// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/TaskActivateInteractTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskActivateInteractTrigger() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTaskActivateInteractTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTaskActivateInteractTrigger();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseTask();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractTrigger_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTaskActivateInteractTrigger::execSettingDataTask)
	{
		P_GET_OBJECT(AInteractTrigger,Z_Param_InteractTrigger);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SettingDataTask(Z_Param_InteractTrigger);
		P_NATIVE_END;
	}
	void UTaskActivateInteractTrigger::StaticRegisterNativesUTaskActivateInteractTrigger()
	{
		UClass* Class = UTaskActivateInteractTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SettingDataTask", &UTaskActivateInteractTrigger::execSettingDataTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTaskActivateInteractTrigger_SettingDataTask_Statics
	{
		struct TaskActivateInteractTrigger_eventSettingDataTask_Parms
		{
			AInteractTrigger* InteractTrigger;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractTrigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskActivateInteractTrigger_SettingDataTask_Statics::NewProp_InteractTrigger = { "InteractTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskActivateInteractTrigger_eventSettingDataTask_Parms, InteractTrigger), Z_Construct_UClass_AInteractTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskActivateInteractTrigger_SettingDataTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskActivateInteractTrigger_SettingDataTask_Statics::NewProp_InteractTrigger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskActivateInteractTrigger_SettingDataTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActivateInteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskActivateInteractTrigger_SettingDataTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskActivateInteractTrigger, nullptr, "SettingDataTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTaskActivateInteractTrigger_SettingDataTask_Statics::TaskActivateInteractTrigger_eventSettingDataTask_Parms), Z_Construct_UFunction_UTaskActivateInteractTrigger_SettingDataTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskActivateInteractTrigger_SettingDataTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskActivateInteractTrigger_SettingDataTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskActivateInteractTrigger_SettingDataTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskActivateInteractTrigger_SettingDataTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskActivateInteractTrigger_SettingDataTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskActivateInteractTrigger);
	UClass* Z_Construct_UClass_UTaskActivateInteractTrigger_NoRegister()
	{
		return UTaskActivateInteractTrigger::StaticClass();
	}
	struct Z_Construct_UClass_UTaskActivateInteractTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractTriggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractTriggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractTriggers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTask,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskActivateInteractTrigger_SettingDataTask, "SettingDataTask" }, // 3418837291
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/TaskActivateInteractTrigger.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActivateInteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::NewProp_InteractTriggers_Inner = { "InteractTriggers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AInteractTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::NewProp_InteractTriggers_MetaData[] = {
		{ "Category", "TaskActivateInteractTrigger" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActivateInteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::NewProp_InteractTriggers = { "InteractTriggers", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskActivateInteractTrigger, InteractTriggers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::NewProp_InteractTriggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::NewProp_InteractTriggers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::NewProp_InteractTriggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::NewProp_InteractTriggers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskActivateInteractTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::ClassParams = {
		&UTaskActivateInteractTrigger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaskActivateInteractTrigger()
	{
		if (!Z_Registration_Info_UClass_UTaskActivateInteractTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskActivateInteractTrigger.OuterSingleton, Z_Construct_UClass_UTaskActivateInteractTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTaskActivateInteractTrigger.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UTaskActivateInteractTrigger>()
	{
		return UTaskActivateInteractTrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskActivateInteractTrigger);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivateInteractTrigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivateInteractTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTaskActivateInteractTrigger, UTaskActivateInteractTrigger::StaticClass, TEXT("UTaskActivateInteractTrigger"), &Z_Registration_Info_UClass_UTaskActivateInteractTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskActivateInteractTrigger), 3615641260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivateInteractTrigger_h_1767252744(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivateInteractTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivateInteractTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
