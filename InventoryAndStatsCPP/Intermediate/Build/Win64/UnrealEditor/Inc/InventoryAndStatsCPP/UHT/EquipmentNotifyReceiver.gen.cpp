// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Inventory/EquipmentNotifyReceiver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentNotifyReceiver() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipmentNotifyReceiver();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipmentNotifyReceiver_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventories_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class UEquipmentNotifyReceiver
void UEquipmentNotifyReceiver::StaticRegisterNativesUEquipmentNotifyReceiver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentNotifyReceiver);
UClass* Z_Construct_UClass_UEquipmentNotifyReceiver_NoRegister()
{
	return UEquipmentNotifyReceiver::StaticClass();
}
struct Z_Construct_UClass_UEquipmentNotifyReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Inventory/EquipmentNotifyReceiver.h" },
		{ "ModuleRelativePath", "Inventory/EquipmentNotifyReceiver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventories_MetaData[] = {
		{ "Category", "EquipmentNotifyReceiver" },
		{ "ModuleRelativePath", "Inventory/EquipmentNotifyReceiver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentNotifyReceiver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentNotifyReceiver_Statics::NewProp_Inventories = { "Inventories", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentNotifyReceiver, Inventories), Z_Construct_UClass_UInventories_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventories_MetaData), NewProp_Inventories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentNotifyReceiver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentNotifyReceiver_Statics::NewProp_Inventories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentNotifyReceiver_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEquipmentNotifyReceiver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentNotifyReceiver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentNotifyReceiver_Statics::ClassParams = {
	&UEquipmentNotifyReceiver::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEquipmentNotifyReceiver_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentNotifyReceiver_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentNotifyReceiver_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentNotifyReceiver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipmentNotifyReceiver()
{
	if (!Z_Registration_Info_UClass_UEquipmentNotifyReceiver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentNotifyReceiver.OuterSingleton, Z_Construct_UClass_UEquipmentNotifyReceiver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentNotifyReceiver.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UEquipmentNotifyReceiver>()
{
	return UEquipmentNotifyReceiver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentNotifyReceiver);
UEquipmentNotifyReceiver::~UEquipmentNotifyReceiver() {}
// End Class UEquipmentNotifyReceiver

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentNotifyReceiver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentNotifyReceiver, UEquipmentNotifyReceiver::StaticClass, TEXT("UEquipmentNotifyReceiver"), &Z_Registration_Info_UClass_UEquipmentNotifyReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentNotifyReceiver), 882073169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentNotifyReceiver_h_3520617312(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentNotifyReceiver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentNotifyReceiver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
