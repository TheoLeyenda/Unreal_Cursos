// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso_1/SpaceShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceShooterGameMode() {}
// Cross Module References
	CURSO_1_API UClass* Z_Construct_UClass_ASpaceShooterGameMode_NoRegister();
	CURSO_1_API UClass* Z_Construct_UClass_ASpaceShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Curso_1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	CURSO_1_API UClass* Z_Construct_UClass_AEnemy_Cohete_NoRegister();
	CURSO_1_API UClass* Z_Construct_UClass_AShield_PowerUp_NoRegister();
	CURSO_1_API UClass* Z_Construct_UClass_ADobleCannon_PowerUp_NoRegister();
	CURSO_1_API UClass* Z_Construct_UClass_ANuke_PowerUp_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpaceShooterGameMode::execChangeMenuWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass);
		P_NATIVE_END;
	}
	void ASpaceShooterGameMode::StaticRegisterNativesASpaceShooterGameMode()
	{
		UClass* Class = ASpaceShooterGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMenuWidget", &ASpaceShooterGameMode::execChangeMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpaceShooterGameMode_ChangeMenuWidget_Statics
	{
		struct SpaceShooterGameMode_eventChangeMenuWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASpaceShooterGameMode_ChangeMenuWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpaceShooterGameMode_eventChangeMenuWidget_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceShooterGameMode_ChangeMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceShooterGameMode_ChangeMenuWidget_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceShooterGameMode_ChangeMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpaceShooterGameMode - UMG Game" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceShooterGameMode_ChangeMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceShooterGameMode, nullptr, "ChangeMenuWidget", nullptr, nullptr, sizeof(SpaceShooterGameMode_eventChangeMenuWidget_Parms), Z_Construct_UFunction_ASpaceShooterGameMode_ChangeMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceShooterGameMode_ChangeMenuWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceShooterGameMode_ChangeMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceShooterGameMode_ChangeMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceShooterGameMode_ChangeMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpaceShooterGameMode_ChangeMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpaceShooterGameMode_NoRegister()
	{
		return ASpaceShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreForEnemy_CoheteDie_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScoreForEnemy_CoheteDie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MIN_TIME_SPAWN_ENEMY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MIN_TIME_SPAWN_ENEMY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAX_TIME_SPAWN_ENEMY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAX_TIME_SPAWN_ENEMY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TIME_TO_MAX_DIFICULTY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TIME_TO_MAX_DIFICULTY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MIN_TIME_SPAWN_POWERUP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MIN_TIME_SPAWN_POWERUP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAX_TIME_SPAWN_POWERUP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAX_TIME_SPAWN_POWERUP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MIN_POS_X_SPAWN_POWERUP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MIN_POS_X_SPAWN_POWERUP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAX_POS_X_SPAWN_POWERUP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAX_POS_X_SPAWN_POWERUP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MIN_POS_Y_SPAWN_POWERUP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MIN_POS_Y_SPAWN_POWERUP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAX_POS_Y_SPAWN_POWERUP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAX_POS_Y_SPAWN_POWERUP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MIN_POS_Z_SPAWN_POWERUP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MIN_POS_Z_SPAWN_POWERUP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAX_POS_Z_SPAWN_POWERUP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAX_POS_Z_SPAWN_POWERUP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy_CoheteBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Enemy_CoheteBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shield_PowerUpBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Shield_PowerUpBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DobleCannon_PowerUpBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DobleCannon_PowerUpBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nuke_PowerUpBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Nuke_PowerUpBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartingWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpaceShooterGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpaceShooterGameMode_ChangeMenuWidget, "ChangeMenuWidget" }, // 2830503218
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpaceShooterGameMode.h" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_ScoreForEnemy_CoheteDie_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Score" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_ScoreForEnemy_CoheteDie = { "ScoreForEnemy_CoheteDie", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, ScoreForEnemy_CoheteDie), METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_ScoreForEnemy_CoheteDie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_ScoreForEnemy_CoheteDie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_TIME_SPAWN_ENEMY_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning Enemys" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_TIME_SPAWN_ENEMY = { "MIN_TIME_SPAWN_ENEMY", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, MIN_TIME_SPAWN_ENEMY), METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_TIME_SPAWN_ENEMY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_TIME_SPAWN_ENEMY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_TIME_SPAWN_ENEMY_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning Enemys" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_TIME_SPAWN_ENEMY = { "MAX_TIME_SPAWN_ENEMY", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, MAX_TIME_SPAWN_ENEMY), METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_TIME_SPAWN_ENEMY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_TIME_SPAWN_ENEMY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_TIME_TO_MAX_DIFICULTY_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning Enemys" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_TIME_TO_MAX_DIFICULTY = { "TIME_TO_MAX_DIFICULTY", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, TIME_TO_MAX_DIFICULTY), METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_TIME_TO_MAX_DIFICULTY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_TIME_TO_MAX_DIFICULTY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_TIME_SPAWN_POWERUP_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning PowerUps" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_TIME_SPAWN_POWERUP = { "MIN_TIME_SPAWN_POWERUP", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, MIN_TIME_SPAWN_POWERUP), METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_TIME_SPAWN_POWERUP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_TIME_SPAWN_POWERUP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_TIME_SPAWN_POWERUP_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning PowerUps" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_TIME_SPAWN_POWERUP = { "MAX_TIME_SPAWN_POWERUP", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, MAX_TIME_SPAWN_POWERUP), METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_TIME_SPAWN_POWERUP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_TIME_SPAWN_POWERUP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_X_SPAWN_POWERUP_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning PowerUps" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_X_SPAWN_POWERUP = { "MIN_POS_X_SPAWN_POWERUP", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, MIN_POS_X_SPAWN_POWERUP), METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_X_SPAWN_POWERUP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_X_SPAWN_POWERUP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_X_SPAWN_POWERUP_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning PowerUps" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_X_SPAWN_POWERUP = { "MAX_POS_X_SPAWN_POWERUP", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, MAX_POS_X_SPAWN_POWERUP), METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_X_SPAWN_POWERUP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_X_SPAWN_POWERUP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_Y_SPAWN_POWERUP_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning PowerUps" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_Y_SPAWN_POWERUP = { "MIN_POS_Y_SPAWN_POWERUP", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, MIN_POS_Y_SPAWN_POWERUP), METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_Y_SPAWN_POWERUP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_Y_SPAWN_POWERUP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_Y_SPAWN_POWERUP_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning PowerUps" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_Y_SPAWN_POWERUP = { "MAX_POS_Y_SPAWN_POWERUP", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, MAX_POS_Y_SPAWN_POWERUP), METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_Y_SPAWN_POWERUP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_Y_SPAWN_POWERUP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_Z_SPAWN_POWERUP_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning PowerUps" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_Z_SPAWN_POWERUP = { "MIN_POS_Z_SPAWN_POWERUP", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, MIN_POS_Z_SPAWN_POWERUP), METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_Z_SPAWN_POWERUP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_Z_SPAWN_POWERUP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_Z_SPAWN_POWERUP_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning PowerUps" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_Z_SPAWN_POWERUP = { "MAX_POS_Z_SPAWN_POWERUP", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, MAX_POS_Z_SPAWN_POWERUP), METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_Z_SPAWN_POWERUP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_Z_SPAWN_POWERUP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Enemy_CoheteBlueprint_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning Enemys" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Enemy_CoheteBlueprint = { "Enemy_CoheteBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, Enemy_CoheteBlueprint), Z_Construct_UClass_AEnemy_Cohete_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Enemy_CoheteBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Enemy_CoheteBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Shield_PowerUpBlueprint_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning PowerUps" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Shield_PowerUpBlueprint = { "Shield_PowerUpBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, Shield_PowerUpBlueprint), Z_Construct_UClass_AShield_PowerUp_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Shield_PowerUpBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Shield_PowerUpBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_DobleCannon_PowerUpBlueprint_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning PowerUps" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_DobleCannon_PowerUpBlueprint = { "DobleCannon_PowerUpBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, DobleCannon_PowerUpBlueprint), Z_Construct_UClass_ADobleCannon_PowerUp_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_DobleCannon_PowerUpBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_DobleCannon_PowerUpBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Nuke_PowerUpBlueprint_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - Spawning PowerUps" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Nuke_PowerUpBlueprint = { "Nuke_PowerUpBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, Nuke_PowerUpBlueprint), Z_Construct_UClass_ANuke_PowerUp_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Nuke_PowerUpBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Nuke_PowerUpBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_StartingWidgetClass_MetaData[] = {
		{ "Category", "SpaceShooterGameMode - UMG Game" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_StartingWidgetClass = { "StartingWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, StartingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_StartingWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_StartingWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_CurrentWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpaceShooterGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_ScoreForEnemy_CoheteDie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_TIME_SPAWN_ENEMY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_TIME_SPAWN_ENEMY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_TIME_TO_MAX_DIFICULTY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_TIME_SPAWN_POWERUP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_TIME_SPAWN_POWERUP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_X_SPAWN_POWERUP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_X_SPAWN_POWERUP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_Y_SPAWN_POWERUP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_Y_SPAWN_POWERUP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MIN_POS_Z_SPAWN_POWERUP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_MAX_POS_Z_SPAWN_POWERUP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Enemy_CoheteBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Shield_PowerUpBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_DobleCannon_PowerUpBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_Nuke_PowerUpBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_StartingWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceShooterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::ClassParams = {
		&ASpaceShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpaceShooterGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpaceShooterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceShooterGameMode, 435128588);
	template<> CURSO_1_API UClass* StaticClass<ASpaceShooterGameMode>()
	{
		return ASpaceShooterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceShooterGameMode(Z_Construct_UClass_ASpaceShooterGameMode, &ASpaceShooterGameMode::StaticClass, TEXT("/Script/Curso_1"), TEXT("ASpaceShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
