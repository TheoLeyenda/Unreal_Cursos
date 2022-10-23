// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/TaskDestroyActor.h"
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
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorDestroyed;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::NewProp_ActorDestroyed = { "ActorDestroyed", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskDestroyActor_eventSettingDataTask_Parms, ActorDestroyed), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskDestroyActor_eventSettingDataTask_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::NewProp_ActorDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/TaskDestroyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskDestroyActor, nullptr, "SettingDataTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::TaskDestroyActor_eventSettingDataTask_Parms), Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskDestroyActor);
	UClass* Z_Construct_UClass_UTaskDestroyActor_NoRegister()
	{
		return UTaskDestroyActor::StaticClass();
	}
	struct Z_Construct_UClass_UTaskDestroyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectDestroyActorComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectDestroyActorComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DetectDestroyActorComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskDestroyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTask,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskDestroyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskDestroyActor_SettingDataTask, "SettingDataTask" }, // 441971506
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskDestroyActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/TaskDestroyActor.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskDestroyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskDestroyActor_Statics::NewProp_DetectDestroyActorComponents_Inner = { "DetectDestroyActorComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDetectDestroyActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskDestroyActor_Statics::NewProp_DetectDestroyActorComponents_MetaData[] = {
		{ "Category", "TaskDestroyActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskDestroyActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTaskDestroyActor_Statics::NewProp_DetectDestroyActorComponents = { "DetectDestroyActorComponents", nullptr, (EPropertyFlags)0x0010008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskDestroyActor, DetectDestroyActorComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTaskDestroyActor_Statics::NewProp_DetectDestroyActorComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskDestroyActor_Statics::NewProp_DetectDestroyActorComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskDestroyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskDestroyActor_Statics::NewProp_DetectDestroyActorComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskDestroyActor_Statics::NewProp_DetectDestroyActorComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskDestroyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskDestroyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskDestroyActor_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UTaskDestroyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskDestroyActor.OuterSingleton, Z_Construct_UClass_UTaskDestroyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTaskDestroyActor.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UTaskDestroyActor>()
	{
		return UTaskDestroyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskDestroyActor);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskDestroyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskDestroyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTaskDestroyActor, UTaskDestroyActor::StaticClass, TEXT("UTaskDestroyActor"), &Z_Registration_Info_UClass_UTaskDestroyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskDestroyActor), 534381209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskDestroyActor_h_2208925459(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskDestroyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_TaskDestroyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
