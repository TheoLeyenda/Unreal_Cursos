// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BUILDINGESCAPE_DetectDestroyActorComponent_generated_h
#error "DetectDestroyActorComponent.generated.h already included, missing '#pragma once' in DetectDestroyActorComponent.h"
#endif
#define BUILDINGESCAPE_DetectDestroyActorComponent_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_14_DELEGATE \
struct DetectDestroyActorComponent_eventOnDestroyActor_Parms \
{ \
	TSubclassOf<AActor>  ActorDestroyedClass; \
	int32 ID; \
}; \
static inline void FOnDestroyActor_DelegateWrapper(const FMulticastScriptDelegate& OnDestroyActor, TSubclassOf<AActor>  ActorDestroyedClass, int32 ID) \
{ \
	DetectDestroyActorComponent_eventOnDestroyActor_Parms Parms; \
	Parms.ActorDestroyedClass=ActorDestroyedClass; \
	Parms.ID=ID; \
	OnDestroyActor.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDetectDestroyActorComponent(); \
	friend struct Z_Construct_UClass_UDetectDestroyActorComponent_Statics; \
public: \
	DECLARE_CLASS(UDetectDestroyActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UDetectDestroyActorComponent)


#define BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDetectDestroyActorComponent(); \
	friend struct Z_Construct_UClass_UDetectDestroyActorComponent_Statics; \
public: \
	DECLARE_CLASS(UDetectDestroyActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UDetectDestroyActorComponent)


#define BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDetectDestroyActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetectDestroyActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetectDestroyActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetectDestroyActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDetectDestroyActorComponent(UDetectDestroyActorComponent&&); \
	NO_API UDetectDestroyActorComponent(const UDetectDestroyActorComponent&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDetectDestroyActorComponent(UDetectDestroyActorComponent&&); \
	NO_API UDetectDestroyActorComponent(const UDetectDestroyActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetectDestroyActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetectDestroyActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDetectDestroyActorComponent)


#define BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_10_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UDetectDestroyActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
