// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/TaskDestroyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskDestroyActor() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTaskDestroyActor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTaskDestroyActor();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseTask();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UDetectDestroyActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTaskDestroyActor::execSettingDataTask)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorDestroyed);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SettingDataTask(Z_Param_ActorDestroyed,Z_Param_ID);
		P_NATIVE_END;
	}
	void UTaskDestroyActor::StaticRegisterNativesUTaskDestroyActor()
	{
		UClass* Class = UTaskDestroyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SettingDataTask", &UTaskDestroyActor::execSettingDataTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics
	{
		struct TaskDestroyActor_eventSettingDataTask_Parms
		{
			TSubclassOf<AActor>  ActorDestroyed;
			int32 ID;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorDestroyed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::NewProp_ActorDestroyed = { "ActorDestroyed", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskDestroyActor_eventSettingDataTask_Parms, ActorDestroyed), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskDestroyActor_eventSettingDataTask_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::NewProp_ActorDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/TaskDestroyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskDestroyActor, nullptr, "SettingDataTask", nullptr, nullptr, sizeof(TaskDestroyActor_eventSettingDataTask_Parms), Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTaskDestroyActor_NoRegister()
	{
		return UTaskDestroyActor::StaticClass();
	}
	struct Z_Construct_UClass_UTaskDestroyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectDestroyActorComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectDestroyActorComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetectDestroyActorComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskDestroyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTask,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskDestroyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask, "SettingDataTask" }, // 1412853824
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskDestroyActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/TaskDestroyActor.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskDestroyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskDestroyActor_Statics::NewProp_DetectDestroyActorComponents_Inner = { "DetectDestroyActorComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDetectDestroyActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskDestroyActor_Statics::NewProp_DetectDestroyActorComponents_MetaData[] = {
		{ "Category", "TaskDestroyActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskDestroyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTaskDestroyActor_Statics::NewProp_DetectDestroyActorComponents = { "DetectDestroyActorComponents", nullptr, (EPropertyFlags)0x0010008000020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskDestroyActor, DetectDestroyActorComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTaskDestroyActor_Statics::NewProp_DetectDestroyActorComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskDestroyActor_Statics::NewProp_DetectDestroyActorComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskDestroyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskDestroyActor_Statics::NewProp_DetectDestroyActorComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskDestroyActor_Statics::NewProp_DetectDestroyActorComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskDestroyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskDestroyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTaskDestroyActor_Statics::ClassParams = {
		&UTaskDestroyActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTaskDestroyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTaskDestroyActor_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTaskDestroyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskDestroyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaskDestroyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTaskDestroyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTaskDestroyActor, 687279229);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UTaskDestroyActor>()
	{
		return UTaskDestroyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTaskDestroyActor(Z_Construct_UClass_UTaskDestroyActor, &UTaskDestroyActor::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UTaskDestroyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskDestroyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
