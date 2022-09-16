// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/BuildingScapeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingScapeCharacter() {}
// Cross Module References
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStats();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingScapeCharacter();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingScapeCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingEscapeGameMode_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UGrabber_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInteractComponent_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerStats;
class UScriptStruct* FPlayerStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStats, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("PlayerStats"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerStats.OuterSingleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FPlayerStats>()
{
	return FPlayerStats::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fatness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Fatness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lifes_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Lifes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStats>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Fatness_MetaData[] = {
		{ "Category", "BuildingScapeCharacter Settings" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Fatness = { "Fatness", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStats, Fatness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Fatness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Fatness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Lifes_MetaData[] = {
		{ "Category", "BuildingScapeCharacter Settings" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Lifes = { "Lifes", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStats, Lifes), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Lifes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Lifes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Fatness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Lifes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"PlayerStats",
		sizeof(FPlayerStats),
		alignof(FPlayerStats),
		Z_Construct_UScriptStruct_FPlayerStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerStats()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerStats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerStats.InnerSingleton, Z_Construct_UScriptStruct_FPlayerStats_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerStats.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape, nullptr, "OnSubstractLife__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature_Statics
	{
		struct BuildingScapeCharacter_eventOnUpdatePlayerStats_Parms
		{
			ABuildingScapeCharacter* BuildingScapeCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingScapeCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature_Statics::NewProp_BuildingScapeCharacter = { "BuildingScapeCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingScapeCharacter_eventOnUpdatePlayerStats_Parms, BuildingScapeCharacter), Z_Construct_UClass_ABuildingScapeCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature_Statics::NewProp_BuildingScapeCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingScapeCharacter, nullptr, "OnUpdatePlayerStats__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature_Statics::BuildingScapeCharacter_eventOnUpdatePlayerStats_Parms), Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ABuildingScapeCharacter::execAddLifes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLifes(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingScapeCharacter::execSubstractLifes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubstractLifes(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingScapeCharacter::execGetPlayerLifes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerLifes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingScapeCharacter::execSetPlayerLifes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerLifes(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingScapeCharacter::execSubstractPlayerFatness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubstractPlayerFatness(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingScapeCharacter::execAddPlayerFatness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPlayerFatness(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingScapeCharacter::execGetPlayerFatness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayerFatness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingScapeCharacter::execSetPlayerFatness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerFatness(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingScapeCharacter::execDisableMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableMovement();
		P_NATIVE_END;
	}
	void ABuildingScapeCharacter::StaticRegisterNativesABuildingScapeCharacter()
	{
		UClass* Class = ABuildingScapeCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLifes", &ABuildingScapeCharacter::execAddLifes },
			{ "AddPlayerFatness", &ABuildingScapeCharacter::execAddPlayerFatness },
			{ "DisableMovement", &ABuildingScapeCharacter::execDisableMovement },
			{ "GetPlayerFatness", &ABuildingScapeCharacter::execGetPlayerFatness },
			{ "GetPlayerLifes", &ABuildingScapeCharacter::execGetPlayerLifes },
			{ "SetPlayerFatness", &ABuildingScapeCharacter::execSetPlayerFatness },
			{ "SetPlayerLifes", &ABuildingScapeCharacter::execSetPlayerLifes },
			{ "SubstractLifes", &ABuildingScapeCharacter::execSubstractLifes },
			{ "SubstractPlayerFatness", &ABuildingScapeCharacter::execSubstractPlayerFatness },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuildingScapeCharacter_AddLifes_Statics
	{
		struct BuildingScapeCharacter_eventAddLifes_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABuildingScapeCharacter_AddLifes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingScapeCharacter_eventAddLifes_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingScapeCharacter_AddLifes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingScapeCharacter_AddLifes_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingScapeCharacter_AddLifes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingScapeCharacter_AddLifes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingScapeCharacter, nullptr, "AddLifes", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingScapeCharacter_AddLifes_Statics::BuildingScapeCharacter_eventAddLifes_Parms), Z_Construct_UFunction_ABuildingScapeCharacter_AddLifes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_AddLifes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingScapeCharacter_AddLifes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_AddLifes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingScapeCharacter_AddLifes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingScapeCharacter_AddLifes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingScapeCharacter_AddPlayerFatness_Statics
	{
		struct BuildingScapeCharacter_eventAddPlayerFatness_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABuildingScapeCharacter_AddPlayerFatness_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingScapeCharacter_eventAddPlayerFatness_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingScapeCharacter_AddPlayerFatness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingScapeCharacter_AddPlayerFatness_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingScapeCharacter_AddPlayerFatness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingScapeCharacter_AddPlayerFatness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingScapeCharacter, nullptr, "AddPlayerFatness", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingScapeCharacter_AddPlayerFatness_Statics::BuildingScapeCharacter_eventAddPlayerFatness_Parms), Z_Construct_UFunction_ABuildingScapeCharacter_AddPlayerFatness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_AddPlayerFatness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingScapeCharacter_AddPlayerFatness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_AddPlayerFatness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingScapeCharacter_AddPlayerFatness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingScapeCharacter_AddPlayerFatness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingScapeCharacter_DisableMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingScapeCharacter_DisableMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingScapeCharacter_DisableMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingScapeCharacter, nullptr, "DisableMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingScapeCharacter_DisableMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_DisableMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingScapeCharacter_DisableMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingScapeCharacter_DisableMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerFatness_Statics
	{
		struct BuildingScapeCharacter_eventGetPlayerFatness_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerFatness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingScapeCharacter_eventGetPlayerFatness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerFatness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerFatness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerFatness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerFatness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingScapeCharacter, nullptr, "GetPlayerFatness", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerFatness_Statics::BuildingScapeCharacter_eventGetPlayerFatness_Parms), Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerFatness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerFatness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerFatness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerFatness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerFatness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerFatness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerLifes_Statics
	{
		struct BuildingScapeCharacter_eventGetPlayerLifes_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerLifes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingScapeCharacter_eventGetPlayerLifes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerLifes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerLifes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerLifes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerLifes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingScapeCharacter, nullptr, "GetPlayerLifes", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerLifes_Statics::BuildingScapeCharacter_eventGetPlayerLifes_Parms), Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerLifes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerLifes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerLifes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerLifes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerLifes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerLifes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerFatness_Statics
	{
		struct BuildingScapeCharacter_eventSetPlayerFatness_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerFatness_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingScapeCharacter_eventSetPlayerFatness_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerFatness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerFatness_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerFatness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerFatness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingScapeCharacter, nullptr, "SetPlayerFatness", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerFatness_Statics::BuildingScapeCharacter_eventSetPlayerFatness_Parms), Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerFatness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerFatness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerFatness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerFatness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerFatness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerFatness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerLifes_Statics
	{
		struct BuildingScapeCharacter_eventSetPlayerLifes_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerLifes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingScapeCharacter_eventSetPlayerLifes_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerLifes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerLifes_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerLifes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerLifes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingScapeCharacter, nullptr, "SetPlayerLifes", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerLifes_Statics::BuildingScapeCharacter_eventSetPlayerLifes_Parms), Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerLifes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerLifes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerLifes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerLifes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerLifes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerLifes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingScapeCharacter_SubstractLifes_Statics
	{
		struct BuildingScapeCharacter_eventSubstractLifes_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABuildingScapeCharacter_SubstractLifes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingScapeCharacter_eventSubstractLifes_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingScapeCharacter_SubstractLifes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingScapeCharacter_SubstractLifes_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingScapeCharacter_SubstractLifes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingScapeCharacter_SubstractLifes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingScapeCharacter, nullptr, "SubstractLifes", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingScapeCharacter_SubstractLifes_Statics::BuildingScapeCharacter_eventSubstractLifes_Parms), Z_Construct_UFunction_ABuildingScapeCharacter_SubstractLifes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_SubstractLifes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingScapeCharacter_SubstractLifes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_SubstractLifes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingScapeCharacter_SubstractLifes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingScapeCharacter_SubstractLifes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingScapeCharacter_SubstractPlayerFatness_Statics
	{
		struct BuildingScapeCharacter_eventSubstractPlayerFatness_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABuildingScapeCharacter_SubstractPlayerFatness_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingScapeCharacter_eventSubstractPlayerFatness_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingScapeCharacter_SubstractPlayerFatness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingScapeCharacter_SubstractPlayerFatness_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingScapeCharacter_SubstractPlayerFatness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingScapeCharacter_SubstractPlayerFatness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingScapeCharacter, nullptr, "SubstractPlayerFatness", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingScapeCharacter_SubstractPlayerFatness_Statics::BuildingScapeCharacter_eventSubstractPlayerFatness_Parms), Z_Construct_UFunction_ABuildingScapeCharacter_SubstractPlayerFatness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_SubstractPlayerFatness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingScapeCharacter_SubstractPlayerFatness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_SubstractPlayerFatness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingScapeCharacter_SubstractPlayerFatness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingScapeCharacter_SubstractPlayerFatness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuildingScapeCharacter);
	UClass* Z_Construct_UClass_ABuildingScapeCharacter_NoRegister()
	{
		return ABuildingScapeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingScapeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdatePlayerStats_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdatePlayerStats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMovement_MetaData[];
#endif
		static void NewProp_bEnableMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingEscapeGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingEscapeGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSubstractLife_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSubstractLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grabber_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Grabber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInventoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInventoryComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingScapeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuildingScapeCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuildingScapeCharacter_AddLifes, "AddLifes" }, // 2507669094
		{ &Z_Construct_UFunction_ABuildingScapeCharacter_AddPlayerFatness, "AddPlayerFatness" }, // 1141137901
		{ &Z_Construct_UFunction_ABuildingScapeCharacter_DisableMovement, "DisableMovement" }, // 3866288554
		{ &Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerFatness, "GetPlayerFatness" }, // 1671003369
		{ &Z_Construct_UFunction_ABuildingScapeCharacter_GetPlayerLifes, "GetPlayerLifes" }, // 443617289
		{ &Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature, "OnUpdatePlayerStats__DelegateSignature" }, // 833613647
		{ &Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerFatness, "SetPlayerFatness" }, // 612071042
		{ &Z_Construct_UFunction_ABuildingScapeCharacter_SetPlayerLifes, "SetPlayerLifes" }, // 3786888643
		{ &Z_Construct_UFunction_ABuildingScapeCharacter_SubstractLifes, "SubstractLifes" }, // 3082007506
		{ &Z_Construct_UFunction_ABuildingScapeCharacter_SubstractPlayerFatness, "SubstractPlayerFatness" }, // 2899169712
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BuildingScapeCharacter.h" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnUpdatePlayerStats_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnUpdatePlayerStats = { "OnUpdatePlayerStats", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, OnUpdatePlayerStats), Z_Construct_UDelegateFunction_ABuildingScapeCharacter_OnUpdatePlayerStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnUpdatePlayerStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnUpdatePlayerStats_MetaData)) }; // 833613647
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_MetaData[] = {
		{ "Category", "BuildingScapeCharacter Settings" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_SetBit(void* Obj)
	{
		((ABuildingScapeCharacter*)Obj)->bEnableMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement = { "bEnableMovement", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABuildingScapeCharacter), &Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BuildingEscapeGameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BuildingEscapeGameMode = { "BuildingEscapeGameMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, BuildingEscapeGameMode), Z_Construct_UClass_ABuildingEscapeGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BuildingEscapeGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BuildingEscapeGameMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnSubstractLife_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnSubstractLife = { "OnSubstractLife", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, OnSubstractLife), Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnSubstractLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnSubstractLife_MetaData)) }; // 1341866482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber_MetaData[] = {
		{ "Category", "BuildingScapeCharacter Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber = { "Grabber", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, Grabber), Z_Construct_UClass_UGrabber_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_PlayerInventoryComponent_MetaData[] = {
		{ "Category", "BuildingScapeCharacter Settings" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= \"BuildingScapeCharacter Settings\")\n//class UInventoryComponent* InventoryComponent;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= \"BuildingScapeCharacter Settings\")\nclass UInventoryComponent* InventoryComponent;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_PlayerInventoryComponent = { "PlayerInventoryComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, PlayerInventoryComponent), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_PlayerInventoryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_PlayerInventoryComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InteractComponent_MetaData[] = {
		{ "Category", "BuildingScapeCharacter Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InteractComponent = { "InteractComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, InteractComponent), Z_Construct_UClass_UInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InteractComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InteractComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildingScapeCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnUpdatePlayerStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseLookUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BuildingEscapeGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnSubstractLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_PlayerInventoryComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InteractComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingScapeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingScapeCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::ClassParams = {
		&ABuildingScapeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuildingScapeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingScapeCharacter()
	{
		if (!Z_Registration_Info_UClass_ABuildingScapeCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuildingScapeCharacter.OuterSingleton, Z_Construct_UClass_ABuildingScapeCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuildingScapeCharacter.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ABuildingScapeCharacter>()
	{
		return ABuildingScapeCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingScapeCharacter);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_Statics::ScriptStructInfo[] = {
		{ FPlayerStats::StaticStruct, Z_Construct_UScriptStruct_FPlayerStats_Statics::NewStructOps, TEXT("PlayerStats"), &Z_Registration_Info_UScriptStruct_PlayerStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStats), 524547010U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuildingScapeCharacter, ABuildingScapeCharacter::StaticClass, TEXT("ABuildingScapeCharacter"), &Z_Registration_Info_UClass_ABuildingScapeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuildingScapeCharacter), 803740837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_1562738556(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
