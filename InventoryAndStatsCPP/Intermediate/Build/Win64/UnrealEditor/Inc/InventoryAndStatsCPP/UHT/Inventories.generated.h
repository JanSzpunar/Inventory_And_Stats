// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/Inventories.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_Inventories_generated_h
#error "Inventories.generated.h already included, missing '#pragma once' in Inventories.h"
#endif
#define INVENTORYANDSTATSCPP_Inventories_generated_h

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventories_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventories(); \
	friend struct Z_Construct_UClass_UInventories_Statics; \
public: \
	DECLARE_CLASS(UInventories, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(UInventories)


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventories_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventories(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventories(UInventories&&); \
	UInventories(const UInventories&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventories); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventories); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventories) \
	NO_API virtual ~UInventories();


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventories_h_15_PROLOG
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventories_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventories_h_18_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventories_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UInventories>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventories_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
