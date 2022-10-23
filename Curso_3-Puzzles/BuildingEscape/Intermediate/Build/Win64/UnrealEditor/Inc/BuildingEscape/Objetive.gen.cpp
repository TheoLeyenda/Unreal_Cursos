// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/Objetive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjetive() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UObjetive_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UObjetive();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FDataPlayer();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UStep_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UObjetive::execResetData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetData();
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompareData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::NewProp_CompareData = { "CompareData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objetive_eventCheckObjetiveComplete_Parms, CompareData), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(nullptr, 0) }; // 3108135505
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::NewProp_CompareData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjetive, nullptr, "CheckObjetiveComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::Objetive_eventCheckObjetiveComplete_Parms), Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjetive_CheckObjetiveComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjetive_CheckObjetiveComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjetive_ResetData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjetive_ResetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjetive_ResetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjetive, nullptr, "ResetData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjetive_ResetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjetive_ResetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjetive_ResetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjetive_ResetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjetive);
	UClass* Z_Construct_UClass_UObjetive_NoRegister()
	{
		return UObjetive::StaticClass();
	}
	struct Z_Construct_UClass_UObjetive_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoneAccion_MetaData[];
#endif
		static void NewProp_bDoneAccion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoneAccion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseIdentificationObject_MetaData[];
#endif
		static void NewProp_bUseIdentificationObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIdentificationObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StepsToCompleteObjective_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepsToCompleteObjective_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StepsToCompleteObjective;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjetive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjetive_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjetive_CheckObjetiveComplete, "CheckObjetiveComplete" }, // 318541890
		{ &Z_Construct_UFunction_UObjetive_ResetData, "ResetData" }, // 1636004918
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/Objetive.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Objetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UObjetive_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjetive, Description), METADATA_PARAMS(Z_Construct_UClass_UObjetive_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_MetaData[] = {
		{ "Category", "Objetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	void Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_SetBit(void* Obj)
	{
		((UObjetive*)Obj)->bDoneAccion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion = { "bDoneAccion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjetive), &Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_MetaData[] = {
		{ "Category", "Objetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	void Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_SetBit(void* Obj)
	{
		((UObjetive*)Obj)->bUseIdentificationObject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject = { "bUseIdentificationObject", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjetive), &Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjetive_Statics::NewProp_StepsToCompleteObjective_Inner = { "StepsToCompleteObjective", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStep_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::NewProp_StepsToCompleteObjective_MetaData[] = {
		{ "Category", "Objetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjetive_Statics::NewProp_StepsToCompleteObjective = { "StepsToCompleteObjective", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjetive, StepsToCompleteObjective), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjetive_Statics::NewProp_StepsToCompleteObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::NewProp_StepsToCompleteObjective_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjetive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjetive_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjetive_Statics::NewProp_StepsToCompleteObjective_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjetive_Statics::NewProp_StepsToCompleteObjective,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjetive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjetive>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjetive_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UObjetive.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjetive.OuterSingleton, Z_Construct_UClass_UObjetive_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjetive.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UObjetive>()
	{
		return UObjetive::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjetive);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Objetive_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Objetive_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjetive, UObjetive::StaticClass, TEXT("UObjetive"), &Z_Registration_Info_UClass_UObjetive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjetive), 4051046849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Objetive_h_1291720389(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Objetive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Objetive_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
