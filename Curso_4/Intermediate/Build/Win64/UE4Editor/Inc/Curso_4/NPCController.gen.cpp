// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso_4/Public/Characters/Controllers/NPCController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCController() {}
// Cross Module References
	CURSO_4_API UClass* Z_Construct_UClass_ANPCController_NoRegister();
	CURSO_4_API UClass* Z_Construct_UClass_ANPCController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Curso_4();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANPCController::execUpdateHasLineOfSightKey)
	{
		P_GET_UBOOL(Z_Param_HasLineOfSight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHasLineOfSightKey(Z_Param_HasLineOfSight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCController::execUpdateTargetActorKey)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTargetActorKey(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	void ANPCController::StaticRegisterNativesANPCController()
	{
		UClass* Class = ANPCController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateHasLineOfSightKey", &ANPCController::execUpdateHasLineOfSightKey },
			{ "UpdateTargetActorKey", &ANPCController::execUpdateTargetActorKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey_Statics
	{
		struct NPCController_eventUpdateHasLineOfSightKey_Parms
		{
			bool HasLineOfSight;
		};
		static void NewProp_HasLineOfSight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasLineOfSight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey_Statics::NewProp_HasLineOfSight_SetBit(void* Obj)
	{
		((NPCController_eventUpdateHasLineOfSightKey_Parms*)Obj)->HasLineOfSight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey_Statics::NewProp_HasLineOfSight = { "HasLineOfSight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NPCController_eventUpdateHasLineOfSightKey_Parms), &Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey_Statics::NewProp_HasLineOfSight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey_Statics::NewProp_HasLineOfSight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Controllers/NPCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCController, nullptr, "UpdateHasLineOfSightKey", nullptr, nullptr, sizeof(NPCController_eventUpdateHasLineOfSightKey_Parms), Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCController_UpdateTargetActorKey_Statics
	{
		struct NPCController_eventUpdateTargetActorKey_Parms
		{
			AActor* TargetActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCController_UpdateTargetActorKey_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCController_eventUpdateTargetActorKey_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCController_UpdateTargetActorKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCController_UpdateTargetActorKey_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCController_UpdateTargetActorKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Controllers/NPCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCController_UpdateTargetActorKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCController, nullptr, "UpdateTargetActorKey", nullptr, nullptr, sizeof(NPCController_eventUpdateTargetActorKey_Parms), Z_Construct_UFunction_ANPCController_UpdateTargetActorKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCController_UpdateTargetActorKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCController_UpdateTargetActorKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCController_UpdateTargetActorKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCController_UpdateTargetActorKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANPCController_UpdateTargetActorKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANPCController_NoRegister()
	{
		return ANPCController::StaticClass();
	}
	struct Z_Construct_UClass_ANPCController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetActorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasLineOfSightName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HasLineOfSightName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBehaviorTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso_4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANPCController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPCController_UpdateHasLineOfSightKey, "UpdateHasLineOfSightKey" }, // 1293412612
		{ &Z_Construct_UFunction_ANPCController_UpdateTargetActorKey, "UpdateTargetActorKey" }, // 2054429376
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Characters/Controllers/NPCController.h" },
		{ "ModuleRelativePath", "Public/Characters/Controllers/NPCController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCController_Statics::NewProp_TargetActorName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Characters/Controllers/NPCController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ANPCController_Statics::NewProp_TargetActorName = { "TargetActorName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCController, TargetActorName), METADATA_PARAMS(Z_Construct_UClass_ANPCController_Statics::NewProp_TargetActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCController_Statics::NewProp_TargetActorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCController_Statics::NewProp_HasLineOfSightName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Characters/Controllers/NPCController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ANPCController_Statics::NewProp_HasLineOfSightName = { "HasLineOfSightName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCController, HasLineOfSightName), METADATA_PARAMS(Z_Construct_UClass_ANPCController_Statics::NewProp_HasLineOfSightName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCController_Statics::NewProp_HasLineOfSightName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCController_Statics::NewProp_CurrentBehaviorTree_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Characters/Controllers/NPCController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCController_Statics::NewProp_CurrentBehaviorTree = { "CurrentBehaviorTree", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCController, CurrentBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCController_Statics::NewProp_CurrentBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCController_Statics::NewProp_CurrentBehaviorTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCController_Statics::NewProp_TargetActorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCController_Statics::NewProp_HasLineOfSightName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCController_Statics::NewProp_CurrentBehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPCController_Statics::ClassParams = {
		&ANPCController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANPCController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPCController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPCController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPCController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPCController, 1796947535);
	template<> CURSO_4_API UClass* StaticClass<ANPCController>()
	{
		return ANPCController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPCController(Z_Construct_UClass_ANPCController, &ANPCController::StaticClass, TEXT("/Script/Curso_4"), TEXT("ANPCController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
