// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stats/StatsInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStatsComponent;
struct FBaseStats;
struct FGameplayTag;
#ifdef INVENTORYANDSTATSCPP_StatsInterface_generated_h
#error "StatsInterface.generated.h already included, missing '#pragma once' in StatsInterface.h"
#endif
#define INVENTORYANDSTATSCPP_StatsInterface_generated_h

#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetBaseStats); \
	DECLARE_FUNCTION(execGetBaseStats); \
	DECLARE_FUNCTION(execAddExperience); \
	DECLARE_FUNCTION(execGetStat); \
	DECLARE_FUNCTION(execGetStatsComponent);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INVENTORYANDSTATSCPP_API UStatsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatsInterface(UStatsInterface&&); \
	UStatsInterface(const UStatsInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INVENTORYANDSTATSCPP_API, UStatsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatsInterface) \
	INVENTORYANDSTATSCPP_API virtual ~UStatsInterface();


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStatsInterface(); \
	friend struct Z_Construct_UClass_UStatsInterface_Statics; \
public: \
	DECLARE_CLASS(UStatsInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), INVENTORYANDSTATSCPP_API) \
	DECLARE_SERIALIZER(UStatsInterface)


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStatsInterface() {} \
public: \
	typedef UStatsInterface UClassType; \
	typedef IStatsInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_11_PROLOG
#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UStatsInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
