// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/GameInstance_InventoryAndStats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_GameInstance_InventoryAndStats_generated_h
#error "GameInstance_InventoryAndStats.generated.h already included, missing '#pragma once' in GameInstance_InventoryAndStats.h"
#endif
#define INVENTORYANDSTATSCPP_GameInstance_InventoryAndStats_generated_h

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameInstance_InventoryAndStats_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInstance_InventoryAndStats(); \
	friend struct Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics; \
public: \
	DECLARE_CLASS(UGameInstance_InventoryAndStats, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(UGameInstance_InventoryAndStats) \
	virtual UObject* _getUObject() const override { return const_cast<UGameInstance_InventoryAndStats*>(this); }


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameInstance_InventoryAndStats_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInstance_InventoryAndStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameInstance_InventoryAndStats(UGameInstance_InventoryAndStats&&); \
	UGameInstance_InventoryAndStats(const UGameInstance_InventoryAndStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInstance_InventoryAndStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstance_InventoryAndStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInstance_InventoryAndStats) \
	NO_API virtual ~UGameInstance_InventoryAndStats();


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameInstance_InventoryAndStats_h_16_PROLOG
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameInstance_InventoryAndStats_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameInstance_InventoryAndStats_h_19_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameInstance_InventoryAndStats_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UGameInstance_InventoryAndStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameInstance_InventoryAndStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
