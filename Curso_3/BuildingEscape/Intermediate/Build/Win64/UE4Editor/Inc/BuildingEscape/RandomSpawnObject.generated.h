// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_RandomSpawnObject_generated_h
#error "RandomSpawnObject.generated.h already included, missing '#pragma once' in RandomSpawnObject.h"
#endif
#define BUILDINGESCAPE_RandomSpawnObject_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARandomSpawnObject(); \
	friend struct Z_Construct_UClass_ARandomSpawnObject_Statics; \
public: \
	DECLARE_CLASS(ARandomSpawnObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ARandomSpawnObject)


#define BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARandomSpawnObject(); \
	friend struct Z_Construct_UClass_ARandomSpawnObject_Statics; \
public: \
	DECLARE_CLASS(ARandomSpawnObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ARandomSpawnObject)


#define BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARandomSpawnObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARandomSpawnObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARandomSpawnObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARandomSpawnObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARandomSpawnObject(ARandomSpawnObject&&); \
	NO_API ARandomSpawnObject(const ARandomSpawnObject&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARandomSpawnObject(ARandomSpawnObject&&); \
	NO_API ARandomSpawnObject(const ARandomSpawnObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARandomSpawnObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARandomSpawnObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARandomSpawnObject)


#define BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bRandomSpawnOnBeginPlay() { return STRUCT_OFFSET(ARandomSpawnObject, bRandomSpawnOnBeginPlay); } \
	FORCEINLINE static uint32 __PPO__Spawners() { return STRUCT_OFFSET(ARandomSpawnObject, Spawners); }


#define BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_10_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class ARandomSpawnObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_RandomSpawnObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
