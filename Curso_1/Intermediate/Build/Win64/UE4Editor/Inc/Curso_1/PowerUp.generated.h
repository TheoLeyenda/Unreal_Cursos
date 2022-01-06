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
#ifdef CURSO_1_PowerUp_generated_h
#error "PowerUp.generated.h already included, missing '#pragma once' in PowerUp.h"
#endif
#define CURSO_1_PowerUp_generated_h

#define Curso_1_Source_Curso_1_PowerUp_h_20_SPARSE_DATA
#define Curso_1_Source_Curso_1_PowerUp_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define Curso_1_Source_Curso_1_PowerUp_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define Curso_1_Source_Curso_1_PowerUp_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPowerUp(); \
	friend struct Z_Construct_UClass_APowerUp_Statics; \
public: \
	DECLARE_CLASS(APowerUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Curso_1"), NO_API) \
	DECLARE_SERIALIZER(APowerUp)


#define Curso_1_Source_Curso_1_PowerUp_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAPowerUp(); \
	friend struct Z_Construct_UClass_APowerUp_Statics; \
public: \
	DECLARE_CLASS(APowerUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Curso_1"), NO_API) \
	DECLARE_SERIALIZER(APowerUp)


#define Curso_1_Source_Curso_1_PowerUp_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APowerUp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APowerUp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerUp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerUp(APowerUp&&); \
	NO_API APowerUp(const APowerUp&); \
public:


#define Curso_1_Source_Curso_1_PowerUp_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerUp(APowerUp&&); \
	NO_API APowerUp(const APowerUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APowerUp)


#define Curso_1_Source_Curso_1_PowerUp_h_20_PRIVATE_PROPERTY_OFFSET
#define Curso_1_Source_Curso_1_PowerUp_h_17_PROLOG
#define Curso_1_Source_Curso_1_PowerUp_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_1_Source_Curso_1_PowerUp_h_20_PRIVATE_PROPERTY_OFFSET \
	Curso_1_Source_Curso_1_PowerUp_h_20_SPARSE_DATA \
	Curso_1_Source_Curso_1_PowerUp_h_20_RPC_WRAPPERS \
	Curso_1_Source_Curso_1_PowerUp_h_20_INCLASS \
	Curso_1_Source_Curso_1_PowerUp_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Curso_1_Source_Curso_1_PowerUp_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_1_Source_Curso_1_PowerUp_h_20_PRIVATE_PROPERTY_OFFSET \
	Curso_1_Source_Curso_1_PowerUp_h_20_SPARSE_DATA \
	Curso_1_Source_Curso_1_PowerUp_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Curso_1_Source_Curso_1_PowerUp_h_20_INCLASS_NO_PURE_DECLS \
	Curso_1_Source_Curso_1_PowerUp_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSO_1_API UClass* StaticClass<class APowerUp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Curso_1_Source_Curso_1_PowerUp_h


#define FOREACH_ENUM_TYPEPOWERUP(op) \
	op(TypePowerUp::DelayEffect) \
	op(TypePowerUp::InstantEffect) 

enum class TypePowerUp : uint8;
template<> CURSO_1_API UEnum* StaticEnum<TypePowerUp>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
