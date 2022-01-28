// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define BUILDINGESCAPE_InteractInterface_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BUILDINGESCAPE_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUILDINGESCAPE_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BUILDINGESCAPE_API UInteractInterface(UInteractInterface&&); \
	BUILDINGESCAPE_API UInteractInterface(const UInteractInterface&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BUILDINGESCAPE_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BUILDINGESCAPE_API UInteractInterface(UInteractInterface&&); \
	BUILDINGESCAPE_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUILDINGESCAPE_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface)


#define BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BuildingEscape"), BUILDINGESCAPE_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_GENERATED_UINTERFACE_BODY() \
	BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_GENERATED_UINTERFACE_BODY() \
	BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_11_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
