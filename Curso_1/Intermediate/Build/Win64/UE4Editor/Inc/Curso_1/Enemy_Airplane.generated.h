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
#ifdef CURSO_1_Enemy_Airplane_generated_h
#error "Enemy_Airplane.generated.h already included, missing '#pragma once' in Enemy_Airplane.h"
#endif
#define CURSO_1_Enemy_Airplane_generated_h

#define Curso_1_Source_Curso_1_Enemy_Airplane_h_13_SPARSE_DATA
#define Curso_1_Source_Curso_1_Enemy_Airplane_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define Curso_1_Source_Curso_1_Enemy_Airplane_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define Curso_1_Source_Curso_1_Enemy_Airplane_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_Airplane(); \
	friend struct Z_Construct_UClass_AEnemy_Airplane_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Airplane, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Curso_1"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Airplane)


#define Curso_1_Source_Curso_1_Enemy_Airplane_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy_Airplane(); \
	friend struct Z_Construct_UClass_AEnemy_Airplane_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Airplane, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Curso_1"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Airplane)


#define Curso_1_Source_Curso_1_Enemy_Airplane_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy_Airplane(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy_Airplane) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Airplane); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Airplane); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Airplane(AEnemy_Airplane&&); \
	NO_API AEnemy_Airplane(const AEnemy_Airplane&); \
public:


#define Curso_1_Source_Curso_1_Enemy_Airplane_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Airplane(AEnemy_Airplane&&); \
	NO_API AEnemy_Airplane(const AEnemy_Airplane&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Airplane); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Airplane); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy_Airplane)


#define Curso_1_Source_Curso_1_Enemy_Airplane_h_13_PRIVATE_PROPERTY_OFFSET
#define Curso_1_Source_Curso_1_Enemy_Airplane_h_10_PROLOG
#define Curso_1_Source_Curso_1_Enemy_Airplane_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_1_Source_Curso_1_Enemy_Airplane_h_13_PRIVATE_PROPERTY_OFFSET \
	Curso_1_Source_Curso_1_Enemy_Airplane_h_13_SPARSE_DATA \
	Curso_1_Source_Curso_1_Enemy_Airplane_h_13_RPC_WRAPPERS \
	Curso_1_Source_Curso_1_Enemy_Airplane_h_13_INCLASS \
	Curso_1_Source_Curso_1_Enemy_Airplane_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Curso_1_Source_Curso_1_Enemy_Airplane_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_1_Source_Curso_1_Enemy_Airplane_h_13_PRIVATE_PROPERTY_OFFSET \
	Curso_1_Source_Curso_1_Enemy_Airplane_h_13_SPARSE_DATA \
	Curso_1_Source_Curso_1_Enemy_Airplane_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Curso_1_Source_Curso_1_Enemy_Airplane_h_13_INCLASS_NO_PURE_DECLS \
	Curso_1_Source_Curso_1_Enemy_Airplane_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSO_1_API UClass* StaticClass<class AEnemy_Airplane>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Curso_1_Source_Curso_1_Enemy_Airplane_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
