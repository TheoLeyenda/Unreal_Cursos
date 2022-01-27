// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define BUILDINGESCAPE_Door_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_Door_h_21_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_Door_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateTimelineComp);


#define BuildingEscape_Source_BuildingEscape_Public_Door_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateTimelineComp);


#define BuildingEscape_Source_BuildingEscape_Public_Door_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define BuildingEscape_Source_BuildingEscape_Public_Door_h_21_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define BuildingEscape_Source_BuildingEscape_Public_Door_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_Door_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define BuildingEscape_Source_BuildingEscape_Public_Door_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StateDoor() { return STRUCT_OFFSET(ADoor, StateDoor); } \
	FORCEINLINE static uint32 __PPO__bUseInitCheckDoor() { return STRUCT_OFFSET(ADoor, bUseInitCheckDoor); } \
	FORCEINLINE static uint32 __PPO__DoorFrame() { return STRUCT_OFFSET(ADoor, DoorFrame); } \
	FORCEINLINE static uint32 __PPO__Door() { return STRUCT_OFFSET(ADoor, Door); } \
	FORCEINLINE static uint32 __PPO__DoorTimelineComp() { return STRUCT_OFFSET(ADoor, DoorTimelineComp); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(ADoor, AudioComponent); }


#define BuildingEscape_Source_BuildingEscape_Public_Door_h_18_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_Door_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_Door_h_21_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_Door_h_21_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_Door_h_21_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_Door_h_21_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_Door_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_Door_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_Door_h_21_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_Door_h_21_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_Door_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_Door_h_21_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_Door_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_Door_h


#define FOREACH_ENUM_ESTATEDOOR(op) \
	op(EStateDoor::Closed) \
	op(EStateDoor::Opened) 

enum class EStateDoor;
template<> BUILDINGESCAPE_API UEnum* StaticEnum<EStateDoor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
