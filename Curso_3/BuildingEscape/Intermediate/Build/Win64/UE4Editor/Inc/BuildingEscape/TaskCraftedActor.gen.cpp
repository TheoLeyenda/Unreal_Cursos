// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/TaskCraftedActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskCraftedActor() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTaskCraftedActor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTaskCraftedActor();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseTask();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACraftingTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTaskCraftedActor::execSettingDataTask)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_OBJECT(ACraftingTable,Z_Param_CraftingTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SettingDataTask(Z_Param_ActorClass,Z_Param_CraftingTable);
		P_NATIVE_END;
	}
	void UTaskCraftedActor::StaticRegisterNativesUTaskCraftedActor()
	{
		UClass* Class = UTaskCraftedActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SettingDataTask", &UTaskCraftedActor::execSettingDataTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask_Statics
	{
		struct TaskCraftedActor_eventSettingDataTask_Parms
		{
			TSubclassOf<AActor>  ActorClass;
			ACraftingTable* CraftingTable;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CraftingTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskCraftedActor_eventSettingDataTask_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask_Statics::NewProp_CraftingTable = { "CraftingTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskCraftedActor_eventSettingDataTask_Parms, CraftingTable), Z_Construct_UClass_ACraftingTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask_Statics::NewProp_CraftingTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/TaskCraftedActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskCraftedActor, nullptr, "SettingDataTask", nullptr, nullptr, sizeof(TaskCraftedActor_eventSettingDataTask_Parms), Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTaskCraftedActor_NoRegister()
	{
		return UTaskCraftedActor::StaticClass();
	}
	struct Z_Construct_UClass_UTaskCraftedActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CraftingTables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CraftingTables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CraftingTables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskCraftedActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTask,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskCraftedActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskCraftedActor_SettingDataTask, "SettingDataTask" }, // 1800997415
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskCraftedActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/TaskCraftedActor.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskCraftedActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskCraftedActor_Statics::NewProp_CraftingTables_Inner = { "CraftingTables", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACraftingTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskCraftedActor_Statics::NewProp_CraftingTables_MetaData[] = {
		{ "Category", "TaskCraftedActor" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskCraftedActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTaskCraftedActor_Statics::NewProp_CraftingTables = { "CraftingTables", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskCraftedActor, CraftingTables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTaskCraftedActor_Statics::NewProp_CraftingTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskCraftedActor_Statics::NewProp_CraftingTables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskCraftedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskCraftedActor_Statics::NewProp_CraftingTables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskCraftedActor_Statics::NewProp_CraftingTables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskCraftedActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskCraftedActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTaskCraftedActor_Statics::ClassParams = {
		&UTaskCraftedActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTaskCraftedActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTaskCraftedActor_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTaskCraftedActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskCraftedActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaskCraftedActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTaskCraftedActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTaskCraftedActor, 2873477575);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UTaskCraftedActor>()
	{
		return UTaskCraftedActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTaskCraftedActor(Z_Construct_UClass_UTaskCraftedActor, &UTaskCraftedActor::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UTaskCraftedActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskCraftedActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
