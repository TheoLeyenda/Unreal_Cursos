// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_BuildingEscapeGameMode_generated_h
#error "BuildingEscapeGameMode.generated.h already included, missing '#pragma once' in BuildingEscapeGameMode.h"
#endif
#define BUILDINGESCAPE_BuildingEscapeGameMode_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_10_DELEGATE \
static inline void FOnGameOverActivate_DelegateWrapper(const FMulticastScriptDelegate& OnGameOverActivate) \
{ \
	OnGameOverActivate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadMap); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execCheckPlayerDead);


#define BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadMap); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execCheckPlayerDead);


#define BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuildingEscapeGameMode(); \
	friend struct Z_Construct_UClass_ABuildingEscapeGameMode_Statics; \
public: \
	DECLARE_CLASS(ABuildingEscapeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ABuildingEscapeGameMode)


#define BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABuildingEscapeGameMode(); \
	friend struct Z_Construct_UClass_ABuildingEscapeGameMode_Statics; \
public: \
	DECLARE_CLASS(ABuildingEscapeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ABuildingEscapeGameMode)


#define BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildingEscapeGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildingEscapeGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingEscapeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingEscapeGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingEscapeGameMode(ABuildingEscapeGameMode&&); \
	NO_API ABuildingEscapeGameMode(const ABuildingEscapeGameMode&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildingEscapeGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingEscapeGameMode(ABuildingEscapeGameMode&&); \
	NO_API ABuildingEscapeGameMode(const ABuildingEscapeGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingEscapeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingEscapeGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildingEscapeGameMode)


#define BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_11_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class ABuildingEscapeGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_BuildingEscapeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
