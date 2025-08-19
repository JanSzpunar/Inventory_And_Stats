// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Framework/GameState_InventoryAndStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameState_InventoryAndStats() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_AGameState_InventoryAndStats();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_AGameState_InventoryAndStats_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_AGlobalComponentsManagerActor_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipmentInterface_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventoryInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class AGameState_InventoryAndStats
void AGameState_InventoryAndStats::StaticRegisterNativesAGameState_InventoryAndStats()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameState_InventoryAndStats);
UClass* Z_Construct_UClass_AGameState_InventoryAndStats_NoRegister()
{
	return AGameState_InventoryAndStats::StaticClass();
}
struct Z_Construct_UClass_AGameState_InventoryAndStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Framework/GameState_InventoryAndStats.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Framework/GameState_InventoryAndStats.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalManagerClass_MetaData[] = {
		{ "Category", "Global" },
		{ "ModuleRelativePath", "Framework/GameState_InventoryAndStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "ModuleRelativePath", "Framework/GameState_InventoryAndStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GlobalManagerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameState_InventoryAndStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameState_InventoryAndStats_Statics::NewProp_GlobalManagerClass = { "GlobalManagerClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameState_InventoryAndStats, GlobalManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGlobalComponentsManagerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalManagerClass_MetaData), NewProp_GlobalManagerClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameState_InventoryAndStats_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameState_InventoryAndStats, Manager), Z_Construct_UClass_AGlobalComponentsManagerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameState_InventoryAndStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameState_InventoryAndStats_Statics::NewProp_GlobalManagerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameState_InventoryAndStats_Statics::NewProp_Manager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameState_InventoryAndStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameState_InventoryAndStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameState_InventoryAndStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGameState_InventoryAndStats_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInventoryInterface_NoRegister, (int32)VTABLE_OFFSET(AGameState_InventoryAndStats, IInventoryInterface), false },  // 1598029802
	{ Z_Construct_UClass_UEquipmentInterface_NoRegister, (int32)VTABLE_OFFSET(AGameState_InventoryAndStats, IEquipmentInterface), false },  // 1922836400
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameState_InventoryAndStats_Statics::ClassParams = {
	&AGameState_InventoryAndStats::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameState_InventoryAndStats_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameState_InventoryAndStats_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameState_InventoryAndStats_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameState_InventoryAndStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameState_InventoryAndStats()
{
	if (!Z_Registration_Info_UClass_AGameState_InventoryAndStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameState_InventoryAndStats.OuterSingleton, Z_Construct_UClass_AGameState_InventoryAndStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameState_InventoryAndStats.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<AGameState_InventoryAndStats>()
{
	return AGameState_InventoryAndStats::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameState_InventoryAndStats);
AGameState_InventoryAndStats::~AGameState_InventoryAndStats() {}
// End Class AGameState_InventoryAndStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameState_InventoryAndStats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameState_InventoryAndStats, AGameState_InventoryAndStats::StaticClass, TEXT("AGameState_InventoryAndStats"), &Z_Registration_Info_UClass_AGameState_InventoryAndStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameState_InventoryAndStats), 1272344603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameState_InventoryAndStats_h_2769714422(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameState_InventoryAndStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameState_InventoryAndStats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
