// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/InventoryInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventory;
struct FAddItemResult;
struct FInventoryItem;
struct FRemoveItemResult;
#ifdef INVENTORYANDSTATSCPP_InventoryInterface_generated_h
#error "InventoryInterface.generated.h already included, missing '#pragma once' in InventoryInterface.h"
#endif
#define INVENTORYANDSTATSCPP_InventoryInterface_generated_h

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAddItemResult_Statics; \
	INVENTORYANDSTATSCPP_API static class UScriptStruct* StaticStruct();


template<> INVENTORYANDSTATSCPP_API UScriptStruct* StaticStruct<struct FAddItemResult>();

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoveItemResult_Statics; \
	INVENTORYANDSTATSCPP_API static class UScriptStruct* StaticStruct();


template<> INVENTORYANDSTATSCPP_API UScriptStruct* StaticStruct<struct FRemoveItemResult>();

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestInventory); \
	DECLARE_FUNCTION(execHasItemInInventory); \
	DECLARE_FUNCTION(execRemoveItemFromInventory); \
	DECLARE_FUNCTION(execAddItemToInventory);


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INVENTORYANDSTATSCPP_API UInventoryInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryInterface(UInventoryInterface&&); \
	UInventoryInterface(const UInventoryInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INVENTORYANDSTATSCPP_API, UInventoryInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryInterface) \
	INVENTORYANDSTATSCPP_API virtual ~UInventoryInterface();


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_40_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInventoryInterface(); \
	friend struct Z_Construct_UClass_UInventoryInterface_Statics; \
public: \
	DECLARE_CLASS(UInventoryInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), INVENTORYANDSTATSCPP_API) \
	DECLARE_SERIALIZER(UInventoryInterface)


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_40_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_40_GENERATED_UINTERFACE_BODY() \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_40_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_40_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInventoryInterface() {} \
public: \
	typedef UInventoryInterface UClassType; \
	typedef IInventoryInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_37_PROLOG
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_40_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UInventoryInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
