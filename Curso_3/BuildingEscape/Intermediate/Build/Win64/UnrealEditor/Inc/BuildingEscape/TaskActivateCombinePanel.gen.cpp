// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/TaskActivateCombinePanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskActivateCombinePanel() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTaskActivateCombinePanel_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTaskActivateCombinePanel();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseTask();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACombinePanel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTaskActivateCombinePanel::execSettingDataTask)
	{
		P_GET_OBJECT(ACombinePanel,Z_Param_InteractTrigger);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SettingDataTask(Z_Param_InteractTrigger);
		P_NATIVE_END;
	}
	void UTaskActivateCombinePanel::StaticRegisterNativesUTaskActivateCombinePanel()
	{
		UClass* Class = UTaskActivateCombinePanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SettingDataTask", &UTaskActivateCombinePanel::execSettingDataTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTaskActivateCombinePanel_SettingDataTask_Statics
	{
		struct TaskActivateCombinePanel_eventSettingDataTask_Parms
		{
			ACombinePanel* InteractTrigger;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractTrigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskActivateCombinePanel_SettingDataTask_Statics::NewProp_InteractTrigger = { "InteractTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskActivateCombinePanel_eventSettingDataTask_Parms, InteractTrigger), Z_Construct_UClass_ACombinePanel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskActivateCombinePanel_SettingDataTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskActivateCombinePanel_SettingDataTask_Statics::NewProp_InteractTrigger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskActivateCombinePanel_SettingDataTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActivateCombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskActivateCombinePanel_SettingDataTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskActivateCombinePanel, nullptr, "SettingDataTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTaskActivateCombinePanel_SettingDataTask_Statics::TaskActivateCombinePanel_eventSettingDataTask_Parms), Z_Construct_UFunction_UTaskActivateCombinePanel_SettingDataTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskActivateCombinePanel_SettingDataTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskActivateCombinePanel_SettingDataTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskActivateCombinePanel_SettingDataTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskActivateCombinePanel_SettingDataTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskActivateCombinePanel_SettingDataTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskActivateCombinePanel);
	UClass* Z_Construct_UClass_UTaskActivateCombinePanel_NoRegister()
	{
		return UTaskActivateCombinePanel::StaticClass();
	}
	struct Z_Construct_UClass_UTaskActivateCombinePanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CombinePanels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombinePanels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CombinePanels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskActivateCombinePanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTask,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskActivateCombinePanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskActivateCombinePanel_SettingDataTask, "SettingDataTask" }, // 2237104744
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskActivateCombinePanel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/TaskActivateCombinePanel.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActivateCombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskActivateCombinePanel_Statics::NewProp_CombinePanels_Inner = { "CombinePanels", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACombinePanel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskActivateCombinePanel_Statics::NewProp_CombinePanels_MetaData[] = {
		{ "Category", "TaskActivateCombinePanel" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActivateCombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTaskActivateCombinePanel_Statics::NewProp_CombinePanels = { "CombinePanels", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskActivateCombinePanel, CombinePanels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTaskActivateCombinePanel_Statics::NewProp_CombinePanels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskActivateCombinePanel_Statics::NewProp_CombinePanels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskActivateCombinePanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskActivateCombinePanel_Statics::NewProp_CombinePanels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskActivateCombinePanel_Statics::NewProp_CombinePanels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskActivateCombinePanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskActivateCombinePanel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskActivateCombinePanel_Statics::ClassParams = {
		&UTaskActivateCombinePanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTaskActivateCombinePanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTaskActivateCombinePanel_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTaskActivateCombinePanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskActivateCombinePanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaskActivateCombinePanel()
	{
		if (!Z_Registration_Info_UClass_UTaskActivateCombinePanel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskActivateCombinePanel.OuterSingleton, Z_Construct_UClass_UTaskActivateCombinePanel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTaskActivateCombinePanel.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UTaskActivateCombinePanel>()
	{
		return UTaskActivateCombinePanel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskActivateCombinePanel);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivateCombinePanel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivateCombinePanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTaskActivateCombinePanel, UTaskActivateCombinePanel::StaticClass, TEXT("UTaskActivateCombinePanel"), &Z_Registration_Info_UClass_UTaskActivateCombinePanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskActivateCombinePanel), 927421103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivateCombinePanel_h_439515312(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivateCombinePanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskActivateCombinePanel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
