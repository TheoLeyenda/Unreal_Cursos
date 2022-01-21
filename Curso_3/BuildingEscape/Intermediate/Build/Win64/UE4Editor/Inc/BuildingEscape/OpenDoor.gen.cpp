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
	BUILDINGESCAPE_API UEnum* Z_Construct_UEnum_BuildingEscape_ETypeRotationDoor();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UOpenDoor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UOpenDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
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
	uint32 Get_Z_Construct_UEnum_BuildingEscape_ETypeOpenDoor_Hash() { return 1787743173U; }
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
				{ "ETypeOpenDoor::TriggerVolumenCollisionPlayer", (int64)ETypeOpenDoor::TriggerVolumenCollisionPlayer },
				{ "ETypeOpenDoor::TriggerVolumenMassNumber", (int64)ETypeOpenDoor::TriggerVolumenMassNumber },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "OpenDoor.h" },
				{ "TriggerVolumenCollisionPlayer.Name", "ETypeOpenDoor::TriggerVolumenCollisionPlayer" },
				{ "TriggerVolumenMassNumber.Name", "ETypeOpenDoor::TriggerVolumenMassNumber" },
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
	static UEnum* ETypeRotationDoor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BuildingEscape_ETypeRotationDoor, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ETypeRotationDoor"));
		}
		return Singleton;
	}
	template<> BUILDINGESCAPE_API UEnum* StaticEnum<ETypeRotationDoor>()
	{
		return ETypeRotationDoor_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETypeRotationDoor(ETypeRotationDoor_StaticEnum, TEXT("/Script/BuildingEscape"), TEXT("ETypeRotationDoor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BuildingEscape_ETypeRotationDoor_Hash() { return 727615092U; }
	UEnum* Z_Construct_UEnum_BuildingEscape_ETypeRotationDoor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETypeRotationDoor"), 0, Get_Z_Construct_UEnum_BuildingEscape_ETypeRotationDoor_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETypeRotationDoor::Lerp", (int64)ETypeRotationDoor::Lerp },
				{ "ETypeRotationDoor::Interpolation", (int64)ETypeRotationDoor::Interpolation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Interpolation.Name", "ETypeRotationDoor::Interpolation" },
				{ "Lerp.Name", "ETypeRotationDoor::Lerp" },
				{ "ModuleRelativePath", "OpenDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape,
				nullptr,
				"ETypeRotationDoor",
				"ETypeRotationDoor",
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
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TypeRotationDoor_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeRotationDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TypeRotationDoor;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedOpenDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedOpenDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedCloseDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedCloseDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetYawOpenDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetYawOpenDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetYawCloseDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetYawCloseDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressurePlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressurePlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorThatOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorThatOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCloseDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DoorCloseDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassToOpenDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassToOpenDoor;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeRotationDoor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeRotationDoor_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeRotationDoor = { "TypeRotationDoor", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, TypeRotationDoor), Z_Construct_UEnum_BuildingEscape_ETypeRotationDoor, METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeRotationDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeRotationDoor_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeOpenDoor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeOpenDoor_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeOpenDoor = { "TypeOpenDoor", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, TypeOpenDoor), Z_Construct_UEnum_BuildingEscape_ETypeOpenDoor, METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeOpenDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeOpenDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_bUseShowRotationYaw_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	void Z_Construct_UClass_UOpenDoor_Statics::NewProp_bUseShowRotationYaw_SetBit(void* Obj)
	{
		((UOpenDoor*)Obj)->bUseShowRotationYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_bUseShowRotationYaw = { "bUseShowRotationYaw", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenDoor), &Z_Construct_UClass_UOpenDoor_Statics::NewProp_bUseShowRotationYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_bUseShowRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_bUseShowRotationYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedOpenDoor_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedOpenDoor = { "SpeedOpenDoor", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, SpeedOpenDoor), METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedOpenDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedOpenDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedCloseDoor_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedCloseDoor = { "SpeedCloseDoor", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, SpeedCloseDoor), METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedCloseDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedCloseDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYawOpenDoor_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYawOpenDoor = { "TargetYawOpenDoor", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, TargetYawOpenDoor), METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYawOpenDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYawOpenDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYawCloseDoor_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYawCloseDoor = { "TargetYawCloseDoor", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, TargetYawCloseDoor), METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYawCloseDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYawCloseDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_PressurePlate_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_PressurePlate = { "PressurePlate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, PressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_PressurePlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_PressurePlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_ActorThatOpen_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_ActorThatOpen = { "ActorThatOpen", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, ActorThatOpen), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_ActorThatOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_ActorThatOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_DoorCloseDelay_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_DoorCloseDelay = { "DoorCloseDelay", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, DoorCloseDelay), METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_DoorCloseDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_DoorCloseDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_MassToOpenDoor_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_MassToOpenDoor = { "MassToOpenDoor", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, MassToOpenDoor), METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_MassToOpenDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_MassToOpenDoor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeRotationDoor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeRotationDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeOpenDoor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_TypeOpenDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_bUseShowRotationYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedOpenDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_SpeedCloseDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYawOpenDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_TargetYawCloseDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_PressurePlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_ActorThatOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_DoorCloseDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_MassToOpenDoor,
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
	IMPLEMENT_CLASS(UOpenDoor, 2700180216);
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
