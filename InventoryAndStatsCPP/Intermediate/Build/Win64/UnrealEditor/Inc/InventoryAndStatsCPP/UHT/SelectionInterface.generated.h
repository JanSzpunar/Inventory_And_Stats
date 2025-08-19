// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_SelectionInterface_generated_h
#error "SelectionInterface.generated.h already included, missing '#pragma once' in SelectionInterface.h"
#endif
#define INVENTORYANDSTATSCPP_SelectionInterface_generated_h

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Deselected_Implementation() {}; \
	virtual void Selected_Implementation() {}; \
	DECLARE_FUNCTION(execDeselected); \
	DECLARE_FUNCTION(execSelected);


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_10_CALLBACK_WRAPPERS
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INVENTORYANDSTATSCPP_API USelectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USelectionInterface(USelectionInterface&&); \
	USelectionInterface(const USelectionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INVENTORYANDSTATSCPP_API, USelectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectionInterface) \
	INVENTORYANDSTATSCPP_API virtual ~USelectionInterface();


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSelectionInterface(); \
	friend struct Z_Construct_UClass_USelectionInterface_Statics; \
public: \
	DECLARE_CLASS(USelectionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), INVENTORYANDSTATSCPP_API) \
	DECLARE_SERIALIZER(USelectionInterface)


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISelectionInterface() {} \
public: \
	typedef USelectionInterface UClassType; \
	typedef ISelectionInterface ThisClass; \
	static void Execute_Deselected(UObject* O); \
	static void Execute_Selected(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_7_PROLOG
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_10_CALLBACK_WRAPPERS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class USelectionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
