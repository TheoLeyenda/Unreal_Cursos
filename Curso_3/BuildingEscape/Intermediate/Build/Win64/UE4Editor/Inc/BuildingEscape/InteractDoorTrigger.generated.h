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
#ifdef BUILDINGESCAPE_InteractDoorTrigger_generated_h
#error "InteractDoorTrigger.generated.h already included, missing '#pragma once' in InteractDoorTrigger.h"
#endif
#define BUILDINGESCAPE_InteractDoorTrigger_generated_h

#define BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractDoorTrigger(); \
	friend struct Z_Construct_UClass_AInteractDoorTrigger_Statics; \
public: \
	DECLARE_CLASS(AInteractDoorTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(AInteractDoorTrigger)


#define BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAInteractDoorTrigger(); \
	friend struct Z_Construct_UClass_AInteractDoorTrigger_Statics; \
public: \
	DECLARE_CLASS(AInteractDoorTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(AInteractDoorTrigger)


#define BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractDoorTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractDoorTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractDoorTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractDoorTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractDoorTrigger(AInteractDoorTrigger&&); \
	NO_API AInteractDoorTrigger(const AInteractDoorTrigger&); \
public:


#define BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractDoorTrigger(AInteractDoorTrigger&&); \
	NO_API AInteractDoorTrigger(const AInteractDoorTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractDoorTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractDoorTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractDoorTrigger)


#define BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxTriggerVolume() { return STRUCT_OFFSET(AInteractDoorTrigger, BoxTriggerVolume); } \
	FORCEINLINE static uint32 __PPO__Doors() { return STRUCT_OFFSET(AInteractDoorTrigger, Doors); } \
	FORCEINLINE static uint32 __PPO__TimeToCloseDoor() { return STRUCT_OFFSET(AInteractDoorTrigger, TimeToCloseDoor); }


#define BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_11_PROLOG
#define BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_INCLASS \
	BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class AInteractDoorTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_InteractDoorTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
