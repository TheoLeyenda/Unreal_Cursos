// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_TimerInterface_generated_h
#error "TimerInterface.generated.h already included, missing '#pragma once' in TimerInterface.h"
#endif
#define BUILDINGESCAPE_TimerInterface_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BUILDINGESCAPE_API UTimerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUILDINGESCAPE_API, UTimerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BUILDINGESCAPE_API UTimerInterface(UTimerInterface&&); \
	BUILDINGESCAPE_API UTimerInterface(const UTimerInterface&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BUILDINGESCAPE_API UTimerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BUILDINGESCAPE_API UTimerInterface(UTimerInterface&&); \
	BUILDINGESCAPE_API UTimerInterface(const UTimerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUILDINGESCAPE_API, UTimerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimerInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimerInterface)


#define BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTimerInterface(); \
	friend struct Z_Construct_UClass_UTimerInterface_Statics; \
public: \
	DECLARE_CLASS(UTimerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BuildingEscape"), BUILDINGESCAPE_API) \
	DECLARE_SERIALIZER(UTimerInterface)


#define BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_GENERATED_UINTERFACE_BODY() \
	BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_GENERATED_UINTERFACE_BODY() \
	BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITimerInterface() {} \
public: \
	typedef UTimerInterface UClassType; \
	typedef ITimerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITimerInterface() {} \
public: \
	typedef UTimerInterface UClassType; \
	typedef ITimerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_10_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UTimerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
