// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_Trap_generated_h
#error "Trap.generated.h already included, missing '#pragma once' in Trap.h"
#endif
#define BUILDINGESCAPE_Trap_generated_h

#define FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_SPARSE_DATA
#define FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_RPC_WRAPPERS
#define FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrap(); \
	friend struct Z_Construct_UClass_ATrap_Statics; \
public: \
	DECLARE_CLASS(ATrap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ATrap) \
	virtual UObject* _getUObject() const override { return const_cast<ATrap*>(this); }


#define FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATrap(); \
	friend struct Z_Construct_UClass_ATrap_Statics; \
public: \
	DECLARE_CLASS(ATrap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ATrap) \
	virtual UObject* _getUObject() const override { return const_cast<ATrap*>(this); }


#define FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrap(ATrap&&); \
	NO_API ATrap(const ATrap&); \
public:


#define FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrap(ATrap&&); \
	NO_API ATrap(const ATrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrap)


#define FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_11_PROLOG
#define FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_RPC_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_INCLASS \
	FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_INCLASS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class ATrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
