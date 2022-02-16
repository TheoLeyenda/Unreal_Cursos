// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/TaskActiveInteractComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskActiveInteractComponent() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTaskActiveInteractComponent_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTaskActiveInteractComponent();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseTask();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInteractComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTaskActiveInteractComponent::execSettingDataTask)
	{
		P_GET_OBJECT(UInteractComponent,Z_Param_InteractComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SettingDataTask(Z_Param_InteractComponent);
		P_NATIVE_END;
	}
	void UTaskActiveInteractComponent::StaticRegisterNativesUTaskActiveInteractComponent()
	{
		UClass* Class = UTaskActiveInteractComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SettingDataTask", &UTaskActiveInteractComponent::execSettingDataTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask_Statics
	{
		struct TaskActiveInteractComponent_eventSettingDataTask_Parms
		{
			UInteractComponent* InteractComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask_Statics::NewProp_InteractComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask_Statics::NewProp_InteractComponent = { "InteractComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskActiveInteractComponent_eventSettingDataTask_Parms, InteractComponent), Z_Construct_UClass_UInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask_Statics::NewProp_InteractComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask_Statics::NewProp_InteractComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask_Statics::NewProp_InteractComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActiveInteractComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskActiveInteractComponent, nullptr, "SettingDataTask", nullptr, nullptr, sizeof(TaskActiveInteractComponent_eventSettingDataTask_Parms), Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTaskActiveInteractComponent_NoRegister()
	{
		return UTaskActiveInteractComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTaskActiveInteractComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskActiveInteractComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTask,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskActiveInteractComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskActiveInteractComponent_SettingDataTask, "SettingDataTask" }, // 275466064
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskActiveInteractComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/TaskActiveInteractComponent.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActiveInteractComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskActiveInteractComponent_Statics::NewProp_InteractComponents_Inner = { "InteractComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskActiveInteractComponent_Statics::NewProp_InteractComponents_MetaData[] = {
		{ "Category", "TaskActiveInteractComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/TaskActiveInteractComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTaskActiveInteractComponent_Statics::NewProp_InteractComponents = { "InteractComponents", nullptr, (EPropertyFlags)0x0010008000020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskActiveInteractComponent, InteractComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTaskActiveInteractComponent_Statics::NewProp_InteractComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskActiveInteractComponent_Statics::NewProp_InteractComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskActiveInteractComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskActiveInteractComponent_Statics::NewProp_InteractComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskActiveInteractComponent_Statics::NewProp_InteractComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskActiveInteractComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskActiveInteractComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTaskActiveInteractComponent_Statics::ClassParams = {
		&UTaskActiveInteractComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTaskActiveInteractComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTaskActiveInteractComponent_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTaskActiveInteractComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskActiveInteractComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaskActiveInteractComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTaskActiveInteractComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTaskActiveInteractComponent, 1139862998);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UTaskActiveInteractComponent>()
	{
		return UTaskActiveInteractComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTaskActiveInteractComponent(Z_Construct_UClass_UTaskActiveInteractComponent, &UTaskActiveInteractComponent::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UTaskActiveInteractComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskActiveInteractComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
