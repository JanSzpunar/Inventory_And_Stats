// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/InventoryHUDInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_InventoryHUDInterface_generated_h
#error "InventoryHUDInterface.generated.h already included, missing '#pragma once' in InventoryHUDInterface.h"
#endif
#define INVENTORYANDSTATSCPP_InventoryHUDInterface_generated_h

#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_13_CALLBACK_WRAPPERS
#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryHUDInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryHUDInterface(UInventoryHUDInterface&&); \
	UInventoryHUDInterface(const UInventoryHUDInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryHUDInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryHUDInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryHUDInterface) \
	NO_API virtual ~UInventoryHUDInterface();


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInventoryHUDInterface(); \
	friend struct Z_Construct_UClass_UInventoryHUDInterface_Statics; \
public: \
	DECLARE_CLASS(UInventoryHUDInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(UInventoryHUDInterface)


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInventoryHUDInterface() {} \
public: \
	typedef UInventoryHUDInterface UClassType; \
	typedef IInventoryHUDInterface ThisClass; \
	static void Execute_CloseInventory(UObject* O, FName Inventory); \
	static void Execute_OpenInventory(UObject* O, FName Inventory); \
	static void Execute_SwitchInventory(UObject* O, FName Inventory); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_10_PROLOG
#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_13_CALLBACK_WRAPPERS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UInventoryHUDInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
