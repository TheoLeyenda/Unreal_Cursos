// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef CURSO_4_NPCCharacter_generated_h
#error "NPCCharacter.generated.h already included, missing '#pragma once' in NPCCharacter.h"
#endif
#define CURSO_4_NPCCharacter_generated_h

#define Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_SPARSE_DATA
#define Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTargetLost); \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated);


#define Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTargetLost); \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated);


#define Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCCharacter(); \
	friend struct Z_Construct_UClass_ANPCCharacter_Statics; \
public: \
	DECLARE_CLASS(ANPCCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Curso_4"), NO_API) \
	DECLARE_SERIALIZER(ANPCCharacter)


#define Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANPCCharacter(); \
	friend struct Z_Construct_UClass_ANPCCharacter_Statics; \
public: \
	DECLARE_CLASS(ANPCCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Curso_4"), NO_API) \
	DECLARE_SERIALIZER(ANPCCharacter)


#define Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPCCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPCCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCCharacter(ANPCCharacter&&); \
	NO_API ANPCCharacter(const ANPCCharacter&); \
public:


#define Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCCharacter(ANPCCharacter&&); \
	NO_API ANPCCharacter(const ANPCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCCharacter)


#define Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AIPerception() { return STRUCT_OFFSET(ANPCCharacter, AIPerception); } \
	FORCEINLINE static uint32 __PPO__SightConfig() { return STRUCT_OFFSET(ANPCCharacter, SightConfig); } \
	FORCEINLINE static uint32 __PPO__PerceivedActor() { return STRUCT_OFFSET(ANPCCharacter, PerceivedActor); } \
	FORCEINLINE static uint32 __PPO__DelayToTargetLost() { return STRUCT_OFFSET(ANPCCharacter, DelayToTargetLost); }


#define Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_12_PROLOG
#define Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_SPARSE_DATA \
	Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_RPC_WRAPPERS \
	Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_INCLASS \
	Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_SPARSE_DATA \
	Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSO_4_API UClass* StaticClass<class ANPCCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Curso_4_Source_Curso_4_Public_Characters_NPCCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
