// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Stats/StatsComponent.h"
#include "InventoryAndStatsCPP/Stats/BaseStats.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UStatsComponent();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UStatsConfig_NoRegister();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnExperienceAdded__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnStatsChanged__DelegateSignature();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FBaseStats();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Delegate FOnLevelUp
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnLevelUp_Parms
	{
		int32 NewLevel;
		float CurrentExperience;
		float CurrentExperienceTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Stats/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentExperience;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentExperienceTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnLevelUp_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::NewProp_CurrentExperience = { "CurrentExperience", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnLevelUp_Parms, CurrentExperience), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::NewProp_CurrentExperienceTarget = { "CurrentExperienceTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnLevelUp_Parms, CurrentExperienceTarget), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::NewProp_NewLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::NewProp_CurrentExperience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::NewProp_CurrentExperienceTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnLevelUp__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnLevelUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnLevelUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLevelUp_DelegateWrapper(const FMulticastScriptDelegate& OnLevelUp, int32 NewLevel, float CurrentExperience, float CurrentExperienceTarget)
{
	struct _Script_InventoryAndStatsCPP_eventOnLevelUp_Parms
	{
		int32 NewLevel;
		float CurrentExperience;
		float CurrentExperienceTarget;
	};
	_Script_InventoryAndStatsCPP_eventOnLevelUp_Parms Parms;
	Parms.NewLevel=NewLevel;
	Parms.CurrentExperience=CurrentExperience;
	Parms.CurrentExperienceTarget=CurrentExperienceTarget;
	OnLevelUp.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLevelUp

// Begin Delegate FOnExperienceAdded
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnExperienceAdded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Stats/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnExperienceAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnExperienceAdded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnExperienceAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnExperienceAdded__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnExperienceAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnExperienceAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnExperienceAdded_DelegateWrapper(const FMulticastScriptDelegate& OnExperienceAdded)
{
	OnExperienceAdded.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnExperienceAdded

// Begin Delegate FOnStatsChanged
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnStatsChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Stats/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnStatsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnStatsChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnStatsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnStatsChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnStatsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnStatsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStatsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatsChanged)
{
	OnStatsChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnStatsChanged

// Begin Class UStatsComponent Function AddOnePointToStat
struct Z_Construct_UFunction_UStatsComponent_AddOnePointToStat_Statics
{
	struct StatsComponent_eventAddOnePointToStat_Parms
	{
		FGameplayTag Stat;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Stats/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_AddOnePointToStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventAddOnePointToStat_Parms, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_AddOnePointToStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_AddOnePointToStat_Statics::NewProp_Stat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_AddOnePointToStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_AddOnePointToStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "AddOnePointToStat", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_AddOnePointToStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_AddOnePointToStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_AddOnePointToStat_Statics::StatsComponent_eventAddOnePointToStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_AddOnePointToStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_AddOnePointToStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_AddOnePointToStat_Statics::StatsComponent_eventAddOnePointToStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_AddOnePointToStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_AddOnePointToStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execAddOnePointToStat)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOnePointToStat(Z_Param_Stat);
	P_NATIVE_END;
}
// End Class UStatsComponent Function AddOnePointToStat

// Begin Class UStatsComponent Function CanUpgradeStat
struct Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics
{
	struct StatsComponent_eventCanUpgradeStat_Parms
	{
		FGameplayTag Stat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Stats/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventCanUpgradeStat_Parms, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StatsComponent_eventCanUpgradeStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatsComponent_eventCanUpgradeStat_Parms), &Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "CanUpgradeStat", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::StatsComponent_eventCanUpgradeStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::StatsComponent_eventCanUpgradeStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_CanUpgradeStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_CanUpgradeStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execCanUpgradeStat)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanUpgradeStat(Z_Param_Stat);
	P_NATIVE_END;
}
// End Class UStatsComponent Function CanUpgradeStat

// Begin Class UStatsComponent Function GetCharacterPanelInfo
struct Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics
{
	struct StatsComponent_eventGetCharacterPanelInfo_Parms
	{
		FText Name;
		int32 Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats|UMG" },
		{ "ModuleRelativePath", "Stats/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetCharacterPanelInfo_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetCharacterPanelInfo_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "GetCharacterPanelInfo", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics::StatsComponent_eventGetCharacterPanelInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics::StatsComponent_eventGetCharacterPanelInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execGetCharacterPanelInfo)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCharacterPanelInfo(Z_Param_Out_Name,Z_Param_Out_Level);
	P_NATIVE_END;
}
// End Class UStatsComponent Function GetCharacterPanelInfo

// Begin Class UStatsComponent Function GetFrontendExperience
struct Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics
{
	struct StatsComponent_eventGetFrontendExperience_Parms
	{
		float CurrentExperience;
		float TargetExperience;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats|UMG" },
		{ "ModuleRelativePath", "Stats/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentExperience;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetExperience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics::NewProp_CurrentExperience = { "CurrentExperience", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetFrontendExperience_Parms, CurrentExperience), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics::NewProp_TargetExperience = { "TargetExperience", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetFrontendExperience_Parms, TargetExperience), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics::NewProp_CurrentExperience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics::NewProp_TargetExperience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "GetFrontendExperience", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics::StatsComponent_eventGetFrontendExperience_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics::StatsComponent_eventGetFrontendExperience_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_GetFrontendExperience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_GetFrontendExperience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execGetFrontendExperience)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_CurrentExperience);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TargetExperience);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFrontendExperience(Z_Param_Out_CurrentExperience,Z_Param_Out_TargetExperience);
	P_NATIVE_END;
}
// End Class UStatsComponent Function GetFrontendExperience

// Begin Class UStatsComponent
void UStatsComponent::StaticRegisterNativesUStatsComponent()
{
	UClass* Class = UStatsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOnePointToStat", &UStatsComponent::execAddOnePointToStat },
		{ "CanUpgradeStat", &UStatsComponent::execCanUpgradeStat },
		{ "GetCharacterPanelInfo", &UStatsComponent::execGetCharacterPanelInfo },
		{ "GetFrontendExperience", &UStatsComponent::execGetFrontendExperience },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatsComponent);
UClass* Z_Construct_UClass_UStatsComponent_NoRegister()
{
	return UStatsComponent::StaticClass();
}
struct Z_Construct_UClass_UStatsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Stats/StatsComponent.h" },
		{ "ModuleRelativePath", "Stats/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsConfig_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Stats/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseStats_MetaData[] = {
		{ "Category", "Stats" },
		{ "EditCondition", "IsNotPlayer" },
		{ "ModuleRelativePath", "Stats/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelUp_MetaData[] = {
		{ "Category", "Stats|UMG" },
		{ "ModuleRelativePath", "Stats/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnExperienceAdded_MetaData[] = {
		{ "Category", "Stats|UMG" },
		{ "ModuleRelativePath", "Stats/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStatsChanged_MetaData[] = {
		{ "Category", "Stats|UMG" },
		{ "ModuleRelativePath", "Stats/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsNotPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Stats/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_StatsConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseStats;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelUp;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExperienceAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatsChanged;
	static void NewProp_IsNotPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsNotPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsComponent_AddOnePointToStat, "AddOnePointToStat" }, // 2216867177
		{ &Z_Construct_UFunction_UStatsComponent_CanUpgradeStat, "CanUpgradeStat" }, // 1699917546
		{ &Z_Construct_UFunction_UStatsComponent_GetCharacterPanelInfo, "GetCharacterPanelInfo" }, // 1377917305
		{ &Z_Construct_UFunction_UStatsComponent_GetFrontendExperience, "GetFrontendExperience" }, // 4226682300
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_StatsConfig = { "StatsConfig", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, StatsConfig), Z_Construct_UClass_UClass, Z_Construct_UClass_UStatsConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsConfig_MetaData), NewProp_StatsConfig_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_BaseStats = { "BaseStats", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, BaseStats), Z_Construct_UScriptStruct_FBaseStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseStats_MetaData), NewProp_BaseStats_MetaData) }; // 3185252591
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnLevelUp = { "OnLevelUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnLevelUp), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnLevelUp__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLevelUp_MetaData), NewProp_OnLevelUp_MetaData) }; // 1255324146
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnExperienceAdded = { "OnExperienceAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnExperienceAdded), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnExperienceAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnExperienceAdded_MetaData), NewProp_OnExperienceAdded_MetaData) }; // 1977536740
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStatsChanged = { "OnStatsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnStatsChanged), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnStatsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStatsChanged_MetaData), NewProp_OnStatsChanged_MetaData) }; // 1878241547
void Z_Construct_UClass_UStatsComponent_Statics::NewProp_IsNotPlayer_SetBit(void* Obj)
{
	((UStatsComponent*)Obj)->IsNotPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_IsNotPlayer = { "IsNotPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatsComponent), &Z_Construct_UClass_UStatsComponent_Statics::NewProp_IsNotPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsNotPlayer_MetaData), NewProp_IsNotPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_StatsConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_BaseStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnLevelUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnExperienceAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStatsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_IsNotPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsComponent_Statics::ClassParams = {
	&UStatsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsComponent()
{
	if (!Z_Registration_Info_UClass_UStatsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsComponent.OuterSingleton, Z_Construct_UClass_UStatsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsComponent.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UStatsComponent>()
{
	return UStatsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsComponent);
UStatsComponent::~UStatsComponent() {}
// End Class UStatsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsComponent, UStatsComponent::StaticClass, TEXT("UStatsComponent"), &Z_Registration_Info_UClass_UStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsComponent), 707984787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_3908410995(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
