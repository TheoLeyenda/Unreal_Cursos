// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CURSO_1_Shield_generated_h
#error "Shield.generated.h already included, missing '#pragma once' in Shield.h"
#endif
#define CURSO_1_Shield_generated_h

#define Curso_1_Source_Curso_1_Shield_h_13_SPARSE_DATA
#define Curso_1_Source_Curso_1_Shield_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define Curso_1_Source_Curso_1_Shield_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define Curso_1_Source_Curso_1_Shield_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShield(); \
	friend struct Z_Construct_UClass_AShield_Statics; \
public: \
	DECLARE_CLASS(AShield, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Curso_1"), NO_API) \
	DECLARE_SERIALIZER(AShield)


#define Curso_1_Source_Curso_1_Shield_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAShield(); \
	friend struct Z_Construct_UClass_AShield_Statics; \
public: \
	DECLARE_CLASS(AShield, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Curso_1"), NO_API) \
	DECLARE_SERIALIZER(AShield)


#define Curso_1_Source_Curso_1_Shield_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShield(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShield) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShield); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShield); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShield(AShield&&); \
	NO_API AShield(const AShield&); \
public:


#define Curso_1_Source_Curso_1_Shield_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShield(AShield&&); \
	NO_API AShield(const AShield&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShield); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShield); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShield)


#define Curso_1_Source_Curso_1_Shield_h_13_PRIVATE_PROPERTY_OFFSET
#define Curso_1_Source_Curso_1_Shield_h_10_PROLOG
#define Curso_1_Source_Curso_1_Shield_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_1_Source_Curso_1_Shield_h_13_PRIVATE_PROPERTY_OFFSET \
	Curso_1_Source_Curso_1_Shield_h_13_SPARSE_DATA \
	Curso_1_Source_Curso_1_Shield_h_13_RPC_WRAPPERS \
	Curso_1_Source_Curso_1_Shield_h_13_INCLASS \
	Curso_1_Source_Curso_1_Shield_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Curso_1_Source_Curso_1_Shield_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_1_Source_Curso_1_Shield_h_13_PRIVATE_PROPERTY_OFFSET \
	Curso_1_Source_Curso_1_Shield_h_13_SPARSE_DATA \
	Curso_1_Source_Curso_1_Shield_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Curso_1_Source_Curso_1_Shield_h_13_INCLASS_NO_PURE_DECLS \
	Curso_1_Source_Curso_1_Shield_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSO_1_API UClass* StaticClass<class AShield>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Curso_1_Source_Curso_1_Shield_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
