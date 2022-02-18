// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Private/Grabber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabber() {}
// Cross Module References
	BUILDINGESCAPE_API UEnum* Z_Construct_UEnum_BuildingEscape_ETypeGrabbel();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UGrabber_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UGrabber();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* ETypeGrabbel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BuildingEscape_ETypeGrabbel, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ETypeGrabbel"));
		}
		return Singleton;
	}
	template<> BUILDINGESCAPE_API UEnum* StaticEnum<ETypeGrabbel>()
	{
		return ETypeGrabbel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETypeGrabbel(ETypeGrabbel_StaticEnum, TEXT("/Script/BuildingEscape"), TEXT("ETypeGrabbel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BuildingEscape_ETypeGrabbel_Hash() { return 4149756608U; }
	UEnum* Z_Construct_UEnum_BuildingEscape_ETypeGrabbel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETypeGrabbel"), 0, Get_Z_Construct_UEnum_BuildingEscape_ETypeGrabbel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETypeGrabbel::AtLocation", (int64)ETypeGrabbel::AtLocation },
				{ "ETypeGrabbel::AtLocationAndRotation", (int64)ETypeGrabbel::AtLocationAndRotation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AtLocation.Name", "ETypeGrabbel::AtLocation" },
				{ "AtLocationAndRotation.Name", "ETypeGrabbel::AtLocationAndRotation" },
				{ "ModuleRelativePath", "Private/Grabber.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape,
				nullptr,
				"ETypeGrabbel",
				"ETypeGrabbel",
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
	DEFINE_FUNCTION(UGrabber::execGetPlayerViewLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPlayerViewLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrabber::execGetPlayerReach)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPlayerReach();
		P_NATIVE_END;
	}
	void UGrabber::StaticRegisterNativesUGrabber()
	{
		UClass* Class = UGrabber::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerReach", &UGrabber::execGetPlayerReach },
			{ "GetPlayerViewLocation", &UGrabber::execGetPlayerViewLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrabber_GetPlayerReach_Statics
	{
		struct Grabber_eventGetPlayerReach_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabber_GetPlayerReach_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grabber_eventGetPlayerReach_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabber_GetPlayerReach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabber_GetPlayerReach_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabber_GetPlayerReach_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Grabber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabber_GetPlayerReach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabber, nullptr, "GetPlayerReach", nullptr, nullptr, sizeof(Grabber_eventGetPlayerReach_Parms), Z_Construct_UFunction_UGrabber_GetPlayerReach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber_GetPlayerReach_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabber_GetPlayerReach_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber_GetPlayerReach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabber_GetPlayerReach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabber_GetPlayerReach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabber_GetPlayerViewLocation_Statics
	{
		struct Grabber_eventGetPlayerViewLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabber_GetPlayerViewLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grabber_eventGetPlayerViewLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabber_GetPlayerViewLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabber_GetPlayerViewLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabber_GetPlayerViewLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Grabber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabber_GetPlayerViewLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabber, nullptr, "GetPlayerViewLocation", nullptr, nullptr, sizeof(Grabber_eventGetPlayerViewLocation_Parms), Z_Construct_UFunction_UGrabber_GetPlayerViewLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber_GetPlayerViewLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabber_GetPlayerViewLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber_GetPlayerViewLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabber_GetPlayerViewLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabber_GetPlayerViewLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrabber_NoRegister()
	{
		return UGrabber::StaticClass();
	}
	struct Z_Construct_UClass_UGrabber_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Reach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorDebugLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorDebugLine;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TypeGrabbel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeGrabbel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TypeGrabbel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowLogsPlayerLocationAndRotation_MetaData[];
#endif
		static void NewProp_bShowLogsPlayerLocationAndRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowLogsPlayerLocationAndRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDrawDebugLine_MetaData[];
#endif
		static void NewProp_bShowDrawDebugLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDrawDebugLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHitActorName_MetaData[];
#endif
		static void NewProp_bShowHitActorName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHitActorName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrabber_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrabber_GetPlayerReach, "GetPlayerReach" }, // 2470110512
		{ &Z_Construct_UFunction_UGrabber_GetPlayerViewLocation, "GetPlayerViewLocation" }, // 2470700582
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Grabber.h" },
		{ "ModuleRelativePath", "Private/Grabber.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::NewProp_Reach_MetaData[] = {
		{ "Category", "Grabber" },
		{ "ModuleRelativePath", "Private/Grabber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_Reach = { "Reach", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabber, Reach), METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::NewProp_Reach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::NewProp_Reach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::NewProp_ColorDebugLine_MetaData[] = {
		{ "Category", "Grabber" },
		{ "ModuleRelativePath", "Private/Grabber.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_ColorDebugLine = { "ColorDebugLine", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabber, ColorDebugLine), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::NewProp_ColorDebugLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::NewProp_ColorDebugLine_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_TypeGrabbel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::NewProp_TypeGrabbel_MetaData[] = {
		{ "Category", "Grabber" },
		{ "ModuleRelativePath", "Private/Grabber.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_TypeGrabbel = { "TypeGrabbel", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabber, TypeGrabbel), Z_Construct_UEnum_BuildingEscape_ETypeGrabbel, METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::NewProp_TypeGrabbel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::NewProp_TypeGrabbel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::NewProp_ThrowForce_MetaData[] = {
		{ "Category", "Grabber" },
		{ "ModuleRelativePath", "Private/Grabber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_ThrowForce = { "ThrowForce", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabber, ThrowForce), METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::NewProp_ThrowForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::NewProp_ThrowForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::NewProp_bShowLogsPlayerLocationAndRotation_MetaData[] = {
		{ "Category", "Grabber" },
		{ "ModuleRelativePath", "Private/Grabber.h" },
	};
#endif
	void Z_Construct_UClass_UGrabber_Statics::NewProp_bShowLogsPlayerLocationAndRotation_SetBit(void* Obj)
	{
		((UGrabber*)Obj)->bShowLogsPlayerLocationAndRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_bShowLogsPlayerLocationAndRotation = { "bShowLogsPlayerLocationAndRotation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrabber), &Z_Construct_UClass_UGrabber_Statics::NewProp_bShowLogsPlayerLocationAndRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::NewProp_bShowLogsPlayerLocationAndRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::NewProp_bShowLogsPlayerLocationAndRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::NewProp_bShowDrawDebugLine_MetaData[] = {
		{ "Category", "Grabber" },
		{ "ModuleRelativePath", "Private/Grabber.h" },
	};
#endif
	void Z_Construct_UClass_UGrabber_Statics::NewProp_bShowDrawDebugLine_SetBit(void* Obj)
	{
		((UGrabber*)Obj)->bShowDrawDebugLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_bShowDrawDebugLine = { "bShowDrawDebugLine", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrabber), &Z_Construct_UClass_UGrabber_Statics::NewProp_bShowDrawDebugLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::NewProp_bShowDrawDebugLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::NewProp_bShowDrawDebugLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::NewProp_bShowHitActorName_MetaData[] = {
		{ "Category", "Grabber" },
		{ "ModuleRelativePath", "Private/Grabber.h" },
	};
#endif
	void Z_Construct_UClass_UGrabber_Statics::NewProp_bShowHitActorName_SetBit(void* Obj)
	{
		((UGrabber*)Obj)->bShowHitActorName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_bShowHitActorName = { "bShowHitActorName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrabber), &Z_Construct_UClass_UGrabber_Statics::NewProp_bShowHitActorName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::NewProp_bShowHitActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::NewProp_bShowHitActorName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_Reach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_ColorDebugLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_TypeGrabbel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_TypeGrabbel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_ThrowForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_bShowLogsPlayerLocationAndRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_bShowDrawDebugLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_bShowHitActorName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabber_Statics::ClassParams = {
		&UGrabber::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGrabber_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabber, 4195894403);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UGrabber>()
	{
		return UGrabber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabber(Z_Construct_UClass_UGrabber, &UGrabber::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UGrabber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
