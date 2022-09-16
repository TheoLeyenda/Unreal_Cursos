// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACheckPointTrigger;
#ifdef BUILDINGESCAPE_CheckPointTrigger_generated_h
#error "CheckPointTrigger.generated.h already included, missing '#pragma once' in CheckPointTrigger.h"
#endif
#define BUILDINGESCAPE_CheckPointTrigger_generated_h

#define FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_20_DELEGATE \
struct CheckPointTrigger_eventOnCheckPointTrigger_Parms \
{ \
	ACheckPointTrigger* CheckPointTrigger; \
}; \
static inline void FOnCheckPointTrigger_DelegateWrapper(const FMulticastScriptDelegate& OnCheckPointTrigger, ACheckPointTrigger* CheckPointTrigger) \
{ \
	CheckPointTrigger_eventOnCheckPointTrigger_Parms Parms; \
	Parms.CheckPointTrigger=CheckPointTrigger; \
	OnCheckPointTrigger.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_SPARSE_DATA
#define FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_RPC_WRAPPERS
#define FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACheckPointTrigger(); \
	friend struct Z_Construct_UClass_ACheckPointTrigger_Statics; \
public: \
	DECLARE_CLASS(ACheckPointTrigger, AInteractTrigger, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ACheckPointTrigger)


#define FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACheckPointTrigger(); \
	friend struct Z_Construct_UClass_ACheckPointTrigger_Statics; \
public: \
	DECLARE_CLASS(ACheckPointTrigger, AInteractTrigger, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ACheckPointTrigger)


#define FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACheckPointTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACheckPointTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckPointTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckPointTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckPointTrigger(ACheckPointTrigger&&); \
	NO_API ACheckPointTrigger(const ACheckPointTrigger&); \
public:


#define FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACheckPointTrigger() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckPointTrigger(ACheckPointTrigger&&); \
	NO_API ACheckPointTrigger(const ACheckPointTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckPointTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckPointTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACheckPointTrigger)


#define FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_15_PROLOG
#define FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_RPC_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_INCLASS \
	FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_INCLASS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class ACheckPointTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
