// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/InventoryController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryItem;
#ifdef INVENTORYANDSTATSCPP_InventoryController_generated_h
#error "InventoryController.generated.h already included, missing '#pragma once' in InventoryController.h"
#endif
#define INVENTORYANDSTATSCPP_InventoryController_generated_h

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryController_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnInventoryClose); \
	DECLARE_FUNCTION(execOnItemFrontendRequested); \
	DECLARE_FUNCTION(execOnItemSizeRequested); \
	DECLARE_FUNCTION(execOnDragParametersRequested); \
	DECLARE_FUNCTION(execOnItemDroppedOnGrid); \
	DECLARE_FUNCTION(execOnDragCancelRequested); \
	DECLARE_FUNCTION(execOnTryToEquipItem); \
	DECLARE_FUNCTION(execOnItemRemoveRequested); \
	DECLARE_FUNCTION(execOnItemUseRequested); \
	DECLARE_FUNCTION(execOnItemDivideRequested);


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryController_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryController(); \
	friend struct Z_Construct_UClass_UInventoryController_Statics; \
public: \
	DECLARE_CLASS(UInventoryController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(UInventoryController) \
	virtual UObject* _getUObject() const override { return const_cast<UInventoryController*>(this); }


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryController_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryController(UInventoryController&&); \
	UInventoryController(const UInventoryController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryController) \
	NO_API virtual ~UInventoryController();


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryController_h_32_PROLOG
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryController_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryController_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryController_h_35_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryController_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UInventoryController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
