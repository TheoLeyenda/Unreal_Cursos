// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInteractComponent;
class ABuildingScapeCharacter;
#ifdef BUILDINGESCAPE_InteractComponent_generated_h
#error "InteractComponent.generated.h already included, missing '#pragma once' in InteractComponent.h"
#endif
#define BUILDINGESCAPE_InteractComponent_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_11_DELEGATE \
struct _Script_BuildingEscape_eventOnInteract_Parms \
{ \
	UInteractComponent* InteractComponent; \
}; \
static inline void FOnInteract_DelegateWrapper(const FMulticastScriptDelegate& OnInteract, UInteractComponent* InteractComponent) \
{ \
	_Script_BuildingEscape_eventOnInteract_Parms Parms; \
	Parms.InteractComponent=InteractComponent; \
	OnInteract.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInteract);


#define BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteract);


#define BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractComponent(); \
	friend struct Z_Construct_UClass_UInteractComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UInteractComponent)


#define BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUInteractComponent(); \
	friend struct Z_Construct_UClass_UInteractComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UInteractComponent)


#define BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractComponent(UInteractComponent&&); \
	NO_API UInteractComponent(const UInteractComponent&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractComponent(UInteractComponent&&); \
	NO_API UInteractComponent(const UInteractComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractComponent)


#define BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Reach() { return STRUCT_OFFSET(UInteractComponent, Reach); }


#define BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_13_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UInteractComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
