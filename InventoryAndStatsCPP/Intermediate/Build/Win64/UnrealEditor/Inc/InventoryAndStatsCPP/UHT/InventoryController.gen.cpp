// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Inventory/InventoryController.h"
#include "InventoryAndStatsCPP/Inventory/InventoryItem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventory_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventoryController();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventoryController_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventoryInterface_NoRegister();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class UInventoryController Function OnDragCancelRequested
struct Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics
{
	struct InventoryController_eventOnDragCancelRequested_Parms
	{
		FInventoryItem Item;
		FName InventoryID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InventoryID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryController_eventOnDragCancelRequested_Parms, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2061163311
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics::NewProp_InventoryID = { "InventoryID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryController_eventOnDragCancelRequested_Parms, InventoryID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics::NewProp_InventoryID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryController, nullptr, "OnDragCancelRequested", nullptr, nullptr, Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics::InventoryController_eventOnDragCancelRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics::InventoryController_eventOnDragCancelRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryController_OnDragCancelRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryController_OnDragCancelRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryController::execOnDragCancelRequested)
{
	P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_Item);
	P_GET_PROPERTY(FNameProperty,Z_Param_InventoryID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDragCancelRequested(Z_Param_Out_Item,Z_Param_InventoryID);
	P_NATIVE_END;
}
// End Class UInventoryController Function OnDragCancelRequested

// Begin Class UInventoryController Function OnDragParametersRequested
struct Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics
{
	struct InventoryController_eventOnDragParametersRequested_Parms
	{
		int32 Cell;
		FName ItemID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cell;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryController_eventOnDragParametersRequested_Parms, Cell), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryController_eventOnDragParametersRequested_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics::NewProp_Cell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics::NewProp_ItemID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryController, nullptr, "OnDragParametersRequested", nullptr, nullptr, Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics::InventoryController_eventOnDragParametersRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics::InventoryController_eventOnDragParametersRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryController_OnDragParametersRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryController_OnDragParametersRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryController::execOnDragParametersRequested)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Cell);
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDragParametersRequested(Z_Param_Cell,Z_Param_ItemID);
	P_NATIVE_END;
}
// End Class UInventoryController Function OnDragParametersRequested

// Begin Class UInventoryController Function OnInventoryClose
struct Z_Construct_UFunction_UInventoryController_OnInventoryClose_Statics
{
	struct InventoryController_eventOnInventoryClose_Parms
	{
		FName InventoryID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InventoryID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryController_OnInventoryClose_Statics::NewProp_InventoryID = { "InventoryID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryController_eventOnInventoryClose_Parms, InventoryID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryController_OnInventoryClose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryController_OnInventoryClose_Statics::NewProp_InventoryID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnInventoryClose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryController_OnInventoryClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryController, nullptr, "OnInventoryClose", nullptr, nullptr, Z_Construct_UFunction_UInventoryController_OnInventoryClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnInventoryClose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryController_OnInventoryClose_Statics::InventoryController_eventOnInventoryClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnInventoryClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryController_OnInventoryClose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryController_OnInventoryClose_Statics::InventoryController_eventOnInventoryClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryController_OnInventoryClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryController_OnInventoryClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryController::execOnInventoryClose)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InventoryID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInventoryClose(Z_Param_InventoryID);
	P_NATIVE_END;
}
// End Class UInventoryController Function OnInventoryClose

// Begin Class UInventoryController Function OnItemDivideRequested
struct Z_Construct_UFunction_UInventoryController_OnItemDivideRequested_Statics
{
	struct InventoryController_eventOnItemDivideRequested_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Assigned Functions\n" },
#endif
		{ "ModuleRelativePath", "Inventory/InventoryController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assigned Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTopLeftCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryController_OnItemDivideRequested_Statics::NewProp_ItemTopLeftCoordinate = { "ItemTopLeftCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryController_eventOnItemDivideRequested_Parms, ItemTopLeftCoordinate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryController_OnItemDivideRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryController_OnItemDivideRequested_Statics::NewProp_ItemTopLeftCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemDivideRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryController_OnItemDivideRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryController, nullptr, "OnItemDivideRequested", nullptr, nullptr, Z_Construct_UFunction_UInventoryController_OnItemDivideRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemDivideRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryController_OnItemDivideRequested_Statics::InventoryController_eventOnItemDivideRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemDivideRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryController_OnItemDivideRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryController_OnItemDivideRequested_Statics::InventoryController_eventOnItemDivideRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryController_OnItemDivideRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryController_OnItemDivideRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryController::execOnItemDivideRequested)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemTopLeftCoordinate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemDivideRequested(Z_Param_ItemTopLeftCoordinate);
	P_NATIVE_END;
}
// End Class UInventoryController Function OnItemDivideRequested

// Begin Class UInventoryController Function OnItemDroppedOnGrid
struct Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics
{
	struct InventoryController_eventOnItemDroppedOnGrid_Parms
	{
		FInventoryItem Item;
		int32 CellDroppedOn;
		FName PreviousInventory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellDroppedOn;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PreviousInventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryController_eventOnItemDroppedOnGrid_Parms, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 2061163311
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::NewProp_CellDroppedOn = { "CellDroppedOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryController_eventOnItemDroppedOnGrid_Parms, CellDroppedOn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::NewProp_PreviousInventory = { "PreviousInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryController_eventOnItemDroppedOnGrid_Parms, PreviousInventory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::NewProp_CellDroppedOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::NewProp_PreviousInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryController, nullptr, "OnItemDroppedOnGrid", nullptr, nullptr, Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::InventoryController_eventOnItemDroppedOnGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::InventoryController_eventOnItemDroppedOnGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryController::execOnItemDroppedOnGrid)
{
	P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_CellDroppedOn);
	P_GET_PROPERTY(FNameProperty,Z_Param_PreviousInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemDroppedOnGrid(Z_Param_Out_Item,Z_Param_CellDroppedOn,Z_Param_PreviousInventory);
	P_NATIVE_END;
}
// End Class UInventoryController Function OnItemDroppedOnGrid

// Begin Class UInventoryController Function OnItemFrontendRequested
struct Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested_Statics
{
	struct InventoryController_eventOnItemFrontendRequested_Parms
	{
		FInventoryItem Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryController_eventOnItemFrontendRequested_Parms, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2061163311
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryController, nullptr, "OnItemFrontendRequested", nullptr, nullptr, Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested_Statics::InventoryController_eventOnItemFrontendRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested_Statics::InventoryController_eventOnItemFrontendRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryController::execOnItemFrontendRequested)
{
	P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemFrontendRequested(Z_Param_Out_Item);
	P_NATIVE_END;
}
// End Class UInventoryController Function OnItemFrontendRequested

// Begin Class UInventoryController Function OnItemRemoveRequested
struct Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested_Statics
{
	struct InventoryController_eventOnItemRemoveRequested_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTopLeftCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested_Statics::NewProp_ItemTopLeftCoordinate = { "ItemTopLeftCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryController_eventOnItemRemoveRequested_Parms, ItemTopLeftCoordinate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested_Statics::NewProp_ItemTopLeftCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryController, nullptr, "OnItemRemoveRequested", nullptr, nullptr, Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested_Statics::InventoryController_eventOnItemRemoveRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested_Statics::InventoryController_eventOnItemRemoveRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryController::execOnItemRemoveRequested)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemTopLeftCoordinate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemRemoveRequested(Z_Param_ItemTopLeftCoordinate);
	P_NATIVE_END;
}
// End Class UInventoryController Function OnItemRemoveRequested

// Begin Class UInventoryController Function OnItemSizeRequested
struct Z_Construct_UFunction_UInventoryController_OnItemSizeRequested_Statics
{
	struct InventoryController_eventOnItemSizeRequested_Parms
	{
		FName ItemID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryController_OnItemSizeRequested_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryController_eventOnItemSizeRequested_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryController_OnItemSizeRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryController_OnItemSizeRequested_Statics::NewProp_ItemID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemSizeRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryController_OnItemSizeRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryController, nullptr, "OnItemSizeRequested", nullptr, nullptr, Z_Construct_UFunction_UInventoryController_OnItemSizeRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemSizeRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryController_OnItemSizeRequested_Statics::InventoryController_eventOnItemSizeRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemSizeRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryController_OnItemSizeRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryController_OnItemSizeRequested_Statics::InventoryController_eventOnItemSizeRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryController_OnItemSizeRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryController_OnItemSizeRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryController::execOnItemSizeRequested)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemSizeRequested(Z_Param_ItemID);
	P_NATIVE_END;
}
// End Class UInventoryController Function OnItemSizeRequested

// Begin Class UInventoryController Function OnItemUseRequested
struct Z_Construct_UFunction_UInventoryController_OnItemUseRequested_Statics
{
	struct InventoryController_eventOnItemUseRequested_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTopLeftCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryController_OnItemUseRequested_Statics::NewProp_ItemTopLeftCoordinate = { "ItemTopLeftCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryController_eventOnItemUseRequested_Parms, ItemTopLeftCoordinate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryController_OnItemUseRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryController_OnItemUseRequested_Statics::NewProp_ItemTopLeftCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemUseRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryController_OnItemUseRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryController, nullptr, "OnItemUseRequested", nullptr, nullptr, Z_Construct_UFunction_UInventoryController_OnItemUseRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemUseRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryController_OnItemUseRequested_Statics::InventoryController_eventOnItemUseRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnItemUseRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryController_OnItemUseRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryController_OnItemUseRequested_Statics::InventoryController_eventOnItemUseRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryController_OnItemUseRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryController_OnItemUseRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryController::execOnItemUseRequested)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemTopLeftCoordinate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemUseRequested(Z_Param_ItemTopLeftCoordinate);
	P_NATIVE_END;
}
// End Class UInventoryController Function OnItemUseRequested

// Begin Class UInventoryController Function OnTryToEquipItem
struct Z_Construct_UFunction_UInventoryController_OnTryToEquipItem_Statics
{
	struct InventoryController_eventOnTryToEquipItem_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTopLeftCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryController_OnTryToEquipItem_Statics::NewProp_ItemTopLeftCoordinate = { "ItemTopLeftCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryController_eventOnTryToEquipItem_Parms, ItemTopLeftCoordinate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryController_OnTryToEquipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryController_OnTryToEquipItem_Statics::NewProp_ItemTopLeftCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnTryToEquipItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryController_OnTryToEquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryController, nullptr, "OnTryToEquipItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryController_OnTryToEquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnTryToEquipItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryController_OnTryToEquipItem_Statics::InventoryController_eventOnTryToEquipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryController_OnTryToEquipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryController_OnTryToEquipItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryController_OnTryToEquipItem_Statics::InventoryController_eventOnTryToEquipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryController_OnTryToEquipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryController_OnTryToEquipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryController::execOnTryToEquipItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemTopLeftCoordinate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTryToEquipItem(Z_Param_ItemTopLeftCoordinate);
	P_NATIVE_END;
}
// End Class UInventoryController Function OnTryToEquipItem

// Begin Class UInventoryController
void UInventoryController::StaticRegisterNativesUInventoryController()
{
	UClass* Class = UInventoryController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDragCancelRequested", &UInventoryController::execOnDragCancelRequested },
		{ "OnDragParametersRequested", &UInventoryController::execOnDragParametersRequested },
		{ "OnInventoryClose", &UInventoryController::execOnInventoryClose },
		{ "OnItemDivideRequested", &UInventoryController::execOnItemDivideRequested },
		{ "OnItemDroppedOnGrid", &UInventoryController::execOnItemDroppedOnGrid },
		{ "OnItemFrontendRequested", &UInventoryController::execOnItemFrontendRequested },
		{ "OnItemRemoveRequested", &UInventoryController::execOnItemRemoveRequested },
		{ "OnItemSizeRequested", &UInventoryController::execOnItemSizeRequested },
		{ "OnItemUseRequested", &UInventoryController::execOnItemUseRequested },
		{ "OnTryToEquipItem", &UInventoryController::execOnTryToEquipItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryController);
UClass* Z_Construct_UClass_UInventoryController_NoRegister()
{
	return UInventoryController::StaticClass();
}
struct Z_Construct_UClass_UInventoryController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryController.h" },
		{ "ModuleRelativePath", "Inventory/InventoryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/InventoryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryDataTable_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/InventoryController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipableTag_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/InventoryController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryDataTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipableTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryController_OnDragCancelRequested, "OnDragCancelRequested" }, // 274542476
		{ &Z_Construct_UFunction_UInventoryController_OnDragParametersRequested, "OnDragParametersRequested" }, // 2034546447
		{ &Z_Construct_UFunction_UInventoryController_OnInventoryClose, "OnInventoryClose" }, // 1172800998
		{ &Z_Construct_UFunction_UInventoryController_OnItemDivideRequested, "OnItemDivideRequested" }, // 90625750
		{ &Z_Construct_UFunction_UInventoryController_OnItemDroppedOnGrid, "OnItemDroppedOnGrid" }, // 1151393843
		{ &Z_Construct_UFunction_UInventoryController_OnItemFrontendRequested, "OnItemFrontendRequested" }, // 929680663
		{ &Z_Construct_UFunction_UInventoryController_OnItemRemoveRequested, "OnItemRemoveRequested" }, // 1093120621
		{ &Z_Construct_UFunction_UInventoryController_OnItemSizeRequested, "OnItemSizeRequested" }, // 716916161
		{ &Z_Construct_UFunction_UInventoryController_OnItemUseRequested, "OnItemUseRequested" }, // 3024935792
		{ &Z_Construct_UFunction_UInventoryController_OnTryToEquipItem, "OnTryToEquipItem" }, // 4015009192
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryController_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryController, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryController_Statics::NewProp_InventoryDataTable = { "InventoryDataTable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryController, InventoryDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryDataTable_MetaData), NewProp_InventoryDataTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryController_Statics::NewProp_EquipableTag = { "EquipableTag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryController, EquipableTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipableTag_MetaData), NewProp_EquipableTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryController_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryController_Statics::NewProp_InventoryDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryController_Statics::NewProp_EquipableTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInventoryController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInventoryInterface_NoRegister, (int32)VTABLE_OFFSET(UInventoryController, IInventoryInterface), false },  // 1598029802
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryController_Statics::ClassParams = {
	&UInventoryController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryController_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryController()
{
	if (!Z_Registration_Info_UClass_UInventoryController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryController.OuterSingleton, Z_Construct_UClass_UInventoryController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryController.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UInventoryController>()
{
	return UInventoryController::StaticClass();
}
UInventoryController::UInventoryController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryController);
UInventoryController::~UInventoryController() {}
// End Class UInventoryController

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryController, UInventoryController::StaticClass, TEXT("UInventoryController"), &Z_Registration_Info_UClass_UInventoryController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryController), 3134989502U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryController_h_3014398608(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
