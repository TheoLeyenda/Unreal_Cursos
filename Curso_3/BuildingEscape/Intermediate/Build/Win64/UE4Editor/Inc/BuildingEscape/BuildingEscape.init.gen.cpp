// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingEscape_init() {}
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnGameOverActivate__DelegateSignature();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateQuest__DelegateSignature();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_AQuest_OnFinishQuest__DelegateSignature();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnBeginOverlapInteractTrigger__DelegateSignature();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnEndOverlapInteractTrigger__DelegateSignature();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnPlayerInventoryUpdated__DelegateSignature();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BuildingEscape_OnGameOverActivate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UQuestEvaluatorComponent_OnSettingDataPlayer__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateQuest__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AQuest_OnFinishQuest__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BuildingEscape_OnFinishAllQuest__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BuildingEscape_OnBeginOverlapInteractTrigger__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BuildingEscape_OnEndOverlapInteractTrigger__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BuildingEscape_OnPlayerInventoryUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BuildingEscape_OnUpdateTask__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/BuildingEscape",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC52D870A,
				0x5CCCE23C,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
