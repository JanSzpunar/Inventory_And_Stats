// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Inventory/Inventory.h"
#include "InventoryAndStatsCPP/Inventory/InventoryItem.h"
#include "InventoryAndStatsCPP/Inventory/InventoryItemFrontend.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventory();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventory_NoRegister();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature();
INVENTORYANDSTATSCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemFrontend();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Delegate FOnItemDivideRequested
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnItemDivideRequested_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTopLeftCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature_Statics::NewProp_ItemTopLeftCoordinate = { "ItemTopLeftCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnItemDivideRequested_Parms, ItemTopLeftCoordinate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature_Statics::NewProp_ItemTopLeftCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnItemDivideRequested__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemDivideRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemDivideRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemDivideRequested_DelegateWrapper(const FMulticastScriptDelegate& OnItemDivideRequested, int32 ItemTopLeftCoordinate)
{
	struct _Script_InventoryAndStatsCPP_eventOnItemDivideRequested_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
	_Script_InventoryAndStatsCPP_eventOnItemDivideRequested_Parms Parms;
	Parms.ItemTopLeftCoordinate=ItemTopLeftCoordinate;
	OnItemDivideRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemDivideRequested

// Begin Delegate FOnItemUseRequested
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnItemUseRequested_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTopLeftCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature_Statics::NewProp_ItemTopLeftCoordinate = { "ItemTopLeftCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnItemUseRequested_Parms, ItemTopLeftCoordinate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature_Statics::NewProp_ItemTopLeftCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnItemUseRequested__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemUseRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemUseRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemUseRequested_DelegateWrapper(const FMulticastScriptDelegate& OnItemUseRequested, int32 ItemTopLeftCoordinate)
{
	struct _Script_InventoryAndStatsCPP_eventOnItemUseRequested_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
	_Script_InventoryAndStatsCPP_eventOnItemUseRequested_Parms Parms;
	Parms.ItemTopLeftCoordinate=ItemTopLeftCoordinate;
	OnItemUseRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemUseRequested

// Begin Delegate FOnItemRemoveRequested
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnItemRemoveRequested_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTopLeftCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature_Statics::NewProp_ItemTopLeftCoordinate = { "ItemTopLeftCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnItemRemoveRequested_Parms, ItemTopLeftCoordinate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature_Statics::NewProp_ItemTopLeftCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnItemRemoveRequested__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemRemoveRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemRemoveRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemRemoveRequested_DelegateWrapper(const FMulticastScriptDelegate& OnItemRemoveRequested, int32 ItemTopLeftCoordinate)
{
	struct _Script_InventoryAndStatsCPP_eventOnItemRemoveRequested_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
	_Script_InventoryAndStatsCPP_eventOnItemRemoveRequested_Parms Parms;
	Parms.ItemTopLeftCoordinate=ItemTopLeftCoordinate;
	OnItemRemoveRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemRemoveRequested

// Begin Delegate FOnTryToEquipItem
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnTryToEquipItem_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTopLeftCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature_Statics::NewProp_ItemTopLeftCoordinate = { "ItemTopLeftCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnTryToEquipItem_Parms, ItemTopLeftCoordinate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature_Statics::NewProp_ItemTopLeftCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnTryToEquipItem__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnTryToEquipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnTryToEquipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTryToEquipItem_DelegateWrapper(const FMulticastScriptDelegate& OnTryToEquipItem, int32 ItemTopLeftCoordinate)
{
	struct _Script_InventoryAndStatsCPP_eventOnTryToEquipItem_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
	_Script_InventoryAndStatsCPP_eventOnTryToEquipItem_Parms Parms;
	Parms.ItemTopLeftCoordinate=ItemTopLeftCoordinate;
	OnTryToEquipItem.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTryToEquipItem

// Begin Delegate FOnDragCancelRequested
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnDragCancelRequested_Parms
	{
		FInventoryItem Item;
		FName PreviousInventoryID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PreviousInventoryID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnDragCancelRequested_Parms, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2061163311
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics::NewProp_PreviousInventoryID = { "PreviousInventoryID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnDragCancelRequested_Parms, PreviousInventoryID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics::NewProp_PreviousInventoryID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnDragCancelRequested__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnDragCancelRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnDragCancelRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDragCancelRequested_DelegateWrapper(const FMulticastScriptDelegate& OnDragCancelRequested, FInventoryItem const& Item, FName PreviousInventoryID)
{
	struct _Script_InventoryAndStatsCPP_eventOnDragCancelRequested_Parms
	{
		FInventoryItem Item;
		FName PreviousInventoryID;
	};
	_Script_InventoryAndStatsCPP_eventOnDragCancelRequested_Parms Parms;
	Parms.Item=Item;
	Parms.PreviousInventoryID=PreviousInventoryID;
	OnDragCancelRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDragCancelRequested

// Begin Delegate FOnCellPopulated
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnCellPopulated_Parms
	{
		FInventoryItem Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnCellPopulated_Parms, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2061163311
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnCellPopulated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnCellPopulated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnCellPopulated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCellPopulated_DelegateWrapper(const FMulticastScriptDelegate& OnCellPopulated, FInventoryItem const& Item)
{
	struct _Script_InventoryAndStatsCPP_eventOnCellPopulated_Parms
	{
		FInventoryItem Item;
	};
	_Script_InventoryAndStatsCPP_eventOnCellPopulated_Parms Parms;
	Parms.Item=Item;
	OnCellPopulated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCellPopulated

// Begin Delegate FOnCellCleared
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnCellCleared_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTopLeftCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature_Statics::NewProp_ItemTopLeftCoordinate = { "ItemTopLeftCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnCellCleared_Parms, ItemTopLeftCoordinate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature_Statics::NewProp_ItemTopLeftCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnCellCleared__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnCellCleared_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnCellCleared_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCellCleared_DelegateWrapper(const FMulticastScriptDelegate& OnCellCleared, int32 ItemTopLeftCoordinate)
{
	struct _Script_InventoryAndStatsCPP_eventOnCellCleared_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
	_Script_InventoryAndStatsCPP_eventOnCellCleared_Parms Parms;
	Parms.ItemTopLeftCoordinate=ItemTopLeftCoordinate;
	OnCellCleared.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCellCleared

// Begin Delegate FOnCellUpdated
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnCellUpdated_Parms
	{
		FInventoryItem Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnCellUpdated_Parms, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2061163311
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnCellUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnCellUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnCellUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCellUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnCellUpdated, FInventoryItem const& Item)
{
	struct _Script_InventoryAndStatsCPP_eventOnCellUpdated_Parms
	{
		FInventoryItem Item;
	};
	_Script_InventoryAndStatsCPP_eventOnCellUpdated_Parms Parms;
	Parms.Item=Item;
	OnCellUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCellUpdated

// Begin Delegate FOnItemDroppedOnGrid
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnItemDroppedOnGrid_Parms
	{
		FInventoryItem Item;
		int32 CellDroppedOn;
		FName InventoryID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellDroppedOn;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InventoryID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnItemDroppedOnGrid_Parms, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 2061163311
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::NewProp_CellDroppedOn = { "CellDroppedOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnItemDroppedOnGrid_Parms, CellDroppedOn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::NewProp_InventoryID = { "InventoryID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnItemDroppedOnGrid_Parms, InventoryID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::NewProp_CellDroppedOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::NewProp_InventoryID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnItemDroppedOnGrid__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemDroppedOnGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemDroppedOnGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemDroppedOnGrid_DelegateWrapper(const FMulticastScriptDelegate& OnItemDroppedOnGrid, FInventoryItem& Item, int32 CellDroppedOn, FName InventoryID)
{
	struct _Script_InventoryAndStatsCPP_eventOnItemDroppedOnGrid_Parms
	{
		FInventoryItem Item;
		int32 CellDroppedOn;
		FName InventoryID;
	};
	_Script_InventoryAndStatsCPP_eventOnItemDroppedOnGrid_Parms Parms;
	Parms.Item=Item;
	Parms.CellDroppedOn=CellDroppedOn;
	Parms.InventoryID=InventoryID;
	OnItemDroppedOnGrid.ProcessMulticastDelegate<UObject>(&Parms);
	Item=Parms.Item;
}
// End Delegate FOnItemDroppedOnGrid

// Begin Delegate FOnDragParametersRequested
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnDragParametersRequested_Parms
	{
		int32 Cell;
		FName ItemID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cell;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnDragParametersRequested_Parms, Cell), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnDragParametersRequested_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics::NewProp_Cell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics::NewProp_ItemID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnDragParametersRequested__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnDragParametersRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnDragParametersRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDragParametersRequested_DelegateWrapper(const FMulticastScriptDelegate& OnDragParametersRequested, int32 Cell, FName ItemID)
{
	struct _Script_InventoryAndStatsCPP_eventOnDragParametersRequested_Parms
	{
		int32 Cell;
		FName ItemID;
	};
	_Script_InventoryAndStatsCPP_eventOnDragParametersRequested_Parms Parms;
	Parms.Cell=Cell;
	Parms.ItemID=ItemID;
	OnDragParametersRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDragParametersRequested

// Begin Delegate FOnItemSizeRequested
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnItemSizeRequested_Parms
	{
		FName ItemID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnItemSizeRequested_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature_Statics::NewProp_ItemID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnItemSizeRequested__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemSizeRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemSizeRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemSizeRequested_DelegateWrapper(const FMulticastScriptDelegate& OnItemSizeRequested, FName ItemID)
{
	struct _Script_InventoryAndStatsCPP_eventOnItemSizeRequested_Parms
	{
		FName ItemID;
	};
	_Script_InventoryAndStatsCPP_eventOnItemSizeRequested_Parms Parms;
	Parms.ItemID=ItemID;
	OnItemSizeRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemSizeRequested

// Begin Delegate FOnItemFrontendRequested
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnItemFrontendRequested_Parms
	{
		FInventoryItem Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnItemFrontendRequested_Parms, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2061163311
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnItemFrontendRequested__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemFrontendRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemFrontendRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemFrontendRequested_DelegateWrapper(const FMulticastScriptDelegate& OnItemFrontendRequested, FInventoryItem const& Item)
{
	struct _Script_InventoryAndStatsCPP_eventOnItemFrontendRequested_Parms
	{
		FInventoryItem Item;
	};
	_Script_InventoryAndStatsCPP_eventOnItemFrontendRequested_Parms Parms;
	Parms.Item=Item;
	OnItemFrontendRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemFrontendRequested

// Begin Delegate FOnDragParametersReceived
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnDragParametersReceived_Parms
	{
		bool CanFit;
		TSet<int32> Cells;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static void NewProp_CanFit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanFit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cells_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::NewProp_CanFit_SetBit(void* Obj)
{
	((_Script_InventoryAndStatsCPP_eventOnDragParametersReceived_Parms*)Obj)->CanFit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::NewProp_CanFit = { "CanFit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_InventoryAndStatsCPP_eventOnDragParametersReceived_Parms), &Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::NewProp_CanFit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::NewProp_Cells_ElementProp = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnDragParametersReceived_Parms, Cells), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::NewProp_CanFit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::NewProp_Cells_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::NewProp_Cells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnDragParametersReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnDragParametersReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnDragParametersReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDragParametersReceived_DelegateWrapper(const FMulticastScriptDelegate& OnDragParametersReceived, bool CanFit, const TSet<int32>& Cells)
{
	struct _Script_InventoryAndStatsCPP_eventOnDragParametersReceived_Parms
	{
		bool CanFit;
		TSet<int32> Cells;
	};
	_Script_InventoryAndStatsCPP_eventOnDragParametersReceived_Parms Parms;
	Parms.CanFit=CanFit ? true : false;
	Parms.Cells=Cells;
	OnDragParametersReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDragParametersReceived

// Begin Delegate FOnItemSizeReceived
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnItemSizeReceived_Parms
	{
		FIntPoint Size;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnItemSizeReceived_Parms, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnItemSizeReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemSizeReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemSizeReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemSizeReceived_DelegateWrapper(const FMulticastScriptDelegate& OnItemSizeReceived, FIntPoint Size)
{
	struct _Script_InventoryAndStatsCPP_eventOnItemSizeReceived_Parms
	{
		FIntPoint Size;
	};
	_Script_InventoryAndStatsCPP_eventOnItemSizeReceived_Parms Parms;
	Parms.Size=Size;
	OnItemSizeReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemSizeReceived

// Begin Delegate FOnItemFrontendReceived
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnItemFrontendReceived_Parms
	{
		FInventoryItemFrontend ItemFrontend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemFrontend_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemFrontend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature_Statics::NewProp_ItemFrontend = { "ItemFrontend", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnItemFrontendReceived_Parms, ItemFrontend), Z_Construct_UScriptStruct_FInventoryItemFrontend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemFrontend_MetaData), NewProp_ItemFrontend_MetaData) }; // 1045953406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature_Statics::NewProp_ItemFrontend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnItemFrontendReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemFrontendReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnItemFrontendReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemFrontendReceived_DelegateWrapper(const FMulticastScriptDelegate& OnItemFrontendReceived, FInventoryItemFrontend const& ItemFrontend)
{
	struct _Script_InventoryAndStatsCPP_eventOnItemFrontendReceived_Parms
	{
		FInventoryItemFrontend ItemFrontend;
	};
	_Script_InventoryAndStatsCPP_eventOnItemFrontendReceived_Parms Parms;
	Parms.ItemFrontend=ItemFrontend;
	OnItemFrontendReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemFrontendReceived

// Begin Delegate FOnInventoryClose
struct Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature_Statics
{
	struct _Script_InventoryAndStatsCPP_eventOnInventoryClose_Parms
	{
		FName InventoryID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InventoryID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature_Statics::NewProp_InventoryID = { "InventoryID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventoryAndStatsCPP_eventOnInventoryClose_Parms, InventoryID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature_Statics::NewProp_InventoryID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP, nullptr, "OnInventoryClose__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnInventoryClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature_Statics::_Script_InventoryAndStatsCPP_eventOnInventoryClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryClose_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryClose, FName InventoryID)
{
	struct _Script_InventoryAndStatsCPP_eventOnInventoryClose_Parms
	{
		FName InventoryID;
	};
	_Script_InventoryAndStatsCPP_eventOnInventoryClose_Parms Parms;
	Parms.InventoryID=InventoryID;
	OnInventoryClose.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInventoryClose

// Begin Class UInventory Function GetID
struct Z_Construct_UFunction_UInventory_GetID_Statics
{
	struct Inventory_eventGetID_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventory_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetID", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetID_Statics::Inventory_eventGetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetID_Statics::Inventory_eventGetID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetID();
	P_NATIVE_END;
}
// End Class UInventory Function GetID

// Begin Class UInventory Function GetItems
struct Z_Construct_UFunction_UInventory_GetItems_Statics
{
	struct Inventory_eventGetItems_Parms
	{
		TArray<FInventoryItem> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 2061163311
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2061163311
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItems", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetItems_Statics::Inventory_eventGetItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetItems_Statics::Inventory_eventGetItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInventoryItem>*)Z_Param__Result=P_THIS->GetItems();
	P_NATIVE_END;
}
// End Class UInventory Function GetItems

// Begin Class UInventory Function GetSize
struct Z_Construct_UFunction_UInventory_GetSize_Statics
{
	struct Inventory_eventGetSize_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetSize", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetSize_Statics::Inventory_eventGetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetSize_Statics::Inventory_eventGetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetSize();
	P_NATIVE_END;
}
// End Class UInventory Function GetSize

// Begin Class UInventory Function GetTitle
struct Z_Construct_UFunction_UInventory_GetTitle_Statics
{
	struct Inventory_eventGetTitle_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInventory_GetTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetTitle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetTitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetTitle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetTitle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetTitle", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetTitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetTitle_Statics::Inventory_eventGetTitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetTitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetTitle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetTitle_Statics::Inventory_eventGetTitle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetTitle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetTitle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetTitle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetTitle();
	P_NATIVE_END;
}
// End Class UInventory Function GetTitle

// Begin Class UInventory Function RequestCloseInventory
struct Z_Construct_UFunction_UInventory_RequestCloseInventory_Statics
{
	struct Inventory_eventRequestCloseInventory_Parms
	{
		FName InventoryID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InventoryID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventory_RequestCloseInventory_Statics::NewProp_InventoryID = { "InventoryID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestCloseInventory_Parms, InventoryID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestCloseInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestCloseInventory_Statics::NewProp_InventoryID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestCloseInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestCloseInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestCloseInventory", nullptr, nullptr, Z_Construct_UFunction_UInventory_RequestCloseInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestCloseInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_RequestCloseInventory_Statics::Inventory_eventRequestCloseInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestCloseInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RequestCloseInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RequestCloseInventory_Statics::Inventory_eventRequestCloseInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RequestCloseInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RequestCloseInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRequestCloseInventory)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InventoryID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestCloseInventory(Z_Param_InventoryID);
	P_NATIVE_END;
}
// End Class UInventory Function RequestCloseInventory

// Begin Class UInventory Function RequestDragCancel
struct Z_Construct_UFunction_UInventory_RequestDragCancel_Statics
{
	struct Inventory_eventRequestDragCancel_Parms
	{
		FInventoryItem Item;
		FName InventoryID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_RequestDragCancel_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestDragCancel_Parms, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2061163311
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventory_RequestDragCancel_Statics::NewProp_InventoryID = { "InventoryID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestDragCancel_Parms, InventoryID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestDragCancel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestDragCancel_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestDragCancel_Statics::NewProp_InventoryID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestDragCancel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestDragCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestDragCancel", nullptr, nullptr, Z_Construct_UFunction_UInventory_RequestDragCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestDragCancel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_RequestDragCancel_Statics::Inventory_eventRequestDragCancel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestDragCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RequestDragCancel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RequestDragCancel_Statics::Inventory_eventRequestDragCancel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RequestDragCancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RequestDragCancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRequestDragCancel)
{
	P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_Item);
	P_GET_PROPERTY(FNameProperty,Z_Param_InventoryID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestDragCancel(Z_Param_Out_Item,Z_Param_InventoryID);
	P_NATIVE_END;
}
// End Class UInventory Function RequestDragCancel

// Begin Class UInventory Function RequestDragParameters
struct Z_Construct_UFunction_UInventory_RequestDragParameters_Statics
{
	struct Inventory_eventRequestDragParameters_Parms
	{
		int32 Cell;
		FName ItemID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cell;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_RequestDragParameters_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestDragParameters_Parms, Cell), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventory_RequestDragParameters_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestDragParameters_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestDragParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestDragParameters_Statics::NewProp_Cell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestDragParameters_Statics::NewProp_ItemID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestDragParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestDragParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestDragParameters", nullptr, nullptr, Z_Construct_UFunction_UInventory_RequestDragParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestDragParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_RequestDragParameters_Statics::Inventory_eventRequestDragParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestDragParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RequestDragParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RequestDragParameters_Statics::Inventory_eventRequestDragParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RequestDragParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RequestDragParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRequestDragParameters)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Cell);
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestDragParameters(Z_Param_Cell,Z_Param_ItemID);
	P_NATIVE_END;
}
// End Class UInventory Function RequestDragParameters

// Begin Class UInventory Function RequestItemDivide
struct Z_Construct_UFunction_UInventory_RequestItemDivide_Statics
{
	struct Inventory_eventRequestItemDivide_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTopLeftCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_RequestItemDivide_Statics::NewProp_ItemTopLeftCoordinate = { "ItemTopLeftCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestItemDivide_Parms, ItemTopLeftCoordinate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestItemDivide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestItemDivide_Statics::NewProp_ItemTopLeftCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemDivide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestItemDivide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestItemDivide", nullptr, nullptr, Z_Construct_UFunction_UInventory_RequestItemDivide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemDivide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_RequestItemDivide_Statics::Inventory_eventRequestItemDivide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemDivide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RequestItemDivide_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RequestItemDivide_Statics::Inventory_eventRequestItemDivide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RequestItemDivide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RequestItemDivide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRequestItemDivide)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemTopLeftCoordinate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestItemDivide(Z_Param_ItemTopLeftCoordinate);
	P_NATIVE_END;
}
// End Class UInventory Function RequestItemDivide

// Begin Class UInventory Function RequestItemDropOnGrid
struct Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics
{
	struct Inventory_eventRequestItemDropOnGrid_Parms
	{
		FInventoryItem Item;
		int32 CellDroppedOn;
		FName InventoryID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellDroppedOn;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InventoryID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestItemDropOnGrid_Parms, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 2061163311
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::NewProp_CellDroppedOn = { "CellDroppedOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestItemDropOnGrid_Parms, CellDroppedOn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::NewProp_InventoryID = { "InventoryID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestItemDropOnGrid_Parms, InventoryID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::NewProp_CellDroppedOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::NewProp_InventoryID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestItemDropOnGrid", nullptr, nullptr, Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::Inventory_eventRequestItemDropOnGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::Inventory_eventRequestItemDropOnGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RequestItemDropOnGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RequestItemDropOnGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRequestItemDropOnGrid)
{
	P_GET_STRUCT(FInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_CellDroppedOn);
	P_GET_PROPERTY(FNameProperty,Z_Param_InventoryID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestItemDropOnGrid(Z_Param_Item,Z_Param_CellDroppedOn,Z_Param_InventoryID);
	P_NATIVE_END;
}
// End Class UInventory Function RequestItemDropOnGrid

// Begin Class UInventory Function RequestItemEquip
struct Z_Construct_UFunction_UInventory_RequestItemEquip_Statics
{
	struct Inventory_eventRequestItemEquip_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTopLeftCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_RequestItemEquip_Statics::NewProp_ItemTopLeftCoordinate = { "ItemTopLeftCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestItemEquip_Parms, ItemTopLeftCoordinate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestItemEquip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestItemEquip_Statics::NewProp_ItemTopLeftCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemEquip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestItemEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestItemEquip", nullptr, nullptr, Z_Construct_UFunction_UInventory_RequestItemEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemEquip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_RequestItemEquip_Statics::Inventory_eventRequestItemEquip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemEquip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RequestItemEquip_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RequestItemEquip_Statics::Inventory_eventRequestItemEquip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RequestItemEquip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RequestItemEquip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRequestItemEquip)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemTopLeftCoordinate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestItemEquip(Z_Param_ItemTopLeftCoordinate);
	P_NATIVE_END;
}
// End Class UInventory Function RequestItemEquip

// Begin Class UInventory Function RequestItemFrontend
struct Z_Construct_UFunction_UInventory_RequestItemFrontend_Statics
{
	struct Inventory_eventRequestItemFrontend_Parms
	{
		FInventoryItem Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_RequestItemFrontend_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestItemFrontend_Parms, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2061163311
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestItemFrontend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestItemFrontend_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemFrontend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestItemFrontend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestItemFrontend", nullptr, nullptr, Z_Construct_UFunction_UInventory_RequestItemFrontend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemFrontend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_RequestItemFrontend_Statics::Inventory_eventRequestItemFrontend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemFrontend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RequestItemFrontend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RequestItemFrontend_Statics::Inventory_eventRequestItemFrontend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RequestItemFrontend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RequestItemFrontend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRequestItemFrontend)
{
	P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestItemFrontend(Z_Param_Out_Item);
	P_NATIVE_END;
}
// End Class UInventory Function RequestItemFrontend

// Begin Class UInventory Function RequestItemRemove
struct Z_Construct_UFunction_UInventory_RequestItemRemove_Statics
{
	struct Inventory_eventRequestItemRemove_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTopLeftCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_RequestItemRemove_Statics::NewProp_ItemTopLeftCoordinate = { "ItemTopLeftCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestItemRemove_Parms, ItemTopLeftCoordinate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestItemRemove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestItemRemove_Statics::NewProp_ItemTopLeftCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemRemove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestItemRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestItemRemove", nullptr, nullptr, Z_Construct_UFunction_UInventory_RequestItemRemove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemRemove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_RequestItemRemove_Statics::Inventory_eventRequestItemRemove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemRemove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RequestItemRemove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RequestItemRemove_Statics::Inventory_eventRequestItemRemove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RequestItemRemove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RequestItemRemove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRequestItemRemove)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemTopLeftCoordinate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestItemRemove(Z_Param_ItemTopLeftCoordinate);
	P_NATIVE_END;
}
// End Class UInventory Function RequestItemRemove

// Begin Class UInventory Function RequestItemSize
struct Z_Construct_UFunction_UInventory_RequestItemSize_Statics
{
	struct Inventory_eventRequestItemSize_Parms
	{
		FName ItemID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventory_RequestItemSize_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestItemSize_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestItemSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestItemSize_Statics::NewProp_ItemID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestItemSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestItemSize", nullptr, nullptr, Z_Construct_UFunction_UInventory_RequestItemSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_RequestItemSize_Statics::Inventory_eventRequestItemSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RequestItemSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RequestItemSize_Statics::Inventory_eventRequestItemSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RequestItemSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RequestItemSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRequestItemSize)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestItemSize(Z_Param_ItemID);
	P_NATIVE_END;
}
// End Class UInventory Function RequestItemSize

// Begin Class UInventory Function RequestItemUse
struct Z_Construct_UFunction_UInventory_RequestItemUse_Statics
{
	struct Inventory_eventRequestItemUse_Parms
	{
		int32 ItemTopLeftCoordinate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTopLeftCoordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_RequestItemUse_Statics::NewProp_ItemTopLeftCoordinate = { "ItemTopLeftCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRequestItemUse_Parms, ItemTopLeftCoordinate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestItemUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestItemUse_Statics::NewProp_ItemTopLeftCoordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestItemUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestItemUse", nullptr, nullptr, Z_Construct_UFunction_UInventory_RequestItemUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_RequestItemUse_Statics::Inventory_eventRequestItemUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestItemUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RequestItemUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RequestItemUse_Statics::Inventory_eventRequestItemUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RequestItemUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RequestItemUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRequestItemUse)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemTopLeftCoordinate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestItemUse(Z_Param_ItemTopLeftCoordinate);
	P_NATIVE_END;
}
// End Class UInventory Function RequestItemUse

// Begin Class UInventory
void UInventory::StaticRegisterNativesUInventory()
{
	UClass* Class = UInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetID", &UInventory::execGetID },
		{ "GetItems", &UInventory::execGetItems },
		{ "GetSize", &UInventory::execGetSize },
		{ "GetTitle", &UInventory::execGetTitle },
		{ "RequestCloseInventory", &UInventory::execRequestCloseInventory },
		{ "RequestDragCancel", &UInventory::execRequestDragCancel },
		{ "RequestDragParameters", &UInventory::execRequestDragParameters },
		{ "RequestItemDivide", &UInventory::execRequestItemDivide },
		{ "RequestItemDropOnGrid", &UInventory::execRequestItemDropOnGrid },
		{ "RequestItemEquip", &UInventory::execRequestItemEquip },
		{ "RequestItemFrontend", &UInventory::execRequestItemFrontend },
		{ "RequestItemRemove", &UInventory::execRequestItemRemove },
		{ "RequestItemSize", &UInventory::execRequestItemSize },
		{ "RequestItemUse", &UInventory::execRequestItemUse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventory);
UClass* Z_Construct_UClass_UInventory_NoRegister()
{
	return UInventory::StaticClass();
}
struct Z_Construct_UClass_UInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Inventory/Inventory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableTags_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDragParametersReceived_MetaData[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemSizeReceived_MetaData[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemFrontendReceived_MetaData[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCellPopulated_MetaData[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCellCleared_MetaData[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCellUpdated_MetaData[] = {
		{ "Category", "Inventory|UMG" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemDivideRequested_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemUseRequested_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemRemoveRequested_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTryToEquipItem_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDragCancelRequested_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemDroppedOnGrid_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDragParametersRequested_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemSizeRequested_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemFrontendRequested_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryClose_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDragParametersReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemSizeReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemFrontendReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCellPopulated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCellCleared;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCellUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDivideRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemUseRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemRemoveRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTryToEquipItem;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDragCancelRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDroppedOnGrid;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDragParametersRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemSizeRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemFrontendRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryClose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_GetID, "GetID" }, // 611532123
		{ &Z_Construct_UFunction_UInventory_GetItems, "GetItems" }, // 1800885569
		{ &Z_Construct_UFunction_UInventory_GetSize, "GetSize" }, // 211346770
		{ &Z_Construct_UFunction_UInventory_GetTitle, "GetTitle" }, // 1953787717
		{ &Z_Construct_UFunction_UInventory_RequestCloseInventory, "RequestCloseInventory" }, // 461450148
		{ &Z_Construct_UFunction_UInventory_RequestDragCancel, "RequestDragCancel" }, // 2037959367
		{ &Z_Construct_UFunction_UInventory_RequestDragParameters, "RequestDragParameters" }, // 3834038070
		{ &Z_Construct_UFunction_UInventory_RequestItemDivide, "RequestItemDivide" }, // 778383650
		{ &Z_Construct_UFunction_UInventory_RequestItemDropOnGrid, "RequestItemDropOnGrid" }, // 74445650
		{ &Z_Construct_UFunction_UInventory_RequestItemEquip, "RequestItemEquip" }, // 3766996434
		{ &Z_Construct_UFunction_UInventory_RequestItemFrontend, "RequestItemFrontend" }, // 922407553
		{ &Z_Construct_UFunction_UInventory_RequestItemRemove, "RequestItemRemove" }, // 3411513014
		{ &Z_Construct_UFunction_UInventory_RequestItemSize, "RequestItemSize" }, // 4101598279
		{ &Z_Construct_UFunction_UInventory_RequestItemUse, "RequestItemUse" }, // 2745651894
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 2061163311
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 2061163311
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_AvailableTags = { "AvailableTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, AvailableTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableTags_MetaData), NewProp_AvailableTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnDragParametersReceived = { "OnDragParametersReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnDragParametersReceived), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDragParametersReceived_MetaData), NewProp_OnDragParametersReceived_MetaData) }; // 1363954592
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnItemSizeReceived = { "OnItemSizeReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnItemSizeReceived), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemSizeReceived_MetaData), NewProp_OnItemSizeReceived_MetaData) }; // 4030750486
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnItemFrontendReceived = { "OnItemFrontendReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnItemFrontendReceived), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemFrontendReceived_MetaData), NewProp_OnItemFrontendReceived_MetaData) }; // 3772487255
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnCellPopulated = { "OnCellPopulated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnCellPopulated), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellPopulated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCellPopulated_MetaData), NewProp_OnCellPopulated_MetaData) }; // 988959835
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnCellCleared = { "OnCellCleared", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnCellCleared), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellCleared__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCellCleared_MetaData), NewProp_OnCellCleared_MetaData) }; // 2855662987
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnCellUpdated = { "OnCellUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnCellUpdated), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnCellUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCellUpdated_MetaData), NewProp_OnCellUpdated_MetaData) }; // 1149333675
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnItemDivideRequested = { "OnItemDivideRequested", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnItemDivideRequested), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDivideRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemDivideRequested_MetaData), NewProp_OnItemDivideRequested_MetaData) }; // 4062474692
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnItemUseRequested = { "OnItemUseRequested", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnItemUseRequested), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemUseRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemUseRequested_MetaData), NewProp_OnItemUseRequested_MetaData) }; // 2629491934
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnItemRemoveRequested = { "OnItemRemoveRequested", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnItemRemoveRequested), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemRemoveRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemRemoveRequested_MetaData), NewProp_OnItemRemoveRequested_MetaData) }; // 66903631
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnTryToEquipItem = { "OnTryToEquipItem", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnTryToEquipItem), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnTryToEquipItem__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTryToEquipItem_MetaData), NewProp_OnTryToEquipItem_MetaData) }; // 3940934011
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnDragCancelRequested = { "OnDragCancelRequested", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnDragCancelRequested), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragCancelRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDragCancelRequested_MetaData), NewProp_OnDragCancelRequested_MetaData) }; // 4227271845
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnItemDroppedOnGrid = { "OnItemDroppedOnGrid", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnItemDroppedOnGrid), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemDroppedOnGrid__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemDroppedOnGrid_MetaData), NewProp_OnItemDroppedOnGrid_MetaData) }; // 2659765105
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnDragParametersRequested = { "OnDragParametersRequested", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnDragParametersRequested), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnDragParametersRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDragParametersRequested_MetaData), NewProp_OnDragParametersRequested_MetaData) }; // 2189005924
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnItemSizeRequested = { "OnItemSizeRequested", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnItemSizeRequested), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemSizeRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemSizeRequested_MetaData), NewProp_OnItemSizeRequested_MetaData) }; // 4079930719
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnItemFrontendRequested = { "OnItemFrontendRequested", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnItemFrontendRequested), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnItemFrontendRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemFrontendRequested_MetaData), NewProp_OnItemFrontendRequested_MetaData) }; // 870418447
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnInventoryClose = { "OnInventoryClose", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnInventoryClose), Z_Construct_UDelegateFunction_InventoryAndStatsCPP_OnInventoryClose__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryClose_MetaData), NewProp_OnInventoryClose_MetaData) }; // 2186322146
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_AvailableTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnDragParametersReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnItemSizeReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnItemFrontendReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnCellPopulated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnCellCleared,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnCellUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnItemDivideRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnItemUseRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnItemRemoveRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnTryToEquipItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnDragCancelRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnItemDroppedOnGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnDragParametersRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnItemSizeRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnItemFrontendRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnInventoryClose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
	&UInventory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventory()
{
	if (!Z_Registration_Info_UClass_UInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventory.OuterSingleton, Z_Construct_UClass_UInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventory.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UInventory>()
{
	return UInventory::StaticClass();
}
UInventory::UInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
UInventory::~UInventory() {}
// End Class UInventory

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventory, UInventory::StaticClass, TEXT("UInventory"), &Z_Registration_Info_UClass_UInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventory), 3021606165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_3580041062(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Inventory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
