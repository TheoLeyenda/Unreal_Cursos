// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/ObjectSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectSpawner() {}
// Cross Module References
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectSpawn();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectSpawner_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectSpawn;
class UScriptStruct* FObjectSpawn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectSpawn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectSpawn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectSpawn, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ObjectSpawn"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectSpawn.OuterSingleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FObjectSpawn>()
{
	return FObjectSpawn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectSpawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountObjectsSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CountObjectsSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectSpawn_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectSpawn>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_ObjectBlueprint_MetaData[] = {
		{ "Category", "ObjectSpawn" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_ObjectBlueprint = { "ObjectBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectSpawn, ObjectBlueprint), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_ObjectBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_ObjectBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_CountObjectsSpawn_MetaData[] = {
		{ "Category", "ObjectSpawn" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_CountObjectsSpawn = { "CountObjectsSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectSpawn, CountObjectsSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_CountObjectsSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_CountObjectsSpawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_ObjectBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_CountObjectsSpawn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectSpawn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"ObjectSpawn",
		sizeof(FObjectSpawn),
		alignof(FObjectSpawn),
		Z_Construct_UScriptStruct_FObjectSpawn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectSpawn_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectSpawn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectSpawn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectSpawn()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectSpawn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectSpawn.InnerSingleton, Z_Construct_UScriptStruct_FObjectSpawn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectSpawn.InnerSingleton;
	}
	DEFINE_FUNCTION(AObjectSpawner::execSendTimerSpawnObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendTimerSpawnObject();
		P_NATIVE_END;
	}
	void AObjectSpawner::StaticRegisterNativesAObjectSpawner()
	{
		UClass* Class = AObjectSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendTimerSpawnObject", &AObjectSpawner::execSendTimerSpawnObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectSpawner, nullptr, "SendTimerSpawnObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObjectSpawner);
	UClass* Z_Construct_UClass_AObjectSpawner_NoRegister()
	{
		return AObjectSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AObjectSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeGeneratorX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeGeneratorX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeGeneratorY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeGeneratorY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectsSpawn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectsSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSpawnObject_MetaData[];
#endif
		static void NewProp_bEnableSpawnObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSpawnObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelaySpawnObject_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelaySpawnObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjectSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AObjectSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject, "SendTimerSpawnObject" }, // 3315012386
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectSpawner.h" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorX_MetaData[] = {
		{ "Category", "ObjectSpawner" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorX = { "RangeGeneratorX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectSpawner, RangeGeneratorX), METADATA_PARAMS(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorY_MetaData[] = {
		{ "Category", "ObjectSpawner" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorY = { "RangeGeneratorY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectSpawner, RangeGeneratorY), METADATA_PARAMS(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorY_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AObjectSpawner_Statics::NewProp_ObjectsSpawn_Inner = { "ObjectsSpawn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FObjectSpawn, METADATA_PARAMS(nullptr, 0) }; // 3510773582
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawner_Statics::NewProp_ObjectsSpawn_MetaData[] = {
		{ "Category", "ObjectSpawner" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObjectSpawner_Statics::NewProp_ObjectsSpawn = { "ObjectsSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectSpawner, ObjectsSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_ObjectsSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_ObjectsSpawn_MetaData)) }; // 3510773582
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawner_Statics::NewProp_bEnableSpawnObject_MetaData[] = {
		{ "Category", "ObjectSpawner" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	void Z_Construct_UClass_AObjectSpawner_Statics::NewProp_bEnableSpawnObject_SetBit(void* Obj)
	{
		((AObjectSpawner*)Obj)->bEnableSpawnObject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObjectSpawner_Statics::NewProp_bEnableSpawnObject = { "bEnableSpawnObject", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObjectSpawner), &Z_Construct_UClass_AObjectSpawner_Statics::NewProp_bEnableSpawnObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_bEnableSpawnObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_bEnableSpawnObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawner_Statics::NewProp_DelaySpawnObject_MetaData[] = {
		{ "Category", "ObjectSpawner" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObjectSpawner_Statics::NewProp_DelaySpawnObject = { "DelaySpawnObject", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectSpawner, DelaySpawnObject), METADATA_PARAMS(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_DelaySpawnObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_DelaySpawnObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjectSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawner_Statics::NewProp_ObjectsSpawn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawner_Statics::NewProp_ObjectsSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawner_Statics::NewProp_bEnableSpawnObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawner_Statics::NewProp_DelaySpawnObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjectSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjectSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AObjectSpawner_Statics::ClassParams = {
		&AObjectSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AObjectSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObjectSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjectSpawner()
	{
		if (!Z_Registration_Info_UClass_AObjectSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObjectSpawner.OuterSingleton, Z_Construct_UClass_AObjectSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AObjectSpawner.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<AObjectSpawner>()
	{
		return AObjectSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectSpawner);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_Statics::ScriptStructInfo[] = {
		{ FObjectSpawn::StaticStruct, Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewStructOps, TEXT("ObjectSpawn"), &Z_Registration_Info_UScriptStruct_ObjectSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectSpawn), 3510773582U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AObjectSpawner, AObjectSpawner::StaticClass, TEXT("AObjectSpawner"), &Z_Registration_Info_UClass_AObjectSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObjectSpawner), 3256134916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_2396697868(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
