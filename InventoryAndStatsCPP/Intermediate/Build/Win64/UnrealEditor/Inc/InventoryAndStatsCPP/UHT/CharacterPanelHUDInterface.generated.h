// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/CharacterPanelHUDInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_CharacterPanelHUDInterface_generated_h
#error "CharacterPanelHUDInterface.generated.h already included, missing '#pragma once' in CharacterPanelHUDInterface.h"
#endif
#define INVENTORYANDSTATSCPP_CharacterPanelHUDInterface_generated_h

#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_13_CALLBACK_WRAPPERS
#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterPanelHUDInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterPanelHUDInterface(UCharacterPanelHUDInterface&&); \
	UCharacterPanelHUDInterface(const UCharacterPanelHUDInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterPanelHUDInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterPanelHUDInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterPanelHUDInterface) \
	NO_API virtual ~UCharacterPanelHUDInterface();


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCharacterPanelHUDInterface(); \
	friend struct Z_Construct_UClass_UCharacterPanelHUDInterface_Statics; \
public: \
	DECLARE_CLASS(UCharacterPanelHUDInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(UCharacterPanelHUDInterface)


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICharacterPanelHUDInterface() {} \
public: \
	typedef UCharacterPanelHUDInterface UClassType; \
	typedef ICharacterPanelHUDInterface ThisClass; \
	static void Execute_CloseCharacterPanel(UObject* O); \
	static void Execute_OpenCharacterPanel(UObject* O); \
	static void Execute_RefreshCharacterPanel(UObject* O); \
	static void Execute_SwitchCharacterPanel(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_10_PROLOG
#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_13_CALLBACK_WRAPPERS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UCharacterPanelHUDInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
