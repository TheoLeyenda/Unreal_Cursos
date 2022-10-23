// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/BuildingEscapeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingEscapeGameMode() {}
// Cross Module References
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnGameOverActivate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingEscapeGameMode_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingEscapeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BuildingEscape_OnGameOverActivate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape_OnGameOverActivate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingEscapeGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BuildingEscape_OnGameOverActivate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape, nullptr, "OnGameOverActivate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BuildingEscape_OnGameOverActivate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_OnGameOverActivate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnGameOverActivate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BuildingEscape_OnGameOverActivate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ABuildingEscapeGameMode::execLoadMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMap(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingEscapeGameMode::execRestart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Restart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingEscapeGameMode::execCheckPlayerDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckPlayerDead();
		P_NATIVE_END;
	}
	void ABuildingEscapeGameMode::StaticRegisterNativesABuildingEscapeGameMode()
	{
		UClass* Class = ABuildingEscapeGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckPlayerDead", &ABuildingEscapeGameMode::execCheckPlayerDead },
			{ "LoadMap", &ABuildingEscapeGameMode::execLoadMap },
			{ "Restart", &ABuildingEscapeGameMode::execRestart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuildingEscapeGameMode_CheckPlayerDead_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingEscapeGameMode_CheckPlayerDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingEscapeGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingEscapeGameMode_CheckPlayerDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingEscapeGameMode, nullptr, "CheckPlayerDead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingEscapeGameMode_CheckPlayerDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingEscapeGameMode_CheckPlayerDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingEscapeGameMode_CheckPlayerDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingEscapeGameMode_CheckPlayerDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingEscapeGameMode_LoadMap_Statics
	{
		struct BuildingEscapeGameMode_eventLoadMap_Parms
		{
			FString Name;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABuildingEscapeGameMode_LoadMap_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingEscapeGameMode_eventLoadMap_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingEscapeGameMode_LoadMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingEscapeGameMode_LoadMap_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingEscapeGameMode_LoadMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingEscapeGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingEscapeGameMode_LoadMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingEscapeGameMode, nullptr, "LoadMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingEscapeGameMode_LoadMap_Statics::BuildingEscapeGameMode_eventLoadMap_Parms), Z_Construct_UFunction_ABuildingEscapeGameMode_LoadMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingEscapeGameMode_LoadMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingEscapeGameMode_LoadMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingEscapeGameMode_LoadMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingEscapeGameMode_LoadMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingEscapeGameMode_LoadMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingEscapeGameMode_Restart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingEscapeGameMode_Restart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingEscapeGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingEscapeGameMode_Restart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingEscapeGameMode, nullptr, "Restart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingEscapeGameMode_Restart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingEscapeGameMode_Restart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingEscapeGameMode_Restart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingEscapeGameMode_Restart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuildingEscapeGameMode);
	UClass* Z_Construct_UClass_ABuildingEscapeGameMode_NoRegister()
	{
		return ABuildingEscapeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingEscapeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStartName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerStartName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGameOver_MetaData[];
#endif
		static void NewProp_bGameOver_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameOver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameoverActivate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameoverActivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingEscapeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuildingEscapeGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuildingEscapeGameMode_CheckPlayerDead, "CheckPlayerDead" }, // 2082029337
		{ &Z_Construct_UFunction_ABuildingEscapeGameMode_LoadMap, "LoadMap" }, // 2925528290
		{ &Z_Construct_UFunction_ABuildingEscapeGameMode_Restart, "Restart" }, // 2117059648
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingEscapeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BuildingEscapeGameMode.h" },
		{ "ModuleRelativePath", "Public/BuildingEscapeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_PlayerStartName_MetaData[] = {
		{ "Category", "BuildingEscapeGameMode" },
		{ "ModuleRelativePath", "Public/BuildingEscapeGameMode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_PlayerStartName = { "PlayerStartName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingEscapeGameMode, PlayerStartName), METADATA_PARAMS(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_PlayerStartName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_PlayerStartName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_bGameOver_MetaData[] = {
		{ "Category", "BuildingEscapeGameMode" },
		{ "ModuleRelativePath", "Public/BuildingEscapeGameMode.h" },
	};
#endif
	void Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_bGameOver_SetBit(void* Obj)
	{
		((ABuildingEscapeGameMode*)Obj)->bGameOver = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_bGameOver = { "bGameOver", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABuildingEscapeGameMode), &Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_bGameOver_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_bGameOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_bGameOver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_OnGameoverActivate_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingEscapeGameMode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_OnGameoverActivate = { "OnGameoverActivate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingEscapeGameMode, OnGameoverActivate), Z_Construct_UDelegateFunction_BuildingEscape_OnGameOverActivate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_OnGameoverActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_OnGameoverActivate_MetaData)) }; // 4245088193
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildingEscapeGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_PlayerStartName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_bGameOver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingEscapeGameMode_Statics::NewProp_OnGameoverActivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingEscapeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingEscapeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuildingEscapeGameMode_Statics::ClassParams = {
		&ABuildingEscapeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuildingEscapeGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingEscapeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingEscapeGameMode()
	{
		if (!Z_Registration_Info_UClass_ABuildingEscapeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuildingEscapeGameMode.OuterSingleton, Z_Construct_UClass_ABuildingEscapeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuildingEscapeGameMode.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ABuildingEscapeGameMode>()
	{
		return ABuildingEscapeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingEscapeGameMode);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuildingEscapeGameMode, ABuildingEscapeGameMode::StaticClass, TEXT("ABuildingEscapeGameMode"), &Z_Registration_Info_UClass_ABuildingEscapeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuildingEscapeGameMode), 2296269111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_3746017766(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
