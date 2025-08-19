// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactables/InteractableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef INVENTORYANDSTATSCPP_InteractableInterface_generated_h
#error "InteractableInterface.generated.h already included, missing '#pragma once' in InteractableInterface.h"
#endif
#define INVENTORYANDSTATSCPP_InteractableInterface_generated_h

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(AActor* Interactor) {}; \
	DECLARE_FUNCTION(execInteract);


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableInterface_h_13_CALLBACK_WRAPPERS
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INVENTORYANDSTATSCPP_API UInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractableInterface(UInteractableInterface&&); \
	UInteractableInterface(const UInteractableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INVENTORYANDSTATSCPP_API, UInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableInterface) \
	INVENTORYANDSTATSCPP_API virtual ~UInteractableInterface();


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractableInterface(); \
	friend struct Z_Construct_UClass_UInteractableInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), INVENTORYANDSTATSCPP_API) \
	DECLARE_SERIALIZER(UInteractableInterface)


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractableInterface() {} \
public: \
	typedef UInteractableInterface UClassType; \
	typedef IInteractableInterface ThisClass; \
	static void Execute_Interact(UObject* O, AActor* Interactor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableInterface_h_10_PROLOG
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableInterface_h_13_CALLBACK_WRAPPERS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UInteractableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
