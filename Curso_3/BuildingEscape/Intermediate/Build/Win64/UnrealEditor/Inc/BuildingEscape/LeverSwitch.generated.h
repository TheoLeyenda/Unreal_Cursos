// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_LeverSwitch_generated_h
#error "LeverSwitch.generated.h already included, missing '#pragma once' in LeverSwitch.h"
#endif
#define BUILDINGESCAPE_LeverSwitch_generated_h

#define FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_SPARSE_DATA
#define FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateTimelineComp);


#define FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateTimelineComp);


#define FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALeverSwitch(); \
	friend struct Z_Construct_UClass_ALeverSwitch_Statics; \
public: \
	DECLARE_CLASS(ALeverSwitch, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ALeverSwitch) \
	virtual UObject* _getUObject() const override { return const_cast<ALeverSwitch*>(this); }


#define FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_INCLASS \
private: \
	static void StaticRegisterNativesALeverSwitch(); \
	friend struct Z_Construct_UClass_ALeverSwitch_Statics; \
public: \
	DECLARE_CLASS(ALeverSwitch, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ALeverSwitch) \
	virtual UObject* _getUObject() const override { return const_cast<ALeverSwitch*>(this); }


#define FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALeverSwitch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALeverSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALeverSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALeverSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALeverSwitch(ALeverSwitch&&); \
	NO_API ALeverSwitch(const ALeverSwitch&); \
public:


#define FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALeverSwitch(ALeverSwitch&&); \
	NO_API ALeverSwitch(const ALeverSwitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALeverSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALeverSwitch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALeverSwitch)


#define FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_21_PROLOG
#define FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_RPC_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_INCLASS \
	FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_INCLASS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class ALeverSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitch_h


#define FOREACH_ENUM_EPOSITIVESHIWTCH(op) \
	op(EPositiveShiwtch::Up) \
	op(EPositiveShiwtch::Down) 

enum class EPositiveShiwtch;
template<> BUILDINGESCAPE_API UEnum* StaticEnum<EPositiveShiwtch>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
