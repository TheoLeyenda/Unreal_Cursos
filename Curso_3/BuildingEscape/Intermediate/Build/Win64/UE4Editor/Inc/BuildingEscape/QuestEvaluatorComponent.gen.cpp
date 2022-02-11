// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/QuestEvaluatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEvaluatorComponent() {}
// Cross Module References
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UQuestEvaluatorComponent();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UQuestEvaluatorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FDataPlayer();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingEscapeGameMode_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingScapeCharacter_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseTask_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature_Statics
	{
		struct QuestEvaluatorComponent_eventOnSettingDataPlayer_Parms
		{
			UQuestEvaluatorComponent* QuestEvaluatorComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestEvaluatorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestEvaluatorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature_Statics::NewProp_QuestEvaluatorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature_Statics::NewProp_QuestEvaluatorComponent = { "QuestEvaluatorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestEvaluatorComponent_eventOnSettingDataPlayer_Parms, QuestEvaluatorComponent), Z_Construct_UClass_UQuestEvaluatorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature_Statics::NewProp_QuestEvaluatorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature_Statics::NewProp_QuestEvaluatorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature_Statics::NewProp_QuestEvaluatorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestEvaluatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEvaluatorComponent, nullptr, "OnSettingDataPlayer__DelegateSignature", nullptr, nullptr, sizeof(QuestEvaluatorComponent_eventOnSettingDataPlayer_Parms), Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UQuestEvaluatorComponent::execSettingDataPlayer)
	{
		P_GET_STRUCT(FDataPlayer,Z_Param_NewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SettingDataPlayer(Z_Param_NewData);
		P_NATIVE_END;
	}
	void UQuestEvaluatorComponent::StaticRegisterNativesUQuestEvaluatorComponent()
	{
		UClass* Class = UQuestEvaluatorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SettingDataPlayer", &UQuestEvaluatorComponent::execSettingDataPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestEvaluatorComponent_SettingDataPlayer_Statics
	{
		struct QuestEvaluatorComponent_eventSettingDataPlayer_Parms
		{
			FDataPlayer NewData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEvaluatorComponent_SettingDataPlayer_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestEvaluatorComponent_eventSettingDataPlayer_Parms, NewData), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEvaluatorComponent_SettingDataPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEvaluatorComponent_SettingDataPlayer_Statics::NewProp_NewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEvaluatorComponent_SettingDataPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestEvaluatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEvaluatorComponent_SettingDataPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEvaluatorComponent, nullptr, "SettingDataPlayer", nullptr, nullptr, sizeof(QuestEvaluatorComponent_eventSettingDataPlayer_Parms), Z_Construct_UFunction_UQuestEvaluatorComponent_SettingDataPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEvaluatorComponent_SettingDataPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEvaluatorComponent_SettingDataPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEvaluatorComponent_SettingDataPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEvaluatorComponent_SettingDataPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestEvaluatorComponent_SettingDataPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestEvaluatorComponent_NoRegister()
	{
		return UQuestEvaluatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEvaluatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingEscapeGameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildingEscapeGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingScapeCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildingScapeCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tasks_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tasks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEvaluatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestEvaluatorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature, "OnSettingDataPlayer__DelegateSignature" }, // 468904355
		{ &Z_Construct_UFunction_UQuestEvaluatorComponent_SettingDataPlayer, "SettingDataPlayer" }, // 168309046
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEvaluatorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "QuestSystem/QuestEvaluatorComponent.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestEvaluatorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_BuildingEscapeGameMode_MetaData[] = {
		{ "Category", "QuestEvaluatorComponent" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestEvaluatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_BuildingEscapeGameMode = { "BuildingEscapeGameMode", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEvaluatorComponent, BuildingEscapeGameMode), Z_Construct_UClass_ABuildingEscapeGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_BuildingEscapeGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_BuildingEscapeGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_BuildingScapeCharacter_MetaData[] = {
		{ "Category", "QuestEvaluatorComponent" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestEvaluatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_BuildingScapeCharacter = { "BuildingScapeCharacter", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEvaluatorComponent, BuildingScapeCharacter), Z_Construct_UClass_ABuildingScapeCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_BuildingScapeCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_BuildingScapeCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_DataPlayer_MetaData[] = {
		{ "Category", "QuestEvaluatorComponent" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestEvaluatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_DataPlayer = { "DataPlayer", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEvaluatorComponent, DataPlayer), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_DataPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_DataPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_Tasks_Inner_MetaData[] = {
		{ "Category", "QuestEvaluatorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestEvaluatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBaseTask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_Tasks_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_Tasks_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_Tasks_MetaData[] = {
		{ "Category", "QuestEvaluatorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestEvaluatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEvaluatorComponent, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_Tasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_Tasks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestEvaluatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_BuildingEscapeGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_BuildingScapeCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_DataPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_Tasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEvaluatorComponent_Statics::NewProp_Tasks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEvaluatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEvaluatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestEvaluatorComponent_Statics::ClassParams = {
		&UQuestEvaluatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestEvaluatorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEvaluatorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestEvaluatorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEvaluatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEvaluatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestEvaluatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestEvaluatorComponent, 3819217046);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UQuestEvaluatorComponent>()
	{
		return UQuestEvaluatorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestEvaluatorComponent(Z_Construct_UClass_UQuestEvaluatorComponent, &UQuestEvaluatorComponent::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UQuestEvaluatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEvaluatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
