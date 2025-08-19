// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Framework/PlayerController_InventoryStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerController_InventoryStats() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_APlayerController_InventoryStats();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_APlayerController_InventoryStats_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UCharactersController_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UCharactersControllerInterface_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInteractableController_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class APlayerController_InventoryStats Function OnPossessRequested
struct Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested_Statics
{
	struct PlayerController_InventoryStats_eventOnPossessRequested_Parms
	{
		APawn* NewPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Framework/PlayerController_InventoryStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_InventoryStats_eventOnPossessRequested_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested_Statics::NewProp_NewPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController_InventoryStats, nullptr, "OnPossessRequested", nullptr, nullptr, Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested_Statics::PlayerController_InventoryStats_eventOnPossessRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested_Statics::PlayerController_InventoryStats_eventOnPossessRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController_InventoryStats::execOnPossessRequested)
{
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPossessRequested(Z_Param_NewPawn);
	P_NATIVE_END;
}
// End Class APlayerController_InventoryStats Function OnPossessRequested

// Begin Class APlayerController_InventoryStats Function OnUnPossessRequested
struct Z_Construct_UFunction_APlayerController_InventoryStats_OnUnPossessRequested_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Framework/PlayerController_InventoryStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_InventoryStats_OnUnPossessRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController_InventoryStats, nullptr, "OnUnPossessRequested", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_InventoryStats_OnUnPossessRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_InventoryStats_OnUnPossessRequested_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_InventoryStats_OnUnPossessRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_InventoryStats_OnUnPossessRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController_InventoryStats::execOnUnPossessRequested)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUnPossessRequested();
	P_NATIVE_END;
}
// End Class APlayerController_InventoryStats Function OnUnPossessRequested

// Begin Class APlayerController_InventoryStats
void APlayerController_InventoryStats::StaticRegisterNativesAPlayerController_InventoryStats()
{
	UClass* Class = APlayerController_InventoryStats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPossessRequested", &APlayerController_InventoryStats::execOnPossessRequested },
		{ "OnUnPossessRequested", &APlayerController_InventoryStats::execOnUnPossessRequested },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerController_InventoryStats);
UClass* Z_Construct_UClass_APlayerController_InventoryStats_NoRegister()
{
	return APlayerController_InventoryStats::StaticClass();
}
struct Z_Construct_UClass_APlayerController_InventoryStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Framework/PlayerController_InventoryStats.h" },
		{ "ModuleRelativePath", "Framework/PlayerController_InventoryStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharactersController_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Framework/PlayerController_InventoryStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableController_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Framework/PlayerController_InventoryStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharactersController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerController_InventoryStats_OnPossessRequested, "OnPossessRequested" }, // 1660571108
		{ &Z_Construct_UFunction_APlayerController_InventoryStats_OnUnPossessRequested, "OnUnPossessRequested" }, // 562829303
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerController_InventoryStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_InventoryStats_Statics::NewProp_CharactersController = { "CharactersController", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController_InventoryStats, CharactersController), Z_Construct_UClass_UCharactersController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharactersController_MetaData), NewProp_CharactersController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_InventoryStats_Statics::NewProp_InteractableController = { "InteractableController", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController_InventoryStats, InteractableController), Z_Construct_UClass_UInteractableController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableController_MetaData), NewProp_InteractableController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerController_InventoryStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_InventoryStats_Statics::NewProp_CharactersController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_InventoryStats_Statics::NewProp_InteractableController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_InventoryStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerController_InventoryStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_InventoryStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APlayerController_InventoryStats_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCharactersControllerInterface_NoRegister, (int32)VTABLE_OFFSET(APlayerController_InventoryStats, ICharactersControllerInterface), false },  // 1055488451
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerController_InventoryStats_Statics::ClassParams = {
	&APlayerController_InventoryStats::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerController_InventoryStats_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_InventoryStats_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_InventoryStats_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerController_InventoryStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerController_InventoryStats()
{
	if (!Z_Registration_Info_UClass_APlayerController_InventoryStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerController_InventoryStats.OuterSingleton, Z_Construct_UClass_APlayerController_InventoryStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerController_InventoryStats.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<APlayerController_InventoryStats>()
{
	return APlayerController_InventoryStats::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerController_InventoryStats);
APlayerController_InventoryStats::~APlayerController_InventoryStats() {}
// End Class APlayerController_InventoryStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_PlayerController_InventoryStats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerController_InventoryStats, APlayerController_InventoryStats::StaticClass, TEXT("APlayerController_InventoryStats"), &Z_Registration_Info_UClass_APlayerController_InventoryStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerController_InventoryStats), 2533205919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_PlayerController_InventoryStats_h_351024805(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_PlayerController_InventoryStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_PlayerController_InventoryStats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
