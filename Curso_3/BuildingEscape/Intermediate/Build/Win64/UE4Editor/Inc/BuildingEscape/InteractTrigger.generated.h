// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_InteractTrigger_generated_h
#error "InteractTrigger.generated.h already included, missing '#pragma once' in InteractTrigger.h"
#endif
#define BUILDINGESCAPE_InteractTrigger_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractTrigger(); \
	friend struct Z_Construct_UClass_AInteractTrigger_Statics; \
public: \
	DECLARE_CLASS(AInteractTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(AInteractTrigger) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractTrigger*>(this); }


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAInteractTrigger(); \
	friend struct Z_Construct_UClass_AInteractTrigger_Statics; \
public: \
	DECLARE_CLASS(AInteractTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(AInteractTrigger) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractTrigger*>(this); }


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractTrigger(AInteractTrigger&&); \
	NO_API AInteractTrigger(const AInteractTrigger&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractTrigger(AInteractTrigger&&); \
	NO_API AInteractTrigger(const AInteractTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractTrigger)


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxTriggerVolume() { return STRUCT_OFFSET(AInteractTrigger, BoxTriggerVolume); }


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_18_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class AInteractTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h


#define FOREACH_ENUM_ELASTSTATEOBJECTOVERLAP(op) \
	op(ELastStateObjectOverlap::BeginOverlap) \
	op(ELastStateObjectOverlap::EndOverlap) 

enum class ELastStateObjectOverlap;
template<> BUILDINGESCAPE_API UEnum* StaticEnum<ELastStateObjectOverlap>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
