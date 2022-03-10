// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/ObjetiveType/Step.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStep() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UStep_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UStep();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FDataPlayer();
// End Cross Module References
	DEFINE_FUNCTION(UStep::execCheckStepComplete)
	{
		P_GET_STRUCT(FDataPlayer,Z_Param_CompareData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckStepComplete(Z_Param_CompareData);
		P_NATIVE_END;
	}
	void UStep::StaticRegisterNativesUStep()
	{
		UClass* Class = UStep::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckStepComplete", &UStep::execCheckStepComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStep_CheckStepComplete_Statics
	{
		struct Step_eventCheckStepComplete_Parms
		{
			FDataPlayer CompareData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompareData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStep_CheckStepComplete_Statics::NewProp_CompareData = { "CompareData", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Step_eventCheckStepComplete_Parms, CompareData), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStep_CheckStepComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Step_eventCheckStepComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStep_CheckStepComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Step_eventCheckStepComplete_Parms), &Z_Construct_UFunction_UStep_CheckStepComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStep_CheckStepComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStep_CheckStepComplete_Statics::NewProp_CompareData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStep_CheckStepComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStep_CheckStepComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/Step.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStep_CheckStepComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStep, nullptr, "CheckStepComplete", nullptr, nullptr, sizeof(Step_eventCheckStepComplete_Parms), Z_Construct_UFunction_UStep_CheckStepComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStep_CheckStepComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStep_CheckStepComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStep_CheckStepComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStep_CheckStepComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStep_CheckStepComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStep_NoRegister()
	{
		return UStep::StaticClass();
	}
	struct Z_Construct_UClass_UStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStep_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStep_CheckStepComplete, "CheckStepComplete" }, // 2833611533
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStep_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/ObjetiveType/Step.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/Step.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStep_Statics::ClassParams = {
		&UStep::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStep, 2676743753);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UStep>()
	{
		return UStep::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStep(Z_Construct_UClass_UStep, &UStep::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UStep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStep);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
