// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Inventory/Equipment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipment() {}

// Begin Cross Module References
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipment();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipment_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventory();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class UEquipment
void UEquipment::StaticRegisterNativesUEquipment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipment);
UClass* Z_Construct_UClass_UEquipment_NoRegister()
{
	return UEquipment::StaticClass();
}
struct Z_Construct_UClass_UEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inventory/Equipment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Inventory/Equipment.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEquipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInventory,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipment_Statics::ClassParams = {
	&UEquipment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipment_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipment()
{
	if (!Z_Registration_Info_UClass_UEquipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipment.OuterSingleton, Z_Construct_UClass_UEquipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipment.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UEquipment>()
{
	return UEquipment::StaticClass();
}
UEquipment::UEquipment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipment);
UEquipment::~UEquipment() {}
// End Class UEquipment

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Equipment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipment, UEquipment::StaticClass, TEXT("UEquipment"), &Z_Registration_Info_UClass_UEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipment), 424528739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Equipment_h_4154171348(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Equipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Equipment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
