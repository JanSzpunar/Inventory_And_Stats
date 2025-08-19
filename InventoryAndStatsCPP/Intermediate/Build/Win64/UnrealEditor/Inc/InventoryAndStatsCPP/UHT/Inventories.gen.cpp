// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Inventory/Inventories.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventories() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventories();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventories_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class UInventories
void UInventories::StaticRegisterNativesUInventories()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventories);
UClass* Z_Construct_UClass_UInventories_NoRegister()
{
	return UInventories::StaticClass();
}
struct Z_Construct_UClass_UInventories_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Inventory/Inventories.h" },
		{ "ModuleRelativePath", "Inventory/Inventories.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryClasses_MetaData[] = {
		{ "Category", "Inventories" },
		{ "ModuleRelativePath", "Inventory/Inventories.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipments_MetaData[] = {
		{ "Category", "Inventories" },
		{ "ModuleRelativePath", "Inventory/Inventories.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryClasses_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InventoryClasses_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InventoryClasses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Equipments_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Equipments_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Equipments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventories>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventories_Statics::NewProp_InventoryClasses_ValueProp = { "InventoryClasses", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInventories_Statics::NewProp_InventoryClasses_Key_KeyProp = { "InventoryClasses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInventories_Statics::NewProp_InventoryClasses = { "InventoryClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventories, InventoryClasses), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryClasses_MetaData), NewProp_InventoryClasses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInventories_Statics::NewProp_Equipments_ValueProp = { "Equipments", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventories_Statics::NewProp_Equipments_Key_KeyProp = { "Equipments_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInventories_Statics::NewProp_Equipments = { "Equipments", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventories, Equipments), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipments_MetaData), NewProp_Equipments_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventories_Statics::NewProp_InventoryClasses_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventories_Statics::NewProp_InventoryClasses_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventories_Statics::NewProp_InventoryClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventories_Statics::NewProp_Equipments_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventories_Statics::NewProp_Equipments_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventories_Statics::NewProp_Equipments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventories_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventories_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventories_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventories_Statics::ClassParams = {
	&UInventories::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventories_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventories_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventories_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventories_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventories()
{
	if (!Z_Registration_Info_UClass_UInventories.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventories.OuterSingleton, Z_Construct_UClass_UInventories_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventories.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UInventories>()
{
	return UInventories::StaticClass();
}
UInventories::UInventories(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventories);
UInventories::~UInventories() {}
// End Class UInventories

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventories_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventories, UInventories::StaticClass, TEXT("UInventories"), &Z_Registration_Info_UClass_UInventories, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventories), 1049705681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventories_h_27776232(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventories_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventories_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
