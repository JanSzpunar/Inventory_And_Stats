// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stats/StatsConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_StatsConfig_generated_h
#error "StatsConfig.generated.h already included, missing '#pragma once' in StatsConfig.h"
#endif
#define INVENTORYANDSTATSCPP_StatsConfig_generated_h

#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfig_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsConfig(); \
	friend struct Z_Construct_UClass_UStatsConfig_Statics; \
public: \
	DECLARE_CLASS(UStatsConfig, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(UStatsConfig)


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfig_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatsConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatsConfig(UStatsConfig&&); \
	UStatsConfig(const UStatsConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsConfig); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatsConfig) \
	NO_API virtual ~UStatsConfig();


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfig_h_13_PROLOG
#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfig_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfig_h_16_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfig_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UStatsConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
