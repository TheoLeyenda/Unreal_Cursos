// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CURSO_4_NPCController_generated_h
#error "NPCController.generated.h already included, missing '#pragma once' in NPCController.h"
#endif
#define CURSO_4_NPCController_generated_h

#define Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_SPARSE_DATA
#define Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateHasLineOfSightKey); \
	DECLARE_FUNCTION(execUpdateTargetActorKey);


#define Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateHasLineOfSightKey); \
	DECLARE_FUNCTION(execUpdateTargetActorKey);


#define Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCController(); \
	friend struct Z_Construct_UClass_ANPCController_Statics; \
public: \
	DECLARE_CLASS(ANPCController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Curso_4"), NO_API) \
	DECLARE_SERIALIZER(ANPCController)


#define Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANPCController(); \
	friend struct Z_Construct_UClass_ANPCController_Statics; \
public: \
	DECLARE_CLASS(ANPCController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Curso_4"), NO_API) \
	DECLARE_SERIALIZER(ANPCController)


#define Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPCController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPCController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCController(ANPCController&&); \
	NO_API ANPCController(const ANPCController&); \
public:


#define Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPCController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCController(ANPCController&&); \
	NO_API ANPCController(const ANPCController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPCController)


#define Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetActorName() { return STRUCT_OFFSET(ANPCController, TargetActorName); } \
	FORCEINLINE static uint32 __PPO__HasLineOfSightName() { return STRUCT_OFFSET(ANPCController, HasLineOfSightName); }


#define Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_12_PROLOG
#define Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_PRIVATE_PROPERTY_OFFSET \
	Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_SPARSE_DATA \
	Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_RPC_WRAPPERS \
	Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_INCLASS \
	Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_PRIVATE_PROPERTY_OFFSET \
	Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_SPARSE_DATA \
	Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_INCLASS_NO_PURE_DECLS \
	Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSO_4_API UClass* StaticClass<class ANPCController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Curso_4_Source_Curso_4_Public_Characters_Controllers_NPCController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
