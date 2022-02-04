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

#define BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BUILDINGESCAPE_API UTrapInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrapInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUILDINGESCAPE_API, UTrapInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrapInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BUILDINGESCAPE_API UTrapInterface(UTrapInterface&&); \
	BUILDINGESCAPE_API UTrapInterface(const UTrapInterface&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BUILDINGESCAPE_API UTrapInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BUILDINGESCAPE_API UTrapInterface(UTrapInterface&&); \
	BUILDINGESCAPE_API UTrapInterface(const UTrapInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUILDINGESCAPE_API, UTrapInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrapInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrapInterface)


#define BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTrapInterface(); \
	friend struct Z_Construct_UClass_UTrapInterface_Statics; \
public: \
	DECLARE_CLASS(UTrapInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BuildingEscape"), BUILDINGESCAPE_API) \
	DECLARE_SERIALIZER(UTrapInterface)


#define BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_GENERATED_UINTERFACE_BODY() \
	BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_GENERATED_UINTERFACE_BODY() \
	BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITrapInterface() {} \
public: \
	typedef UTrapInterface UClassType; \
	typedef ITrapInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITrapInterface() {} \
public: \
	typedef UTrapInterface UClassType; \
	typedef ITrapInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_10_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UTrapInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
