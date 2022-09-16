// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BUILDINGESCAPE_BaseTNT_generated_h
#error "BaseTNT.generated.h already included, missing '#pragma once' in BaseTNT.h"
#endif
#define BUILDINGESCAPE_BaseTNT_generated_h

#define FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_16_DELEGATE \
struct BaseTNT_eventOnDestroyOtherObject_Parms \
{ \
	AActor* Actor; \
}; \
static inline void FOnDestroyOtherObject_DelegateWrapper(const FMulticastScriptDelegate& OnDestroyOtherObject, AActor* Actor) \
{ \
	BaseTNT_eventOnDestroyOtherObject_Parms Parms; \
	Parms.Actor=Actor; \
	OnDestroyOtherObject.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_SPARSE_DATA
#define FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseTNT(); \
	friend struct Z_Construct_UClass_ABaseTNT_Statics; \
public: \
	DECLARE_CLASS(ABaseTNT, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ABaseTNT)


#define FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseTNT(); \
	friend struct Z_Construct_UClass_ABaseTNT_Statics; \
public: \
	DECLARE_CLASS(ABaseTNT, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ABaseTNT)


#define FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseTNT(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseTNT) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseTNT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseTNT); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseTNT(ABaseTNT&&); \
	NO_API ABaseTNT(const ABaseTNT&); \
public:


#define FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseTNT(ABaseTNT&&); \
	NO_API ABaseTNT(const ABaseTNT&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseTNT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseTNT); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseTNT)


#define FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_12_PROLOG
#define FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_RPC_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_INCLASS \
	FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_INCLASS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class ABaseTNT>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildingEscape_Source_BuildingEscape_Public_BaseTNT_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
