// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/InteractTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractTrigger() {}
// Cross Module References
	BUILDINGESCAPE_API UEnum* Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnBeginOverlapInteractTrigger__DelegateSignature();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnEndOverlapInteractTrigger__DelegateSignature();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractTrigger();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractTrigger_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ATrap_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UQuestActorComponentID_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELastStateObjectOverlap;
	static UEnum* ELastStateObjectOverlap_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELastStateObjectOverlap.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELastStateObjectOverlap.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ELastStateObjectOverlap"));
		}
		return Z_Registration_Info_UEnum_ELastStateObjectOverlap.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UEnum* StaticEnum<ELastStateObjectOverlap>()
	{
		return ELastStateObjectOverlap_StaticEnum();
	}
	struct Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap_Statics::Enumerators[] = {
		{ "ELastStateObjectOverlap::BeginOverlap", (int64)ELastStateObjectOverlap::BeginOverlap },
		{ "ELastStateObjectOverlap::EndOverlap", (int64)ELastStateObjectOverlap::EndOverlap },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap_Statics::Enum_MetaDataParams[] = {
		{ "BeginOverlap.Name", "ELastStateObjectOverlap::BeginOverlap" },
		{ "EndOverlap.Name", "ELastStateObjectOverlap::EndOverlap" },
		{ "ModuleRelativePath", "Public/InteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		"ELastStateObjectOverlap",
		"ELastStateObjectOverlap",
		Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap()
	{
		if (!Z_Registration_Info_UEnum_ELastStateObjectOverlap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELastStateObjectOverlap.InnerSingleton, Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELastStateObjectOverlap.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_BuildingEscape_OnBeginOverlapInteractTrigger__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape_OnBeginOverlapInteractTrigger__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BuildingEscape_OnBeginOverlapInteractTrigger__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape, nullptr, "OnBeginOverlapInteractTrigger__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BuildingEscape_OnBeginOverlapInteractTrigger__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_OnBeginOverlapInteractTrigger__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnBeginOverlapInteractTrigger__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BuildingEscape_OnBeginOverlapInteractTrigger__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BuildingEscape_OnEndOverlapInteractTrigger__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape_OnEndOverlapInteractTrigger__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BuildingEscape_OnEndOverlapInteractTrigger__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape, nullptr, "OnEndOverlapInteractTrigger__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BuildingEscape_OnEndOverlapInteractTrigger__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_OnEndOverlapInteractTrigger__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnEndOverlapInteractTrigger__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BuildingEscape_OnEndOverlapInteractTrigger__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature_Statics
	{
		struct InteractTrigger_eventOnCompleteInteractTrigger_Parms
		{
			AInteractTrigger* InteractTrigger;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractTrigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature_Statics::NewProp_InteractTrigger = { "InteractTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractTrigger_eventOnCompleteInteractTrigger_Parms, InteractTrigger), Z_Construct_UClass_AInteractTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature_Statics::NewProp_InteractTrigger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractTrigger, nullptr, "OnCompleteInteractTrigger__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature_Statics::InteractTrigger_eventOnCompleteInteractTrigger_Parms), Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AInteractTrigger::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractTrigger::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AInteractTrigger::StaticRegisterNativesAInteractTrigger()
	{
		UClass* Class = AInteractTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AInteractTrigger::execOnOverlapBegin },
			{ "OnOverlapEnd", &AInteractTrigger::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics
	{
		struct InteractTrigger_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractTrigger_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractTrigger_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractTrigger_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractTrigger_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((InteractTrigger_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractTrigger_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractTrigger_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractTrigger, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::InteractTrigger_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics
	{
		struct InteractTrigger_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractTrigger_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractTrigger_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractTrigger_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractTrigger_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractTrigger, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::InteractTrigger_eventOnOverlapEnd_Parms), Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractTrigger);
	UClass* Z_Construct_UClass_AInteractTrigger_NoRegister()
	{
		return AInteractTrigger::StaticClass();
	}
	struct Z_Construct_UClass_AInteractTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Trap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyMeOnTrigger_MetaData[];
#endif
		static void NewProp_bDestroyMeOnTrigger_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyMeOnTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxTriggerVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxTriggerVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestActorComponentID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestActorComponentID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_AInteractTrigger_OnCompleteInteractTrigger__DelegateSignature, "OnCompleteInteractTrigger__DelegateSignature" }, // 3152666062
		{ &Z_Construct_UFunction_AInteractTrigger_OnOverlapBegin, "OnOverlapBegin" }, // 1756588489
		{ &Z_Construct_UFunction_AInteractTrigger_OnOverlapEnd, "OnOverlapEnd" }, // 266595609
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractTrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractTrigger.h" },
		{ "ModuleRelativePath", "Public/InteractTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractTrigger_Statics::NewProp_Trap_MetaData[] = {
		{ "Category", "InteractTrigger" },
		{ "ModuleRelativePath", "Public/InteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractTrigger_Statics::NewProp_Trap = { "Trap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractTrigger, Trap), Z_Construct_UClass_ATrap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractTrigger_Statics::NewProp_Trap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractTrigger_Statics::NewProp_Trap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractTrigger_Statics::NewProp_bDestroyMeOnTrigger_MetaData[] = {
		{ "Category", "InteractTrigger" },
		{ "ModuleRelativePath", "Public/InteractTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AInteractTrigger_Statics::NewProp_bDestroyMeOnTrigger_SetBit(void* Obj)
	{
		((AInteractTrigger*)Obj)->bDestroyMeOnTrigger = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractTrigger_Statics::NewProp_bDestroyMeOnTrigger = { "bDestroyMeOnTrigger", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInteractTrigger), &Z_Construct_UClass_AInteractTrigger_Statics::NewProp_bDestroyMeOnTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInteractTrigger_Statics::NewProp_bDestroyMeOnTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractTrigger_Statics::NewProp_bDestroyMeOnTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractTrigger_Statics::NewProp_BoxTriggerVolume_MetaData[] = {
		{ "Category", "InteractTrigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractTrigger_Statics::NewProp_BoxTriggerVolume = { "BoxTriggerVolume", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractTrigger, BoxTriggerVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractTrigger_Statics::NewProp_BoxTriggerVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractTrigger_Statics::NewProp_BoxTriggerVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractTrigger_Statics::NewProp_QuestActorComponentID_MetaData[] = {
		{ "Category", "InteractTrigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractTrigger_Statics::NewProp_QuestActorComponentID = { "QuestActorComponentID", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractTrigger, QuestActorComponentID), Z_Construct_UClass_UQuestActorComponentID_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractTrigger_Statics::NewProp_QuestActorComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractTrigger_Statics::NewProp_QuestActorComponentID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractTrigger_Statics::NewProp_Trap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractTrigger_Statics::NewProp_bDestroyMeOnTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractTrigger_Statics::NewProp_BoxTriggerVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractTrigger_Statics::NewProp_QuestActorComponentID,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractTrigger_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractTrigger, IInteractInterface), false },  // 1810917348
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractTrigger_Statics::ClassParams = {
		&AInteractTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractTrigger_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractTrigger_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractTrigger()
	{
		if (!Z_Registration_Info_UClass_AInteractTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractTrigger.OuterSingleton, Z_Construct_UClass_AInteractTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractTrigger.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<AInteractTrigger>()
	{
		return AInteractTrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractTrigger);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_Statics::EnumInfo[] = {
		{ ELastStateObjectOverlap_StaticEnum, TEXT("ELastStateObjectOverlap"), &Z_Registration_Info_UEnum_ELastStateObjectOverlap, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3144955784U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractTrigger, AInteractTrigger::StaticClass, TEXT("AInteractTrigger"), &Z_Registration_Info_UClass_AInteractTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractTrigger), 4044108330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_77555559(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
