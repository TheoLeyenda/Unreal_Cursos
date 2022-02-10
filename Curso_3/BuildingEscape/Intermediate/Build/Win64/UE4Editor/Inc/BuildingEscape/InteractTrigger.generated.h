// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AInteractTrigger;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BUILDINGESCAPE_InteractTrigger_generated_h
#error "InteractTrigger.generated.h already included, missing '#pragma once' in InteractTrigger.h"
#endif
#define BUILDINGESCAPE_InteractTrigger_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_28_DELEGATE \
struct InteractTrigger_eventOnCompleteInteractTrigger_Parms \
{ \
	AInteractTrigger* InteractTrigger; \
}; \
static inline void FOnCompleteInteractTrigger_DelegateWrapper(const FMulticastScriptDelegate& OnCompleteInteractTrigger, AInteractTrigger* InteractTrigger) \
{ \
	InteractTrigger_eventOnCompleteInteractTrigger_Parms Parms; \
	Parms.InteractTrigger=InteractTrigger; \
	OnCompleteInteractTrigger.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_21_DELEGATE \
static inline void FOnEndOverlapInteractTrigger_DelegateWrapper(const FMulticastScriptDelegate& OnEndOverlapInteractTrigger) \
{ \
	OnEndOverlapInteractTrigger.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_20_DELEGATE \
static inline void FOnBeginOverlapInteractTrigger_DelegateWrapper(const FMulticastScriptDelegate& OnBeginOverlapInteractTrigger) \
{ \
	OnBeginOverlapInteractTrigger.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractTrigger(); \
	friend struct Z_Construct_UClass_AInteractTrigger_Statics; \
public: \
	DECLARE_CLASS(AInteractTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(AInteractTrigger) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractTrigger*>(this); }


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAInteractTrigger(); \
	friend struct Z_Construct_UClass_AInteractTrigger_Statics; \
public: \
	DECLARE_CLASS(AInteractTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(AInteractTrigger) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractTrigger*>(this); }


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_STANDARD_CONSTRUCTORS \
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


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractTrigger(AInteractTrigger&&); \
	NO_API AInteractTrigger(const AInteractTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractTrigger)


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_23_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_InteractTrigger_h_26_ENHANCED_CONSTRUCTORS \
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
