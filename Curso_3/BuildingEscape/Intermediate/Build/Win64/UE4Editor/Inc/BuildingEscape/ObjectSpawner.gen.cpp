// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/ObjectSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
class UScriptStruct* FObjectSpawn::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDINGESCAPE_API uint32 Get_Z_Construct_UScriptStruct_FObjectSpawn_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectSpawn, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ObjectSpawn"), sizeof(FObjectSpawn), Get_Z_Construct_UScriptStruct_FObjectSpawn_Hash());
	}
	return Singleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FObjectSpawn>()
{
	return FObjectSpawn::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObjectSpawn(FObjectSpawn::StaticStruct, TEXT("/Script/BuildingEscape"), TEXT("ObjectSpawn"), false, nullptr, nullptr);
static struct FScriptStruct_BuildingEscape_StaticRegisterNativesFObjectSpawn
{
	FScriptStruct_BuildingEscape_StaticRegisterNativesFObjectSpawn()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ObjectSpawn")),new UScriptStruct::TCppStructOps<FObjectSpawn>);
	}
} ScriptStruct_BuildingEscape_StaticRegisterNativesFObjectSpawn;
	struct Z_Construct_UScriptStruct_FObjectSpawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountObjectsSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CountObjectsSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectSpawn_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectSpawn>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_ObjectBlueprint_MetaData[] = {
		{ "Category", "ObjectSpawn" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_ObjectBlueprint = { "ObjectBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectSpawn, ObjectBlueprint), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_ObjectBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_ObjectBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_CountObjectsSpawn_MetaData[] = {
		{ "Category", "ObjectSpawn" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_CountObjectsSpawn = { "CountObjectsSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectSpawn, CountObjectsSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_CountObjectsSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_CountObjectsSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_ObjectBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectSpawn_Statics::NewProp_CountObjectsSpawn,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectSpawn_Statics::ReturnStructParams = {
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObjectSpawn_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObjectSpawn"), sizeof(FObjectSpawn), Get_Z_Construct_UScriptStruct_FObjectSpawn_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObjectSpawn_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObjectSpawn_Hash() { return 1105846025U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectSpawner, nullptr, "SendTimerSpawnObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AObjectSpawner_NoRegister()
	{
		return AObjectSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AObjectSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeGeneratorX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeGeneratorX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeGeneratorY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeGeneratorY;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectsSpawn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectsSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSpawnObject_MetaData[];
#endif
		static void NewProp_bEnableSpawnObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSpawnObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelaySpawnObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelaySpawnObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjectSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AObjectSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AObjectSpawner_SendTimerSpawnObject, "SendTimerSpawnObject" }, // 233826131
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectSpawner.h" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorX_MetaData[] = {
		{ "Category", "ObjectSpawner" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorX = { "RangeGeneratorX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectSpawner, RangeGeneratorX), METADATA_PARAMS(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorY_MetaData[] = {
		{ "Category", "ObjectSpawner" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorY = { "RangeGeneratorY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectSpawner, RangeGeneratorY), METADATA_PARAMS(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorY_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AObjectSpawner_Statics::NewProp_ObjectsSpawn_Inner = { "ObjectsSpawn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FObjectSpawn, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawner_Statics::NewProp_ObjectsSpawn_MetaData[] = {
		{ "Category", "ObjectSpawner" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObjectSpawner_Statics::NewProp_ObjectsSpawn = { "ObjectsSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectSpawner, ObjectsSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_ObjectsSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_ObjectsSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawner_Statics::NewProp_bEnableSpawnObject_MetaData[] = {
		{ "Category", "ObjectSpawner" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	void Z_Construct_UClass_AObjectSpawner_Statics::NewProp_bEnableSpawnObject_SetBit(void* Obj)
	{
		((AObjectSpawner*)Obj)->bEnableSpawnObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObjectSpawner_Statics::NewProp_bEnableSpawnObject = { "bEnableSpawnObject", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObjectSpawner), &Z_Construct_UClass_AObjectSpawner_Statics::NewProp_bEnableSpawnObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_bEnableSpawnObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_bEnableSpawnObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawner_Statics::NewProp_DelaySpawnObject_MetaData[] = {
		{ "Category", "ObjectSpawner" },
		{ "ModuleRelativePath", "Public/ObjectSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObjectSpawner_Statics::NewProp_DelaySpawnObject = { "DelaySpawnObject", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectSpawner, DelaySpawnObject), METADATA_PARAMS(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_DelaySpawnObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawner_Statics::NewProp_DelaySpawnObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjectSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawner_Statics::NewProp_RangeGeneratorY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawner_Statics::NewProp_ObjectsSpawn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawner_Statics::NewProp_ObjectsSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawner_Statics::NewProp_bEnableSpawnObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawner_Statics::NewProp_DelaySpawnObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjectSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjectSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjectSpawner_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjectSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjectSpawner, 1490816836);
	template<> BUILDINGESCAPE_API UClass* StaticClass<AObjectSpawner>()
	{
		return AObjectSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjectSpawner(Z_Construct_UClass_AObjectSpawner, &AObjectSpawner::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("AObjectSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
