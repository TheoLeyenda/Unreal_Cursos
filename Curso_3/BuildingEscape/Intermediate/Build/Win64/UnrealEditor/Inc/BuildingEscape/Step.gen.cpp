// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/ObjetiveType/Step.h"
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompareData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStep_CheckStepComplete_Statics::NewProp_CompareData = { "CompareData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Step_eventCheckStepComplete_Parms, CompareData), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(nullptr, 0) }; // 3108135505
	void Z_Construct_UFunction_UStep_CheckStepComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Step_eventCheckStepComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStep_CheckStepComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Step_eventCheckStepComplete_Parms), &Z_Construct_UFunction_UStep_CheckStepComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStep_CheckStepComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStep_CheckStepComplete_Statics::NewProp_CompareData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStep_CheckStepComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStep_CheckStepComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/Step.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStep_CheckStepComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStep, nullptr, "CheckStepComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStep_CheckStepComplete_Statics::Step_eventCheckStepComplete_Parms), Z_Construct_UFunction_UStep_CheckStepComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStep_CheckStepComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStep_CheckStepComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStep_CheckStepComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStep_CheckStepComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStep_CheckStepComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStep);
	UClass* Z_Construct_UClass_UStep_NoRegister()
	{
		return UStep::StaticClass();
	}
	struct Z_Construct_UClass_UStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStep_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStep_CheckStepComplete, "CheckStepComplete" }, // 133428787
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStep_Statics::Class_MetaDataParams[] = {
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
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStep_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStep.OuterSingleton, Z_Construct_UClass_UStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStep.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UStep>()
	{
		return UStep::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStep);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_Step_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_Step_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStep, UStep::StaticClass, TEXT("UStep"), &Z_Registration_Info_UClass_UStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStep), 242585268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_Step_h_1473480459(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_Step_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_Step_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
