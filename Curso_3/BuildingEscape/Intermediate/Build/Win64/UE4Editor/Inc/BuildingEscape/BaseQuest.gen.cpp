// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/BaseQuest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseQuest() {}
// Cross Module References
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseQuest();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseQuest_NoRegister();
	BUILDINGESCAPE_API UEnum* Z_Construct_UEnum_BuildingEscape_EQuestState();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStructInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UObjetive_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FDataPlayer();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuest, nullptr, "OnUpdateQuest__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics
	{
		struct BaseQuest_eventOnFinishQuest_Parms
		{
			UBaseQuest* Quest;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseQuest_eventOnFinishQuest_Parms, Quest), Z_Construct_UClass_UBaseQuest_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuest, nullptr, "OnFinishQuest__DelegateSignature", nullptr, nullptr, sizeof(BaseQuest_eventOnFinishQuest_Parms), Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EQuestState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BuildingEscape_EQuestState, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("EQuestState"));
		}
		return Singleton;
	}
	template<> BUILDINGESCAPE_API UEnum* StaticEnum<EQuestState>()
	{
		return EQuestState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestState(EQuestState_StaticEnum, TEXT("/Script/BuildingEscape"), TEXT("EQuestState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BuildingEscape_EQuestState_Hash() { return 1536849686U; }
	UEnum* Z_Construct_UEnum_BuildingEscape_EQuestState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestState"), 0, Get_Z_Construct_UEnum_BuildingEscape_EQuestState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Available", (int64)Available },
				{ "InProgress", (int64)InProgress },
				{ "Cancelled", (int64)Cancelled },
				{ "Completed", (int64)Completed },
				{ "Failed", (int64)Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Available.Name", "Available" },
				{ "BlueprintType", "true" },
				{ "Cancelled.Name", "Cancelled" },
				{ "Completed.Name", "Completed" },
				{ "Failed.Name", "Failed" },
				{ "InProgress.Name", "InProgress" },
				{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape,
				nullptr,
				"EQuestState",
				"EQuestState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FQuestStructInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuestStructInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FQuestStructInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDINGESCAPE_API uint32 Get_Z_Construct_UScriptStruct_FQuestStructInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestStructInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("QuestStructInfo"), sizeof(FQuestStructInfo), Get_Z_Construct_UScriptStruct_FQuestStructInfo_Hash());
	}
	return Singleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FQuestStructInfo>()
{
	return FQuestStructInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestStructInfo(FQuestStructInfo::StaticStruct, TEXT("/Script/BuildingEscape"), TEXT("QuestStructInfo"), false, nullptr, nullptr);
static struct FScriptStruct_BuildingEscape_StaticRegisterNativesFQuestStructInfo
{
	FScriptStruct_BuildingEscape_StaticRegisterNativesFQuestStructInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestStructInfo")),new UScriptStruct::TCppStructOps<FQuestStructInfo>);
	}
} ScriptStruct_BuildingEscape_StaticRegisterNativesFQuestStructInfo;
	struct Z_Construct_UScriptStruct_FQuestStructInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QuestState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objetives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objetives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objetives;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QuetsActivatedToCompleteIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuetsActivatedToCompleteIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuetsActivatedToCompleteIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStructInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*USTRUCT(BlueprintType)\nstruct FActionQuest\n{\n\x09GENERATED_BODY()\n\x09\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite)\n\x09""FString Description;\n\n\x09UPROPERTY(VisibleAnywhere, BlueprintReadWrite)\n\x09""bool bDoneAccion = false;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""bool bUseIdentificationObject = true;\n\x09\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite)\n\x09""FDataPlayer RequiredDataPlayer;\n\x09\n\x09void CheckObjetiveComplete(FDataPlayer CompareData)\n\x09{\n\x09\x09""bool bInventoryCondition = true;\n\x09\x09\n\x09\x09//FString Toto = FString::SanitizeFloat(0.5f) + FString(\"321\");\n\x09\x09\n\x09\x09//FString A = FString(\"\");\n\x09\x09//FString B = FString(\"\");\n\x09\x09//A.Append(B);\n\x09\x09//A = A + B;\n\x09\x09 \n\x09\x09\n\x09\x09UE_LOG(LogTemp, Warning, TEXT(\"ACTUALICE ALIMENTO\"));\n\x09\x09\n\x09\x09""FString StringCompareData = FString(\"(\") + FString::SanitizeFloat(CompareData.Fatness);\n\x09\x09""FString StringRequiredDataPlayer =  FString::SanitizeFloat(RequiredDataPlayer.Fatness) + FString(\")\");\n\x09\x09\n\x09\x09RequiredDataPlayer.TextProgressFatness =  StringCompareData + FString(\"/\") + StringRequiredDataPlayer;\n\x09\x09\n\x09\x09StringCompareData = FString(\"(\") + FString::SanitizeFloat(CompareData.Lifes);\n\x09\x09StringRequiredDataPlayer =  FString::SanitizeFloat(RequiredDataPlayer.Lifes) + FString(\")\");\n\n\x09\x09RequiredDataPlayer.TextProgressLifes = StringCompareData + FString(\"/\") + StringRequiredDataPlayer;\n\x09\x09\n\x09\x09if(RequiredDataPlayer.NeedItems.Num() > 0 && CompareData.InventoryComponent)\n\x09\x09{\n\x09\x09\x09""for(int i = 0; i < RequiredDataPlayer.NeedItems.Num(); i++)\n\x09\x09\x09{\n\x09\x09\x09\x09""bInventoryCondition = CompareData.InventoryComponent->CheckHaveItem(RequiredDataPlayer.NeedItems[i]);\n\x09\x09\x09}\n\x09\x09}\n\n\x09\x09""bool bIdentificationObject = (CompareData.LastInteractActorInfo.ID == RequiredDataPlayer.LastInteractActorInfo.ID \n\x09\x09\x09&& CompareData.LastInteractActorInfo.ActorBlueprint == RequiredDataPlayer.LastInteractActorInfo.ActorBlueprint) || !bUseIdentificationObject;\n\x09\x09\n\x09\x09if(CompareData.Fatness >= RequiredDataPlayer.Fatness\n\x09\x09\x09&& CompareData.Lifes >= RequiredDataPlayer.Lifes\n\x09\x09\x09&& bIdentificationObject\n\x09\x09\x09&& bInventoryCondition)\n\x09\x09{\n\x09\x09\x09""bDoneAccion = true;\n\x09\x09}\n\x09}\n\x09\n};*/" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FActionQuest\n{\n       GENERATED_BODY()\n\n       UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       FString Description;\n\n       UPROPERTY(VisibleAnywhere, BlueprintReadWrite)\n       bool bDoneAccion = false;\n\n       UPROPERTY(EditAnywhere)\n       bool bUseIdentificationObject = true;\n\n       UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       FDataPlayer RequiredDataPlayer;\n\n       void CheckObjetiveComplete(FDataPlayer CompareData)\n       {\n               bool bInventoryCondition = true;\n\n               //FString Toto = FString::SanitizeFloat(0.5f) + FString(\"321\");\n\n               //FString A = FString(\"\");\n               //FString B = FString(\"\");\n               //A.Append(B);\n               //A = A + B;\n\n\n               UE_LOG(LogTemp, Warning, TEXT(\"ACTUALICE ALIMENTO\"));\n\n               FString StringCompareData = FString(\"(\") + FString::SanitizeFloat(CompareData.Fatness);\n               FString StringRequiredDataPlayer =  FString::SanitizeFloat(RequiredDataPlayer.Fatness) + FString(\")\");\n\n               RequiredDataPlayer.TextProgressFatness =  StringCompareData + FString(\"/\") + StringRequiredDataPlayer;\n\n               StringCompareData = FString(\"(\") + FString::SanitizeFloat(CompareData.Lifes);\n               StringRequiredDataPlayer =  FString::SanitizeFloat(RequiredDataPlayer.Lifes) + FString(\")\");\n\n               RequiredDataPlayer.TextProgressLifes = StringCompareData + FString(\"/\") + StringRequiredDataPlayer;\n\n               if(RequiredDataPlayer.NeedItems.Num() > 0 && CompareData.InventoryComponent)\n               {\n                       for(int i = 0; i < RequiredDataPlayer.NeedItems.Num(); i++)\n                       {\n                               bInventoryCondition = CompareData.InventoryComponent->CheckHaveItem(RequiredDataPlayer.NeedItems[i]);\n                       }\n               }\n\n               bool bIdentificationObject = (CompareData.LastInteractActorInfo.ID == RequiredDataPlayer.LastInteractActorInfo.ID\n                       && CompareData.LastInteractActorInfo.ActorBlueprint == RequiredDataPlayer.LastInteractActorInfo.ActorBlueprint) || !bUseIdentificationObject;\n\n               if(CompareData.Fatness >= RequiredDataPlayer.Fatness\n                       && CompareData.Lifes >= RequiredDataPlayer.Lifes\n                       && bIdentificationObject\n                       && bInventoryCondition)\n               {\n                       bDoneAccion = true;\n               }\n       }\n\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestStructInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "QuestStructInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStructInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "QuestStructInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStructInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuestState_MetaData[] = {
		{ "Category", "QuestStructInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuestState = { "QuestState", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStructInfo, QuestState), Z_Construct_UEnum_BuildingEscape_EQuestState, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuestState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuestState_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Objetives_Inner = { "Objetives", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObjetive_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Objetives_MetaData[] = {
		{ "Category", "QuestStructInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Objetives = { "Objetives", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStructInfo, Objetives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Objetives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Objetives_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuetsActivatedToCompleteIDs_Inner = { "QuetsActivatedToCompleteIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuetsActivatedToCompleteIDs_MetaData[] = {
		{ "Category", "QuestStructInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuetsActivatedToCompleteIDs = { "QuetsActivatedToCompleteIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStructInfo, QuetsActivatedToCompleteIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuetsActivatedToCompleteIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuetsActivatedToCompleteIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestStructInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuestState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Objetives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Objetives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuetsActivatedToCompleteIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuetsActivatedToCompleteIDs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"QuestStructInfo",
		sizeof(FQuestStructInfo),
		alignof(FQuestStructInfo),
		Z_Construct_UScriptStruct_FQuestStructInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestStructInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestStructInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestStructInfo"), sizeof(FQuestStructInfo), Get_Z_Construct_UScriptStruct_FQuestStructInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestStructInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestStructInfo_Hash() { return 2554777448U; }
	DEFINE_FUNCTION(UBaseQuest::execCheckStatus)
	{
		P_GET_STRUCT(FDataPlayer,Z_Param_DataPlayer);
		P_GET_UBOOL(Z_Param_bForceSendData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckStatus(Z_Param_DataPlayer,Z_Param_bForceSendData);
		P_NATIVE_END;
	}
	void UBaseQuest::StaticRegisterNativesUBaseQuest()
	{
		UClass* Class = UBaseQuest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckStatus", &UBaseQuest::execCheckStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics
	{
		struct BaseQuest_eventCheckStatus_Parms
		{
			FDataPlayer DataPlayer;
			bool bForceSendData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataPlayer;
		static void NewProp_bForceSendData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceSendData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::NewProp_DataPlayer = { "DataPlayer", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseQuest_eventCheckStatus_Parms, DataPlayer), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::NewProp_bForceSendData_SetBit(void* Obj)
	{
		((BaseQuest_eventCheckStatus_Parms*)Obj)->bForceSendData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::NewProp_bForceSendData = { "bForceSendData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseQuest_eventCheckStatus_Parms), &Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::NewProp_bForceSendData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::NewProp_DataPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::NewProp_bForceSendData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuest, nullptr, "CheckStatus", nullptr, nullptr, sizeof(BaseQuest_eventCheckStatus_Parms), Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuest_CheckStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseQuest_NoRegister()
	{
		return UBaseQuest::StaticClass();
	}
	struct Z_Construct_UClass_UBaseQuest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinishQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUpdateQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestStructInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestStructInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseQuest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseQuest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseQuest_CheckStatus, "CheckStatus" }, // 1649584415
		{ &Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature, "OnFinishQuest__DelegateSignature" }, // 2472174788
		{ &Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature, "OnUpdateQuest__DelegateSignature" }, // 2091616101
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestSystem/BaseQuest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnFinishQuest_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnFinishQuest = { "OnFinishQuest", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseQuest, OnFinishQuest), Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnFinishQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnFinishQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnUpdateQuest_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnUpdateQuest = { "OnUpdateQuest", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseQuest, OnUpdateQuest), Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnUpdateQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnUpdateQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuest_Statics::NewProp_QuestStructInfo_MetaData[] = {
		{ "Category", "BaseQuest" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseQuest_Statics::NewProp_QuestStructInfo = { "QuestStructInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseQuest, QuestStructInfo), Z_Construct_UScriptStruct_FQuestStructInfo, METADATA_PARAMS(Z_Construct_UClass_UBaseQuest_Statics::NewProp_QuestStructInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuest_Statics::NewProp_QuestStructInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnFinishQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnUpdateQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuest_Statics::NewProp_QuestStructInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseQuest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseQuest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseQuest_Statics::ClassParams = {
		&UBaseQuest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseQuest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuest_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseQuest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseQuest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseQuest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseQuest, 2252918945);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UBaseQuest>()
	{
		return UBaseQuest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseQuest(Z_Construct_UClass_UBaseQuest, &UBaseQuest::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UBaseQuest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseQuest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
