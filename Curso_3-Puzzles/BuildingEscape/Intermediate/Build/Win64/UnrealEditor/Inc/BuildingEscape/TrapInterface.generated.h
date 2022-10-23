// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_TrapInterface_generated_h
#error "TrapInterface.generated.h already included, missing '#pragma once' in TrapInterface.h"
#endif
#define BUILDINGESCAPE_TrapInterface_generated_h

#define FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_SPARSE_DATA
#define FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_RPC_WRAPPERS
#define FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BUILDINGESCAPE_API UTrapInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrapInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUILDINGESCAPE_API, UTrapInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrapInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BUILDINGESCAPE_API UTrapInterface(UTrapInterface&&); \
	BUILDINGESCAPE_API UTrapInterface(const UTrapInterface&); \
public:


#define FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BUILDINGESCAPE_API UTrapInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BUILDINGESCAPE_API UTrapInterface(UTrapInterface&&); \
	BUILDINGESCAPE_API UTrapInterface(const UTrapInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUILDINGESCAPE_API, UTrapInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrapInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrapInterface)


#define FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTrapInterface(); \
	friend struct Z_Construct_UClass_UTrapInterface_Statics; \
public: \
	DECLARE_CLASS(UTrapInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BuildingEscape"), BUILDINGESCAPE_API) \
	DECLARE_SERIALIZER(UTrapInterface)


#define FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITrapInterface() {} \
public: \
	typedef UTrapInterface UClassType; \
	typedef ITrapInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITrapInterface() {} \
public: \
	typedef UTrapInterface UClassType; \
	typedef ITrapInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_10_PROLOG
#define FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_RPC_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UTrapInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
