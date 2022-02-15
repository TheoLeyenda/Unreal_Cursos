// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/LeverSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeverSwitch() {}
// Cross Module References
	BUILDINGESCAPE_API UEnum* Z_Construct_UEnum_BuildingEscape_EPositiveShiwtch();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ALeverSwitch_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ALeverSwitch();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UQuestActorComponentID_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	static UEnum* EPositiveShiwtch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BuildingEscape_EPositiveShiwtch, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("EPositiveShiwtch"));
		}
		return Singleton;
	}
	template<> BUILDINGESCAPE_API UEnum* StaticEnum<EPositiveShiwtch>()
	{
		return EPositiveShiwtch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPositiveShiwtch(EPositiveShiwtch_StaticEnum, TEXT("/Script/BuildingEscape"), TEXT("EPositiveShiwtch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BuildingEscape_EPositiveShiwtch_Hash() { return 2310847628U; }
	UEnum* Z_Construct_UEnum_BuildingEscape_EPositiveShiwtch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPositiveShiwtch"), 0, Get_Z_Construct_UEnum_BuildingEscape_EPositiveShiwtch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPositiveShiwtch::Up", (int64)EPositiveShiwtch::Up },
				{ "EPositiveShiwtch::Down", (int64)EPositiveShiwtch::Down },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Down.Name", "EPositiveShiwtch::Down" },
				{ "ModuleRelativePath", "Public/LeverSwitch.h" },
				{ "Up.Name", "EPositiveShiwtch::Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape,
				nullptr,
				"EPositiveShiwtch",
				"EPositiveShiwtch",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ALeverSwitch::execUpdateTimelineComp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTimelineComp(Z_Param_Output);
		P_NATIVE_END;
	}
	void ALeverSwitch::StaticRegisterNativesALeverSwitch()
	{
		UClass* Class = ALeverSwitch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateTimelineComp", &ALeverSwitch::execUpdateTimelineComp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALeverSwitch_UpdateTimelineComp_Statics
	{
		struct LeverSwitch_eventUpdateTimelineComp_Parms
		{
			float Output;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Output;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALeverSwitch_UpdateTimelineComp_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeverSwitch_eventUpdateTimelineComp_Parms, Output), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALeverSwitch_UpdateTimelineComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALeverSwitch_UpdateTimelineComp_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALeverSwitch_UpdateTimelineComp_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Function which updates our Door's relative location with the timeline graph\n" },
		{ "ModuleRelativePath", "Public/LeverSwitch.h" },
		{ "ToolTip", "Function which updates our Door's relative location with the timeline graph" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALeverSwitch_UpdateTimelineComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALeverSwitch, nullptr, "UpdateTimelineComp", nullptr, nullptr, sizeof(LeverSwitch_eventUpdateTimelineComp_Parms), Z_Construct_UFunction_ALeverSwitch_UpdateTimelineComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALeverSwitch_UpdateTimelineComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALeverSwitch_UpdateTimelineComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALeverSwitch_UpdateTimelineComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALeverSwitch_UpdateTimelineComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALeverSwitch_UpdateTimelineComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALeverSwitch_NoRegister()
	{
		return ALeverSwitch::StaticClass();
	}
	struct Z_Construct_UClass_ALeverSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwitchOn_MetaData[];
#endif
		static void NewProp_bSwitchOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwitchOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimelineComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineFloatCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimelineFloatCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshLever_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshLever;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PositiveShiwtch_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositiveShiwtch_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PositiveShiwtch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestActorComponentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestActorComponentID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALeverSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALeverSwitch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALeverSwitch_UpdateTimelineComp, "UpdateTimelineComp" }, // 2633098078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LeverSwitch.h" },
		{ "ModuleRelativePath", "Public/LeverSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitch_Statics::NewProp_bSwitchOn_MetaData[] = {
		{ "Category", "LeverSwitch" },
		{ "ModuleRelativePath", "Public/LeverSwitch.h" },
	};
#endif
	void Z_Construct_UClass_ALeverSwitch_Statics::NewProp_bSwitchOn_SetBit(void* Obj)
	{
		((ALeverSwitch*)Obj)->bSwitchOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALeverSwitch_Statics::NewProp_bSwitchOn = { "bSwitchOn", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALeverSwitch), &Z_Construct_UClass_ALeverSwitch_Statics::NewProp_bSwitchOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_bSwitchOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_bSwitchOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitch_Statics::NewProp_TimelineComp_MetaData[] = {
		{ "Category", "LeverSwitch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LeverSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverSwitch_Statics::NewProp_TimelineComp = { "TimelineComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitch, TimelineComp), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_TimelineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_TimelineComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitch_Statics::NewProp_TimelineFloatCurve_MetaData[] = {
		{ "Category", "LeverSwitch" },
		{ "ModuleRelativePath", "Public/LeverSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverSwitch_Statics::NewProp_TimelineFloatCurve = { "TimelineFloatCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitch, TimelineFloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_TimelineFloatCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_TimelineFloatCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitch_Statics::NewProp_MeshBase_MetaData[] = {
		{ "Category", "LeverSwitch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LeverSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverSwitch_Statics::NewProp_MeshBase = { "MeshBase", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitch, MeshBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_MeshBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_MeshBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitch_Statics::NewProp_MeshLever_MetaData[] = {
		{ "Category", "LeverSwitch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LeverSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverSwitch_Statics::NewProp_MeshLever = { "MeshLever", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitch, MeshLever), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_MeshLever_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_MeshLever_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitch_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "LeverSwitch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LeverSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverSwitch_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitch, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitch_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "LeverSwitch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LeverSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverSwitch_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitch, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_Scene_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALeverSwitch_Statics::NewProp_PositiveShiwtch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitch_Statics::NewProp_PositiveShiwtch_MetaData[] = {
		{ "Category", "LeverSwitch" },
		{ "ModuleRelativePath", "Public/LeverSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALeverSwitch_Statics::NewProp_PositiveShiwtch = { "PositiveShiwtch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitch, PositiveShiwtch), Z_Construct_UEnum_BuildingEscape_EPositiveShiwtch, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_PositiveShiwtch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_PositiveShiwtch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitch_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "LeverSwitch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LeverSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverSwitch_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitch, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitch_Statics::NewProp_QuestActorComponentID_MetaData[] = {
		{ "Category", "LeverSwitch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LeverSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverSwitch_Statics::NewProp_QuestActorComponentID = { "QuestActorComponentID", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitch, QuestActorComponentID), Z_Construct_UClass_UQuestActorComponentID_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_QuestActorComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitch_Statics::NewProp_QuestActorComponentID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALeverSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitch_Statics::NewProp_bSwitchOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitch_Statics::NewProp_TimelineComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitch_Statics::NewProp_TimelineFloatCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitch_Statics::NewProp_MeshBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitch_Statics::NewProp_MeshLever,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitch_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitch_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitch_Statics::NewProp_PositiveShiwtch_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitch_Statics::NewProp_PositiveShiwtch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitch_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitch_Statics::NewProp_QuestActorComponentID,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALeverSwitch_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(ALeverSwitch, IInteractInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALeverSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeverSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALeverSwitch_Statics::ClassParams = {
		&ALeverSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALeverSwitch_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitch_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALeverSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALeverSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALeverSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALeverSwitch, 3356989029);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ALeverSwitch>()
	{
		return ALeverSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALeverSwitch(Z_Construct_UClass_ALeverSwitch, &ALeverSwitch::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ALeverSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALeverSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
