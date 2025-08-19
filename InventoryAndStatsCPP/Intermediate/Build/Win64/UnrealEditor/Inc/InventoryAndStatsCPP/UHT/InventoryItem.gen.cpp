// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Inventory/InventoryItem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItem() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemDynamic();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin ScriptStruct FInventoryItemDynamic
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemDynamic;
class UScriptStruct* FInventoryItemDynamic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemDynamic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemDynamic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemDynamic, (UObject*)Z_Construct_UPackage__Script_InventoryAndStatsCPP(), TEXT("InventoryItemDynamic"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemDynamic.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UScriptStruct* StaticStruct<FInventoryItemDynamic>()
{
	return FInventoryItemDynamic::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "InventoryItemDynamic" },
		{ "ModuleRelativePath", "Inventory/InventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopLeftCoordinate_MetaData[] = {
		{ "Category", "InventoryItemDynamic" },
		{ "ModuleRelativePath", "Inventory/InventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatBonus_MetaData[] = {
		{ "Category", "InventoryItemDynamic" },
		{ "ModuleRelativePath", "Inventory/InventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeStatsWithDataTable_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/InventoryItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TopLeftCoordinate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StatBonus_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatBonus_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StatBonus;
	static void NewProp_MergeStatsWithDataTable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MergeStatsWithDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemDynamic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemDynamic, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewProp_TopLeftCoordinate = { "TopLeftCoordinate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemDynamic, TopLeftCoordinate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopLeftCoordinate_MetaData), NewProp_TopLeftCoordinate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewProp_StatBonus_ValueProp = { "StatBonus", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewProp_StatBonus_Key_KeyProp = { "StatBonus_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewProp_StatBonus = { "StatBonus", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemDynamic, StatBonus), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatBonus_MetaData), NewProp_StatBonus_MetaData) }; // 1298103297
void Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewProp_MergeStatsWithDataTable_SetBit(void* Obj)
{
	((FInventoryItemDynamic*)Obj)->MergeStatsWithDataTable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewProp_MergeStatsWithDataTable = { "MergeStatsWithDataTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemDynamic), &Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewProp_MergeStatsWithDataTable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeStatsWithDataTable_MetaData), NewProp_MergeStatsWithDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewProp_TopLeftCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewProp_StatBonus_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewProp_StatBonus_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewProp_StatBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewProp_MergeStatsWithDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
	nullptr,
	&NewStructOps,
	"InventoryItemDynamic",
	Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::PropPointers),
	sizeof(FInventoryItemDynamic),
	alignof(FInventoryItemDynamic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemDynamic()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemDynamic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemDynamic.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemDynamic.InnerSingleton;
}
// End ScriptStruct FInventoryItemDynamic

// Begin ScriptStruct FInventoryItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItem;
class UScriptStruct* FInventoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItem, (UObject*)Z_Construct_UPackage__Script_InventoryAndStatsCPP(), TEXT("InventoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UScriptStruct* StaticStruct<FInventoryItem>()
{
	return FInventoryItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Inventory/InventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicParameters_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Inventory/InventoryItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_DynamicParameters = { "DynamicParameters", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, DynamicParameters), Z_Construct_UScriptStruct_FInventoryItemDynamic, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicParameters_MetaData), NewProp_DynamicParameters_MetaData) }; // 2962964786
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_DynamicParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
	nullptr,
	&NewStructOps,
	"InventoryItem",
	Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers),
	sizeof(FInventoryItem),
	alignof(FInventoryItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton;
}
// End ScriptStruct FInventoryItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryItem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItemDynamic::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemDynamic_Statics::NewStructOps, TEXT("InventoryItemDynamic"), &Z_Registration_Info_UScriptStruct_InventoryItemDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemDynamic), 2962964786U) },
		{ FInventoryItem::StaticStruct, Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps, TEXT("InventoryItem"), &Z_Registration_Info_UScriptStruct_InventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItem), 2061163311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryItem_h_677597311(TEXT("/Script/InventoryAndStatsCPP"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryItem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
