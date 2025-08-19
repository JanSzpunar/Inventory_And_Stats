// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/Inventory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryItem;
struct FInventoryItemFrontend;
#ifdef INVENTORYANDSTATSCPP_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define INVENTORYANDSTATSCPP_Inventory_generated_h

#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_12_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnItemDivideRequested_DelegateWrapper(const FMulticastScriptDelegate& OnItemDivideRequested, int32 ItemTopLeftCoordinate);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_13_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnItemUseRequested_DelegateWrapper(const FMulticastScriptDelegate& OnItemUseRequested, int32 ItemTopLeftCoordinate);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_14_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnItemRemoveRequested_DelegateWrapper(const FMulticastScriptDelegate& OnItemRemoveRequested, int32 ItemTopLeftCoordinate);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_15_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnTryToEquipItem_DelegateWrapper(const FMulticastScriptDelegate& OnTryToEquipItem, int32 ItemTopLeftCoordinate);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_16_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnDragCancelRequested_DelegateWrapper(const FMulticastScriptDelegate& OnDragCancelRequested, FInventoryItem const& Item, FName PreviousInventoryID);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_17_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnCellPopulated_DelegateWrapper(const FMulticastScriptDelegate& OnCellPopulated, FInventoryItem const& Item);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_18_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnCellCleared_DelegateWrapper(const FMulticastScriptDelegate& OnCellCleared, int32 ItemTopLeftCoordinate);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_19_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnCellUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnCellUpdated, FInventoryItem const& Item);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_20_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnItemDroppedOnGrid_DelegateWrapper(const FMulticastScriptDelegate& OnItemDroppedOnGrid, FInventoryItem& Item, int32 CellDroppedOn, FName InventoryID);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_21_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnDragParametersRequested_DelegateWrapper(const FMulticastScriptDelegate& OnDragParametersRequested, int32 Cell, FName ItemID);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_22_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnItemSizeRequested_DelegateWrapper(const FMulticastScriptDelegate& OnItemSizeRequested, FName ItemID);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_23_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnItemFrontendRequested_DelegateWrapper(const FMulticastScriptDelegate& OnItemFrontendRequested, FInventoryItem const& Item);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_24_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnDragParametersReceived_DelegateWrapper(const FMulticastScriptDelegate& OnDragParametersReceived, bool CanFit, const TSet<int32>& Cells);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_25_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnItemSizeReceived_DelegateWrapper(const FMulticastScriptDelegate& OnItemSizeReceived, FIntPoint Size);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_26_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnItemFrontendReceived_DelegateWrapper(const FMulticastScriptDelegate& OnItemFrontendReceived, FInventoryItemFrontend const& ItemFrontend);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_27_DELEGATE \
INVENTORYANDSTATSCPP_API void FOnInventoryClose_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryClose, FName InventoryID);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetTitle); \
	DECLARE_FUNCTION(execRequestCloseInventory); \
	DECLARE_FUNCTION(execRequestItemFrontend); \
	DECLARE_FUNCTION(execRequestItemSize); \
	DECLARE_FUNCTION(execRequestDragParameters); \
	DECLARE_FUNCTION(execRequestItemDropOnGrid); \
	DECLARE_FUNCTION(execRequestDragCancel); \
	DECLARE_FUNCTION(execRequestItemEquip); \
	DECLARE_FUNCTION(execRequestItemRemove); \
	DECLARE_FUNCTION(execRequestItemUse); \
	DECLARE_FUNCTION(execRequestItemDivide);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventory(UInventory&&); \
	UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory) \
	NO_API virtual ~UInventory();


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_31_PROLOG
#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_34_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
