// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_ObjectSpawner_generated_h
#error "ObjectSpawner.generated.h already included, missing '#pragma once' in ObjectSpawner.h"
#endif
#define BUILDINGESCAPE_ObjectSpawner_generated_h

#define FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObjectSpawn_Statics; \
	BUILDINGESCAPE_API static class UScriptStruct* StaticStruct();


template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<struct FObjectSpawn>();

#define FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_SPARSE_DATA
#define FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendTimerSpawnObject);


#define FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendTimerSpawnObject);


#define FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObjectSpawner(); \
	friend struct Z_Construct_UClass_AObjectSpawner_Statics; \
public: \
	DECLARE_CLASS(AObjectSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(AObjectSpawner)


#define FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAObjectSpawner(); \
	friend struct Z_Construct_UClass_AObjectSpawner_Statics; \
public: \
	DECLARE_CLASS(AObjectSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(AObjectSpawner)


#define FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObjectSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObjectSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjectSpawner(AObjectSpawner&&); \
	NO_API AObjectSpawner(const AObjectSpawner&); \
public:


#define FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjectSpawner(AObjectSpawner&&); \
	NO_API AObjectSpawner(const AObjectSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObjectSpawner)


#define FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_20_PROLOG
#define FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_RPC_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_INCLASS \
	FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_INCLASS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class AObjectSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildingEscape_Source_BuildingEscape_Public_ObjectSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
