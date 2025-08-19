// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Inventory/InventoriesController.h"
#include "InventoryAndStatsCPP/Saving/SaveInventoryData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoriesController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipmentInterface_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipmentNotifier_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventories_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventoriesController();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventoriesController_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventoryController_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventoryInterface_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USaveGameInterface_NoRegister();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FSaveInventoryData();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class UInventoriesController
void UInventoriesController::StaticRegisterNativesUInventoriesController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoriesController);
UClass* Z_Construct_UClass_UInventoriesController_NoRegister()
{
	return UInventoriesController::StaticClass();
}
struct Z_Construct_UClass_UInventoriesController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Inventory/InventoriesController.h" },
		{ "ModuleRelativePath", "Inventory/InventoriesController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventories_MetaData[] = {
		{ "Category", "InventoriesController" },
		{ "ModuleRelativePath", "Inventory/InventoriesController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryDataTable_MetaData[] = {
		{ "Category", "InventoriesController" },
		{ "ModuleRelativePath", "Inventory/InventoriesController.h" },
		{ "RowType", "/Script/InventoryAndStatsCPP.FInventoryItemStatic" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipableTag_MetaData[] = {
		{ "Category", "InventoriesController" },
		{ "ModuleRelativePath", "Inventory/InventoriesController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveData_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/InventoriesController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryControllers_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/InventoriesController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipments_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/InventoriesController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentNotifiers_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/InventoriesController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventories;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryDataTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipableTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SaveData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SaveData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryControllers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InventoryControllers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InventoryControllers;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Equipments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Equipments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentNotifiers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EquipmentNotifiers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EquipmentNotifiers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoriesController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoriesController_Statics::NewProp_Inventories = { "Inventories", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoriesController, Inventories), Z_Construct_UClass_UInventories_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventories_MetaData), NewProp_Inventories_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoriesController_Statics::NewProp_InventoryDataTable = { "InventoryDataTable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoriesController, InventoryDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryDataTable_MetaData), NewProp_InventoryDataTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoriesController_Statics::NewProp_EquipableTag = { "EquipableTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoriesController, EquipableTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipableTag_MetaData), NewProp_EquipableTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoriesController_Statics::NewProp_SaveData_ValueProp = { "SaveData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSaveInventoryData, METADATA_PARAMS(0, nullptr) }; // 372733887
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInventoriesController_Statics::NewProp_SaveData_Key_KeyProp = { "SaveData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInventoriesController_Statics::NewProp_SaveData = { "SaveData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoriesController, SaveData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveData_MetaData), NewProp_SaveData_MetaData) }; // 372733887
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoriesController_Statics::NewProp_InventoryControllers_ValueProp = { "InventoryControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInventoryController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInventoriesController_Statics::NewProp_InventoryControllers_Key_KeyProp = { "InventoryControllers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInventoriesController_Statics::NewProp_InventoryControllers = { "InventoryControllers", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoriesController, InventoryControllers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryControllers_MetaData), NewProp_InventoryControllers_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInventoriesController_Statics::NewProp_Equipments_Inner = { "Equipments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoriesController_Statics::NewProp_Equipments = { "Equipments", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoriesController, Equipments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipments_MetaData), NewProp_Equipments_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoriesController_Statics::NewProp_EquipmentNotifiers_ValueProp = { "EquipmentNotifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UEquipmentNotifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInventoriesController_Statics::NewProp_EquipmentNotifiers_Key_KeyProp = { "EquipmentNotifiers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInventoriesController_Statics::NewProp_EquipmentNotifiers = { "EquipmentNotifiers", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoriesController, EquipmentNotifiers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentNotifiers_MetaData), NewProp_EquipmentNotifiers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoriesController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesController_Statics::NewProp_Inventories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesController_Statics::NewProp_InventoryDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesController_Statics::NewProp_EquipableTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesController_Statics::NewProp_SaveData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesController_Statics::NewProp_SaveData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesController_Statics::NewProp_SaveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesController_Statics::NewProp_InventoryControllers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesController_Statics::NewProp_InventoryControllers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesController_Statics::NewProp_InventoryControllers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesController_Statics::NewProp_Equipments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesController_Statics::NewProp_Equipments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesController_Statics::NewProp_EquipmentNotifiers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesController_Statics::NewProp_EquipmentNotifiers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesController_Statics::NewProp_EquipmentNotifiers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoriesController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoriesController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoriesController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInventoriesController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInventoryInterface_NoRegister, (int32)VTABLE_OFFSET(UInventoriesController, IInventoryInterface), false },  // 1598029802
	{ Z_Construct_UClass_UEquipmentInterface_NoRegister, (int32)VTABLE_OFFSET(UInventoriesController, IEquipmentInterface), false },  // 1922836400
	{ Z_Construct_UClass_USaveGameInterface_NoRegister, (int32)VTABLE_OFFSET(UInventoriesController, ISaveGameInterface), false },  // 960589617
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoriesController_Statics::ClassParams = {
	&UInventoriesController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventoriesController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoriesController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoriesController_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoriesController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoriesController()
{
	if (!Z_Registration_Info_UClass_UInventoriesController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoriesController.OuterSingleton, Z_Construct_UClass_UInventoriesController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoriesController.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UInventoriesController>()
{
	return UInventoriesController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoriesController);
UInventoriesController::~UInventoriesController() {}
// End Class UInventoriesController

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoriesController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoriesController, UInventoriesController::StaticClass, TEXT("UInventoriesController"), &Z_Registration_Info_UClass_UInventoriesController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoriesController), 3052869282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoriesController_h_3537388681(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoriesController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoriesController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
