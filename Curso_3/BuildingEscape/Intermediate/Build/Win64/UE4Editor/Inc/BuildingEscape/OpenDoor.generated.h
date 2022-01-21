// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define BUILDINGESCAPE_OpenDoor_generated_h

#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TypeRotationDoor() { return STRUCT_OFFSET(UOpenDoor, TypeRotationDoor); } \
	FORCEINLINE static uint32 __PPO__TypeOpenDoor() { return STRUCT_OFFSET(UOpenDoor, TypeOpenDoor); } \
	FORCEINLINE static uint32 __PPO__bUseShowRotationYaw() { return STRUCT_OFFSET(UOpenDoor, bUseShowRotationYaw); } \
	FORCEINLINE static uint32 __PPO__SpeedOpenDoor() { return STRUCT_OFFSET(UOpenDoor, SpeedOpenDoor); } \
	FORCEINLINE static uint32 __PPO__SpeedCloseDoor() { return STRUCT_OFFSET(UOpenDoor, SpeedCloseDoor); } \
	FORCEINLINE static uint32 __PPO__TargetYawOpenDoor() { return STRUCT_OFFSET(UOpenDoor, TargetYawOpenDoor); } \
	FORCEINLINE static uint32 __PPO__TargetYawCloseDoor() { return STRUCT_OFFSET(UOpenDoor, TargetYawCloseDoor); } \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(UOpenDoor, PressurePlate); } \
	FORCEINLINE static uint32 __PPO__ActorThatOpen() { return STRUCT_OFFSET(UOpenDoor, ActorThatOpen); } \
	FORCEINLINE static uint32 __PPO__DoorCloseDelay() { return STRUCT_OFFSET(UOpenDoor, DoorCloseDelay); } \
	FORCEINLINE static uint32 __PPO__MassToOpenDoor() { return STRUCT_OFFSET(UOpenDoor, MassToOpenDoor); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(UOpenDoor, AudioComponent); }


#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_24_PROLOG
#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_INCLASS \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_OpenDoor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UOpenDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_OpenDoor_h


#define FOREACH_ENUM_ETYPEOPENDOOR(op) \
	op(ETypeOpenDoor::TriggerVolumenCollisionPlayer) \
	op(ETypeOpenDoor::TriggerVolumenMassNumber) 

enum class ETypeOpenDoor;
template<> BUILDINGESCAPE_API UEnum* StaticEnum<ETypeOpenDoor>();

#define FOREACH_ENUM_ETYPEROTATIONDOOR(op) \
	op(ETypeRotationDoor::Lerp) \
	op(ETypeRotationDoor::Interpolation) 

enum class ETypeRotationDoor;
template<> BUILDINGESCAPE_API UEnum* StaticEnum<ETypeRotationDoor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
