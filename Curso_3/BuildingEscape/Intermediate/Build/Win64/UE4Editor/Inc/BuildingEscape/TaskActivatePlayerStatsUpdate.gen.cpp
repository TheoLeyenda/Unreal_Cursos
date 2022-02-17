// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/TaskActivatePlayerStatsUpdate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskActivatePlayerStatsUpdate_eventSettingDataTask_Parms, Value), Z_Construct_UClass_ABuildingScapeCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActivatePlayerStatsUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskActivatePlayerStatsUpdate, nullptr, "SettingDataTask", nullptr, nullptr, sizeof(TaskActivatePlayerStatsUpdate_eventSettingDataTask_Parms), Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_NoRegister()
	{
		return UTaskActivatePlayerStatsUpdate::StaticClass();
	}
	struct Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTask,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskActivatePlayerStatsUpdate_SettingDataTask, "SettingDataTask" }, // 2103269594
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/TaskActivatePlayerStatsUpdate.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActivatePlayerStatsUpdate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskActivatePlayerStatsUpdate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTaskActivatePlayerStatsUpdate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTaskActivatePlayerStatsUpdate, 1893852663);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UTaskActivatePlayerStatsUpdate>()
	{
		return UTaskActivatePlayerStatsUpdate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTaskActivatePlayerStatsUpdate(Z_Construct_UClass_UTaskActivatePlayerStatsUpdate, &UTaskActivatePlayerStatsUpdate::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UTaskActivatePlayerStatsUpdate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskActivatePlayerStatsUpdate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
