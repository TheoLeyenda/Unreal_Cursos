// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/Objetive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjetive() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UObjetive_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UObjetive();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FDataPlayer();
// End Cross Module References
	DEFINE_FUNCTION(UObjetive::execResetData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjetive::execCheckStepComplete)
	{
		P_GET_STRUCT(FDataPlayer,Z_Param_CompareData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckStepComplete(Z_Param_CompareData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjetive::execCheckObjetiveComplete)
	{
		P_GET_STRUCT(FDataPlayer,Z_Param_CompareData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckObjetiveComplete(Z_Param_CompareData);
		P_NATIVE_END;
	}
	void UObjetive::StaticRegisterNativesUObjetive()
	{
		UClass* Class = UObjetive::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckObjetiveComplete", &UObjetive::execCheckObjetiveComplete },
			{ "CheckStepComplete", &UObjetive::execCheckStepComplete },
			{ "ResetData", &UObjetive::execResetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics
	{
		struct Objetive_eventCheckObjetiveComplete_Parms
		{
			FDataPlayer CompareData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompareData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::NewProp_CompareData = { "CompareData", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objetive_eventCheckObjetiveComplete_Parms, CompareData), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::NewProp_CompareData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjetive, nullptr, "CheckObjetiveComplete", nullptr, nullptr, sizeof(Objetive_eventCheckObjetiveComplete_Parms), Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjetive_CheckObjetiveComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics
	{
		struct Objetive_eventCheckStepComplete_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics::NewProp_CompareData = { "CompareData", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objetive_eventCheckStepComplete_Parms, CompareData), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Objetive_eventCheckStepComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objetive_eventCheckStepComplete_Parms), &Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics::NewProp_CompareData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjetive, nullptr, "CheckStepComplete", nullptr, nullptr, sizeof(Objetive_eventCheckStepComplete_Parms), Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjetive_CheckStepComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjetive_CheckStepComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjetive_ResetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjetive_ResetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjetive_ResetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjetive, nullptr, "ResetData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjetive_ResetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjetive_ResetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjetive_ResetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjetive_ResetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObjetive_NoRegister()
	{
		return UObjetive::StaticClass();
	}
	struct Z_Construct_UClass_UObjetive_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoneAccion_MetaData[];
#endif
		static void NewProp_bDoneAccion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoneAccion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseIdentificationObject_MetaData[];
#endif
		static void NewProp_bUseIdentificationObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseIdentificationObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StepsToCompleteObjective_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepsToCompleteObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StepsToCompleteObjective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjetive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjetive_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjetive_CheckObjetiveComplete, "CheckObjetiveComplete" }, // 394743190
		{ &Z_Construct_UFunction_UObjetive_CheckStepComplete, "CheckStepComplete" }, // 4077726317
		{ &Z_Construct_UFunction_UObjetive_ResetData, "ResetData" }, // 3713290683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/Objetive.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Objetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UObjetive_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjetive, Description), METADATA_PARAMS(Z_Construct_UClass_UObjetive_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_MetaData[] = {
		{ "Category", "Objetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	void Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_SetBit(void* Obj)
	{
		((UObjetive*)Obj)->bDoneAccion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion = { "bDoneAccion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjetive), &Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_MetaData[] = {
		{ "Category", "Objetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	void Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_SetBit(void* Obj)
	{
		((UObjetive*)Obj)->bUseIdentificationObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject = { "bUseIdentificationObject", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjetive), &Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjetive_Statics::NewProp_StepsToCompleteObjective_Inner = { "StepsToCompleteObjective", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObjetive_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::NewProp_StepsToCompleteObjective_MetaData[] = {
		{ "Category", "Objetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjetive_Statics::NewProp_StepsToCompleteObjective = { "StepsToCompleteObjective", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjetive, StepsToCompleteObjective), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjetive_Statics::NewProp_StepsToCompleteObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::NewProp_StepsToCompleteObjective_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjetive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjetive_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjetive_Statics::NewProp_StepsToCompleteObjective_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjetive_Statics::NewProp_StepsToCompleteObjective,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjetive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjetive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjetive_Statics::ClassParams = {
		&UObjetive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UObjetive_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjetive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjetive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjetive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjetive, 4107036197);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UObjetive>()
	{
		return UObjetive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjetive(Z_Construct_UClass_UObjetive, &UObjetive::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UObjetive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjetive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
