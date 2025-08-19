// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/Character_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_Character_Base_generated_h
#error "Character_Base.generated.h already included, missing '#pragma once' in Character_Base.h"
#endif
#define INVENTORYANDSTATSCPP_Character_Base_generated_h

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Character_Base_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacter_Base(); \
	friend struct Z_Construct_UClass_ACharacter_Base_Statics; \
public: \
	DECLARE_CLASS(ACharacter_Base, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(ACharacter_Base) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacter_Base*>(this); }


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Character_Base_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACharacter_Base(ACharacter_Base&&); \
	ACharacter_Base(const ACharacter_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter_Base); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACharacter_Base) \
	NO_API virtual ~ACharacter_Base();


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Character_Base_h_10_PROLOG
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Character_Base_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Character_Base_h_13_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Character_Base_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class ACharacter_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Character_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
