// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/SaveSystem/SaveLoadData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveLoadData() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USaveLoadData_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USaveLoadData();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USaveLoadData::execLoad)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Load(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveLoadData::execSave)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Save(Z_Param_Actor);
		P_NATIVE_END;
	}
	void USaveLoadData::StaticRegisterNativesUSaveLoadData()
	{
		UClass* Class = USaveLoadData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Load", &USaveLoadData::execLoad },
			{ "Save", &USaveLoadData::execSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveLoadData_Load_Statics
	{
		struct SaveLoadData_eventLoad_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveLoadData_Load_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveLoadData_eventLoad_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveLoadData_Load_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveLoadData_Load_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveLoadData_Load_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveLoadData_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveLoadData, nullptr, "Load", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveLoadData_Load_Statics::SaveLoadData_eventLoad_Parms), Z_Construct_UFunction_USaveLoadData_Load_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveLoadData_Load_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveLoadData_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveLoadData_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveLoadData_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveLoadData_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveLoadData_Save_Statics
	{
		struct SaveLoadData_eventSave_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveLoadData_Save_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveLoadData_eventSave_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveLoadData_Save_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveLoadData_Save_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveLoadData_Save_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveLoadData_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveLoadData, nullptr, "Save", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveLoadData_Save_Statics::SaveLoadData_eventSave_Parms), Z_Construct_UFunction_USaveLoadData_Save_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveLoadData_Save_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveLoadData_Save_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveLoadData_Save_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveLoadData_Save()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveLoadData_Save_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveLoadData);
	UClass* Z_Construct_UClass_USaveLoadData_NoRegister()
	{
		return USaveLoadData::StaticClass();
	}
	struct Z_Construct_UClass_USaveLoadData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveLoadData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveLoadData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveLoadData_Load, "Load" }, // 3715845605
		{ &Z_Construct_UFunction_USaveLoadData_Save, "Save" }, // 3271881001
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveLoadData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveSystem/SaveLoadData.h" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveLoadData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveLoadData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveLoadData_Statics::ClassParams = {
		&USaveLoadData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveLoadData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveLoadData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveLoadData()
	{
		if (!Z_Registration_Info_UClass_USaveLoadData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveLoadData.OuterSingleton, Z_Construct_UClass_USaveLoadData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveLoadData.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<USaveLoadData>()
	{
		return USaveLoadData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveLoadData);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveLoadData, USaveLoadData::StaticClass, TEXT("USaveLoadData"), &Z_Registration_Info_UClass_USaveLoadData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveLoadData), 3827422405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_3852500190(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
