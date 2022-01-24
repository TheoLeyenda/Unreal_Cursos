// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BUILDINGESCAPE_DoorInteractTrigger_generated_h
#error "DoorInteractTrigger.generated.h already included, missing '#pragma once' in DoorInteractTrigger.h"
#endif
#define BUILDINGESCAPE_DoorInteractTrigger_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorInteractTrigger(); \
	friend struct Z_Construct_UClass_ADoorInteractTrigger_Statics; \
public: \
	DECLARE_CLASS(ADoorInteractTrigger, AInteractTrigger, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ADoorInteractTrigger)


#define BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_INCLASS \
private: \
	static void StaticRegisterNativesADoorInteractTrigger(); \
	friend struct Z_Construct_UClass_ADoorInteractTrigger_Statics; \
public: \
	DECLARE_CLASS(ADoorInteractTrigger, AInteractTrigger, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ADoorInteractTrigger)


#define BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorInteractTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoorInteractTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorInteractTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorInteractTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorInteractTrigger(ADoorInteractTrigger&&); \
	NO_API ADoorInteractTrigger(const ADoorInteractTrigger&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorInteractTrigger() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorInteractTrigger(ADoorInteractTrigger&&); \
	NO_API ADoorInteractTrigger(const ADoorInteractTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorInteractTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorInteractTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoorInteractTrigger)


#define BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Doors() { return STRUCT_OFFSET(ADoorInteractTrigger, Doors); } \
	FORCEINLINE static uint32 __PPO__TimeToCloseDoor() { return STRUCT_OFFSET(ADoorInteractTrigger, TimeToCloseDoor); }


#define BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_13_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class ADoorInteractTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
