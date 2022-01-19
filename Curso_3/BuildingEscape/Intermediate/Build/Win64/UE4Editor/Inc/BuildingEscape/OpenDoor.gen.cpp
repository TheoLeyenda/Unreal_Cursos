// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/OpenDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDoor() {}
// Cross Module References
	BUILDINGESCAPE_API UEnum* Z_Construct_UEnum_BuildingEscape_ETypeOpenDoor();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UOpenDoor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UOpenDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* ETypeOpenDoor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BuildingEscape_ETypeOpenDoor, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ETypeOpenDoor"));
		}
		return Singleton;
	}
	template<> BUILDINGESCAPE_API UEnum* StaticEnum<ETypeOpenDoor>()
	{
		return ETypeOpenDoor_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETypeOpenDoor(ETypeOpenDoor_StaticEnum, TEXT("/Script/BuildingEscape"), TEXT("ETypeOpenDoor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BuildingEscape_ETypeOpenDoor_Hash() { return 3049017793U; }
	UEnum* Z_Construct_UEnum_BuildingEscape_ETypeOpenDoor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETypeOpenDoor"), 0, Get_Z_Construct_UEnum_BuildingEscape_ETypeOpenDoor_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETypeOpenDoor::Tick", (int64)ETypeOpenDoor::Tick },
				{ "ETypeOpenDoor::Timeline", (int64)ETypeOpenDoor::Timeline },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "OpenDoor.h" },
				{ "Tick.Name", "ETypeOpenDoor::Tick" },
				{ "Timeline.Name", "ETypeOpenDoor::Timeline" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape,
				nullptr,
				"ETypeOpenDoor",
				"ETypeOpenDoor",
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
	void UOpenDoor::StaticRegisterNativesUOpenDoor()
	{
	}
	UClass* Z_Construct_UClass_UOpenDoor_NoRegister()
	{
		return UOpenDoor::StaticClass();
	}
	struct Z_Construct_UClass_UOpenDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TypeOpenDoor_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeOpenDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TypeOpenDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseShowRotationYaw_MetaData[];
#endif
		static void NewProp_bUseShowRotationYaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseShowRotationYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedOpenDoorByLerp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedOpenDoorByLerp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OpenDoor.h" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeOpenDoor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeOpenDoor_MetaData[] = {
		{ "Category", "Open Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeOpenDoor = { "TypeOpenDoor", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, TypeOpenDoor), Z_Construct_UEnum_BuildingEscape_ETypeOpenDoor, METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeOpenDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeOpenDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_bUseShowRotationYaw_MetaData[] = {
		{ "Category", "Open Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	void Z_Construct_UClass_UOpenDoor_Statics::NewProp_bUseShowRotationYaw_SetBit(void* Obj)
	{
		((UOpenDoor*)Obj)->bUseShowRotationYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_bUseShowRotationYaw = { "bUseShowRotationYaw", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenDoor), &Z_Construct_UClass_UOpenDoor_Statics::NewProp_bUseShowRotationYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_bUseShowRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_bUseShowRotationYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedOpenDoorByLerp_MetaData[] = {
		{ "Category", "Open Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedOpenDoorByLerp = { "SpeedOpenDoorByLerp", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, SpeedOpenDoorByLerp), METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedOpenDoorByLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedOpenDoorByLerp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYaw_MetaData[] = {
		{ "Category", "Open Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYaw = { "TargetYaw", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, TargetYaw), METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYaw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeOpenDoor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeOpenDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_bUseShowRotationYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedOpenDoorByLerp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYaw,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenDoor_Statics::ClassParams = {
		&UOpenDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenDoor, 3733317644);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UOpenDoor>()
	{
		return UOpenDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenDoor(Z_Construct_UClass_UOpenDoor, &UOpenDoor::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UOpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
