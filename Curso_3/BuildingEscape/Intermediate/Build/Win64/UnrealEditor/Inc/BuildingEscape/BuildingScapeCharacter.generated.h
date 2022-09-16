// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABuildingScapeCharacter;
#ifdef BUILDINGESCAPE_BuildingScapeCharacter_generated_h
#error "BuildingScapeCharacter.generated.h already included, missing '#pragma once' in BuildingScapeCharacter.h"
#endif
#define BUILDINGESCAPE_BuildingScapeCharacter_generated_h

#define FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerStats_Statics; \
	BUILDINGESCAPE_API static class UScriptStruct* StaticStruct();


template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<struct FPlayerStats>();

#define FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_21_DELEGATE \
static inline void FOnSubstractLife_DelegateWrapper(const FMulticastScriptDelegate& OnSubstractLife) \
{ \
	OnSubstractLife.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_34_DELEGATE \
struct BuildingScapeCharacter_eventOnUpdatePlayerStats_Parms \
{ \
	ABuildingScapeCharacter* BuildingScapeCharacter; \
}; \
static inline void FOnUpdatePlayerStats_DelegateWrapper(const FMulticastScriptDelegate& OnUpdatePlayerStats, ABuildingScapeCharacter* BuildingScapeCharacter) \
{ \
	BuildingScapeCharacter_eventOnUpdatePlayerStats_Parms Parms; \
	Parms.BuildingScapeCharacter=BuildingScapeCharacter; \
	OnUpdatePlayerStats.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_SPARSE_DATA
#define FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddLifes); \
	DECLARE_FUNCTION(execSubstractLifes); \
	DECLARE_FUNCTION(execGetPlayerLifes); \
	DECLARE_FUNCTION(execSetPlayerLifes); \
	DECLARE_FUNCTION(execSubstractPlayerFatness); \
	DECLARE_FUNCTION(execAddPlayerFatness); \
	DECLARE_FUNCTION(execGetPlayerFatness); \
	DECLARE_FUNCTION(execSetPlayerFatness); \
	DECLARE_FUNCTION(execDisableMovement);


#define FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddLifes); \
	DECLARE_FUNCTION(execSubstractLifes); \
	DECLARE_FUNCTION(execGetPlayerLifes); \
	DECLARE_FUNCTION(execSetPlayerLifes); \
	DECLARE_FUNCTION(execSubstractPlayerFatness); \
	DECLARE_FUNCTION(execAddPlayerFatness); \
	DECLARE_FUNCTION(execGetPlayerFatness); \
	DECLARE_FUNCTION(execSetPlayerFatness); \
	DECLARE_FUNCTION(execDisableMovement);


#define FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuildingScapeCharacter(); \
	friend struct Z_Construct_UClass_ABuildingScapeCharacter_Statics; \
public: \
	DECLARE_CLASS(ABuildingScapeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ABuildingScapeCharacter)


#define FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_INCLASS \
private: \
	static void StaticRegisterNativesABuildingScapeCharacter(); \
	friend struct Z_Construct_UClass_ABuildingScapeCharacter_Statics; \
public: \
	DECLARE_CLASS(ABuildingScapeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ABuildingScapeCharacter)


#define FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildingScapeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildingScapeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingScapeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingScapeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingScapeCharacter(ABuildingScapeCharacter&&); \
	NO_API ABuildingScapeCharacter(const ABuildingScapeCharacter&); \
public:


#define FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingScapeCharacter(ABuildingScapeCharacter&&); \
	NO_API ABuildingScapeCharacter(const ABuildingScapeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingScapeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingScapeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuildingScapeCharacter)


#define FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_22_PROLOG
#define FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_RPC_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_INCLASS \
	FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class ABuildingScapeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildingEscape_Source_BuildingEscape_Public_BuildingScapeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
