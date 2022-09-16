// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/Door.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}
// Cross Module References
	BUILDINGESCAPE_API UEnum* Z_Construct_UEnum_BuildingEscape_EStateDoor();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UQuestActorComponentID_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateDoor;
	static UEnum* EStateDoor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateDoor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateDoor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BuildingEscape_EStateDoor, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("EStateDoor"));
		}
		return Z_Registration_Info_UEnum_EStateDoor.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UEnum* StaticEnum<EStateDoor>()
	{
		return EStateDoor_StaticEnum();
	}
	struct Z_Construct_UEnum_BuildingEscape_EStateDoor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BuildingEscape_EStateDoor_Statics::Enumerators[] = {
		{ "EStateDoor::Closed", (int64)EStateDoor::Closed },
		{ "EStateDoor::Opened", (int64)EStateDoor::Opened },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BuildingEscape_EStateDoor_Statics::Enum_MetaDataParams[] = {
		{ "Closed.Name", "EStateDoor::Closed" },
		{ "ModuleRelativePath", "Public/Door.h" },
		{ "Opened.Name", "EStateDoor::Opened" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BuildingEscape_EStateDoor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		"EStateDoor",
		"EStateDoor",
		Z_Construct_UEnum_BuildingEscape_EStateDoor_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BuildingEscape_EStateDoor_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BuildingEscape_EStateDoor_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BuildingEscape_EStateDoor_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BuildingEscape_EStateDoor()
	{
		if (!Z_Registration_Info_UEnum_EStateDoor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateDoor.InnerSingleton, Z_Construct_UEnum_BuildingEscape_EStateDoor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateDoor.InnerSingleton;
	}
	DEFINE_FUNCTION(ADoor::execUpdateTimelineComp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTimelineComp(Z_Param_Output);
		P_NATIVE_END;
	}
	void ADoor::StaticRegisterNativesADoor()
	{
		UClass* Class = ADoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateTimelineComp", &ADoor::execUpdateTimelineComp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoor_UpdateTimelineComp_Statics
	{
		struct Door_eventUpdateTimelineComp_Parms
		{
			float Output;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADoor_UpdateTimelineComp_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Door_eventUpdateTimelineComp_Parms, Output), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_UpdateTimelineComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_UpdateTimelineComp_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_UpdateTimelineComp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_UpdateTimelineComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "UpdateTimelineComp", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADoor_UpdateTimelineComp_Statics::Door_eventUpdateTimelineComp_Parms), Z_Construct_UFunction_ADoor_UpdateTimelineComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_UpdateTimelineComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_UpdateTimelineComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_UpdateTimelineComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_UpdateTimelineComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_UpdateTimelineComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoor);
	UClass* Z_Construct_UClass_ADoor_NoRegister()
	{
		return ADoor::StaticClass();
	}
	struct Z_Construct_UClass_ADoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestActorComponentID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestActorComponentID;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_StateDoor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateDoor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StateDoor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInitCheckDoor_MetaData[];
#endif
		static void NewProp_bUseInitCheckDoor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInitCheckDoor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorFrame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Door;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorTimelineComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorTimelineComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorTimelineFloatCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorTimelineFloatCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoor_UpdateTimelineComp, "UpdateTimelineComp" }, // 219033149
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Door.h" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_QuestActorComponentID_MetaData[] = {
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_QuestActorComponentID = { "QuestActorComponentID", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor, QuestActorComponentID), Z_Construct_UClass_UQuestActorComponentID_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_QuestActorComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_QuestActorComponentID_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_StateDoor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_StateDoor_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_StateDoor = { "StateDoor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor, StateDoor), Z_Construct_UEnum_BuildingEscape_EStateDoor, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_StateDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_StateDoor_MetaData)) }; // 3062784301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_bUseInitCheckDoor_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	void Z_Construct_UClass_ADoor_Statics::NewProp_bUseInitCheckDoor_SetBit(void* Obj)
	{
		((ADoor*)Obj)->bUseInitCheckDoor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bUseInitCheckDoor = { "bUseInitCheckDoor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bUseInitCheckDoor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_bUseInitCheckDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_bUseInitCheckDoor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_DoorFrame_MetaData[] = {
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorFrame = { "DoorFrame", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor, DoorFrame), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_DoorFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_DoorFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_Door_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_DoorTimelineComp_MetaData[] = {
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorTimelineComp = { "DoorTimelineComp", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor, DoorTimelineComp), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_DoorTimelineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_DoorTimelineComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_DoorTimelineFloatCurve_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "Comment", "// Variable to hold the Curve asset\n" },
		{ "ModuleRelativePath", "Public/Door.h" },
		{ "ToolTip", "Variable to hold the Curve asset" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorTimelineFloatCurve = { "DoorTimelineFloatCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor, DoorTimelineFloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_DoorTimelineFloatCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_DoorTimelineFloatCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_QuestActorComponentID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_StateDoor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_StateDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bUseInitCheckDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_Door,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorTimelineComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_AudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorTimelineFloatCurve,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADoor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(ADoor, IInteractInterface), false },  // 1810917348
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
		&ADoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADoor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoor()
	{
		if (!Z_Registration_Info_UClass_ADoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoor.OuterSingleton, Z_Construct_UClass_ADoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoor.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ADoor>()
	{
		return ADoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Door_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Door_h_Statics::EnumInfo[] = {
		{ EStateDoor_StaticEnum, TEXT("EStateDoor"), &Z_Registration_Info_UEnum_EStateDoor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3062784301U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Door_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoor, ADoor::StaticClass, TEXT("ADoor"), &Z_Registration_Info_UClass_ADoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor), 2612515605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Door_h_4198502264(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Door_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Door_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Door_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
