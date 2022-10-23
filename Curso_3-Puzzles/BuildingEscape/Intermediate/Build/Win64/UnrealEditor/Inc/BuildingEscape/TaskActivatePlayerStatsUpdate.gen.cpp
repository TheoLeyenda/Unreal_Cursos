// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/TaskActivatePlayerStatsUpdate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskActivatePlayerStatsUpdate() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTaskActivatePlayerStatsUpdate();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseTask();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingScapeCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTaskActivatePlayerStatsUpdate::execSettingDataTask)
	{
		P_GET_OBJECT(ABuildingScapeCharacter,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SettingDataTask(Z_Param_Value);
		P_NATIVE_END;
	}
	void UTaskActivatePlayerStatsUpdate::StaticRegisterNativesUTaskActivatePlayerStatsUpdate()
	{
		UClass* Class = UTaskActivatePlayerStatsUpdate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SettingDataTask", &UTaskActivatePlayerStatsUpdate::execSettingDataTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics
	{
		struct TaskActivatePlayerStatsUpdate_eventSettingDataTask_Parms
		{
			ABuildingScapeCharacter* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskActivatePlayerStatsUpdate_eventSettingDataTask_Parms, Value), Z_Construct_UClass_ABuildingScapeCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActivatePlayerStatsUpdate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskActivatePlayerStatsUpdate, nullptr, "SettingDataTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::TaskActivatePlayerStatsUpdate_eventSettingDataTask_Parms), Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskActivatePlayerStatsUpdate);
	UClass* Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_NoRegister()
	{
		return UTaskActivatePlayerStatsUpdate::StaticClass();
	}
	struct Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTask,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask, "SettingDataTask" }, // 3623854721
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/TaskActivatePlayerStatsUpdate.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActivatePlayerStatsUpdate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskActivatePlayerStatsUpdate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics::ClassParams = {
		&UTaskActivatePlayerStatsUpdate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaskActivatePlayerStatsUpdate()
	{
		if (!Z_Registration_Info_UClass_UTaskActivatePlayerStatsUpdate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskActivatePlayerStatsUpdate.OuterSingleton, Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTaskActivatePlayerStatsUpdate.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UTaskActivatePlayerStatsUpdate>()
	{
		return UTaskActivatePlayerStatsUpdate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskActivatePlayerStatsUpdate);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivatePlayerStatsUpdate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivatePlayerStatsUpdate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTaskActivatePlayerStatsUpdate, UTaskActivatePlayerStatsUpdate::StaticClass, TEXT("UTaskActivatePlayerStatsUpdate"), &Z_Registration_Info_UClass_UTaskActivatePlayerStatsUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskActivatePlayerStatsUpdate), 1339999042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivatePlayerStatsUpdate_h_294536783(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivatePlayerStatsUpdate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivatePlayerStatsUpdate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
