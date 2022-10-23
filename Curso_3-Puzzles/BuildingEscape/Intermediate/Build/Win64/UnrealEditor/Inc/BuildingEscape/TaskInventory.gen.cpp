// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/TaskInventory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskInventory() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTaskInventory_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTaskInventory();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseTask();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInventory_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTaskInventory::execSettingDataTask)
	{
		P_GET_OBJECT(UInventory,Z_Param_Inventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SettingDataTask(Z_Param_Inventory);
		P_NATIVE_END;
	}
	void UTaskInventory::StaticRegisterNativesUTaskInventory()
	{
		UClass* Class = UTaskInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SettingDataTask", &UTaskInventory::execSettingDataTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics
	{
		struct TaskInventory_eventSettingDataTask_Parms
		{
			UInventory* Inventory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskInventory_eventSettingDataTask_Parms, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics::NewProp_Inventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics::NewProp_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/TaskInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskInventory, nullptr, "SettingDataTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics::TaskInventory_eventSettingDataTask_Parms), Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskInventory_SettingDataTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskInventory_SettingDataTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskInventory);
	UClass* Z_Construct_UClass_UTaskInventory_NoRegister()
	{
		return UTaskInventory::StaticClass();
	}
	struct Z_Construct_UClass_UTaskInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventarys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventarys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventarys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTask,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskInventory_SettingDataTask, "SettingDataTask" }, // 705509301
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskInventory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/TaskInventory.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskInventory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskInventory_Statics::NewProp_Inventarys_Inner = { "Inventarys", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskInventory_Statics::NewProp_Inventarys_MetaData[] = {
		{ "Category", "TaskInventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskInventory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTaskInventory_Statics::NewProp_Inventarys = { "Inventarys", nullptr, (EPropertyFlags)0x0040008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskInventory, Inventarys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTaskInventory_Statics::NewProp_Inventarys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskInventory_Statics::NewProp_Inventarys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskInventory_Statics::NewProp_Inventarys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskInventory_Statics::NewProp_Inventarys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskInventory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskInventory_Statics::ClassParams = {
		&UTaskInventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTaskInventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTaskInventory_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTaskInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaskInventory()
	{
		if (!Z_Registration_Info_UClass_UTaskInventory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskInventory.OuterSingleton, Z_Construct_UClass_UTaskInventory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTaskInventory.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UTaskInventory>()
	{
		return UTaskInventory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskInventory);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskInventory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskInventory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTaskInventory, UTaskInventory::StaticClass, TEXT("UTaskInventory"), &Z_Registration_Info_UClass_UTaskInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskInventory), 4247429565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskInventory_h_1490865032(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskInventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskInventory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
