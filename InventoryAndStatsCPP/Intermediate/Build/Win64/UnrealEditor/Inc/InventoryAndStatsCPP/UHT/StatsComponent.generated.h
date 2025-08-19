// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stats/StatsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef INVENTORYANDSTATSCPP_StatsComponent_generated_h
#error "StatsComponent.generated.h already included, missing '#pragma once' in StatsComponent.h"
#endif
#define INVENTORYANDSTATSCPP_StatsComponent_generated_h

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_12_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnLevelUp_DelegateWrapper(const FMulticastScriptDelegate& OnLevelUp, int32 NewLevel, float CurrentExperience, float CurrentExperienceTarget);


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_13_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnExperienceAdded_DelegateWrapper(const FMulticastScriptDelegate& OnExperienceAdded);


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_14_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnStatsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatsChanged);


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanUpgradeStat); \
	DECLARE_FUNCTION(execAddOnePointToStat); \
	DECLARE_FUNCTION(execGetFrontendExperience); \
	DECLARE_FUNCTION(execGetCharacterPanelInfo);


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsComponent(); \
	friend struct Z_Construct_UClass_UStatsComponent_Statics; \
public: \
	DECLARE_CLASS(UStatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(UStatsComponent)


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatsComponent(UStatsComponent&&); \
	UStatsComponent(const UStatsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatsComponent) \
	NO_API virtual ~UStatsComponent();


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_16_PROLOG
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UStatsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
