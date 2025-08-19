// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Inventory/InventoryInterface.h"
#include "InventoryAndStatsCPP/Inventory/InventoryItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventory_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventoryInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventoryInterface_NoRegister();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FAddItemResult();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FRemoveItemResult();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin ScriptStruct FAddItemResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddItemResult;
class UScriptStruct* FAddItemResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddItemResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddItemResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddItemResult, (UObject*)Z_Construct_UPackage__Script_InventoryAndStatsCPP(), TEXT("AddItemResult"));
	}
	return Z_Registration_Info_UScriptStruct_AddItemResult.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UScriptStruct* StaticStruct<FAddItemResult>()
{
	return FAddItemResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAddItemResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "Category", "AddItemResult" },
		{ "ModuleRelativePath", "Inventory/InventoryInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountLeft_MetaData[] = {
		{ "Category", "AddItemResult" },
		{ "ModuleRelativePath", "Inventory/InventoryInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddItemResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAddItemResult_Statics::NewProp_Success_SetBit(void* Obj)
{
	((FAddItemResult*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAddItemResult_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAddItemResult), &Z_Construct_UScriptStruct_FAddItemResult_Statics::NewProp_Success_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAddItemResult_Statics::NewProp_AmountLeft = { "AmountLeft", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddItemResult, AmountLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountLeft_MetaData), NewProp_AmountLeft_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddItemResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddItemResult_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddItemResult_Statics::NewProp_AmountLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddItemResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddItemResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
	nullptr,
	&NewStructOps,
	"AddItemResult",
	Z_Construct_UScriptStruct_FAddItemResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddItemResult_Statics::PropPointers),
	sizeof(FAddItemResult),
	alignof(FAddItemResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddItemResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAddItemResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAddItemResult()
{
	if (!Z_Registration_Info_UScriptStruct_AddItemResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddItemResult.InnerSingleton, Z_Construct_UScriptStruct_FAddItemResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AddItemResult.InnerSingleton;
}
// End ScriptStruct FAddItemResult

// Begin ScriptStruct FRemoveItemResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoveItemResult;
class UScriptStruct* FRemoveItemResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoveItemResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoveItemResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoveItemResult, (UObject*)Z_Construct_UPackage__Script_InventoryAndStatsCPP(), TEXT("RemoveItemResult"));
	}
	return Z_Registration_Info_UScriptStruct_RemoveItemResult.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UScriptStruct* StaticStruct<FRemoveItemResult>()
{
	return FRemoveItemResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemoveItemResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "Category", "RemoveItemResult" },
		{ "ModuleRelativePath", "Inventory/InventoryInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotRemovedAmount_MetaData[] = {
		{ "Category", "RemoveItemResult" },
		{ "ModuleRelativePath", "Inventory/InventoryInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NotRemovedAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoveItemResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRemoveItemResult_Statics::NewProp_Success_SetBit(void* Obj)
{
	((FRemoveItemResult*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoveItemResult_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRemoveItemResult), &Z_Construct_UScriptStruct_FRemoveItemResult_Statics::NewProp_Success_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoveItemResult_Statics::NewProp_NotRemovedAmount = { "NotRemovedAmount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoveItemResult, NotRemovedAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotRemovedAmount_MetaData), NewProp_NotRemovedAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoveItemResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveItemResult_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveItemResult_Statics::NewProp_NotRemovedAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveItemResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoveItemResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
	nullptr,
	&NewStructOps,
	"RemoveItemResult",
	Z_Construct_UScriptStruct_FRemoveItemResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveItemResult_Statics::PropPointers),
	sizeof(FRemoveItemResult),
	alignof(FRemoveItemResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveItemResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoveItemResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemoveItemResult()
{
	if (!Z_Registration_Info_UScriptStruct_RemoveItemResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoveItemResult.InnerSingleton, Z_Construct_UScriptStruct_FRemoveItemResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemoveItemResult.InnerSingleton;
}
// End ScriptStruct FRemoveItemResult

// Begin Interface UInventoryInterface Function AddItemToInventory
struct Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics
{
	struct InventoryInterface_eventAddItemToInventory_Parms
	{
		FName Inventory;
		FInventoryItem Item;
		FAddItemResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryInterface_eventAddItemToInventory_Parms, Inventory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryInterface_eventAddItemToInventory_Parms, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 2061163311
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryInterface_eventAddItemToInventory_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddItemResult, METADATA_PARAMS(0, nullptr) }; // 4104827342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryInterface, nullptr, "AddItemToInventory", nullptr, nullptr, Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::InventoryInterface_eventAddItemToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::InventoryInterface_eventAddItemToInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryInterface_AddItemToInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryInterface_AddItemToInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryInterface::execAddItemToInventory)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Inventory);
	P_GET_STRUCT(FInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddItemResult*)Z_Param__Result=P_THIS->AddItemToInventory(Z_Param_Inventory,Z_Param_Item);
	P_NATIVE_END;
}
// End Interface UInventoryInterface Function AddItemToInventory

// Begin Interface UInventoryInterface Function HasItemInInventory
struct Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics
{
	struct InventoryInterface_eventHasItemInInventory_Parms
	{
		FName Inventory;
		FName Item;
		int32 Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryInterface_eventHasItemInInventory_Parms, Inventory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryInterface_eventHasItemInInventory_Parms, Item), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryInterface_eventHasItemInInventory_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryInterface_eventHasItemInInventory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryInterface_eventHasItemInInventory_Parms), &Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryInterface, nullptr, "HasItemInInventory", nullptr, nullptr, Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::InventoryInterface_eventHasItemInInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::InventoryInterface_eventHasItemInInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryInterface_HasItemInInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryInterface_HasItemInInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryInterface::execHasItemInInventory)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Inventory);
	P_GET_PROPERTY(FNameProperty,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasItemInInventory(Z_Param_Inventory,Z_Param_Item,Z_Param_Amount);
	P_NATIVE_END;
}
// End Interface UInventoryInterface Function HasItemInInventory

// Begin Interface UInventoryInterface Function RemoveItemFromInventory
struct Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics
{
	struct InventoryInterface_eventRemoveItemFromInventory_Parms
	{
		FName Inventory;
		FName Item;
		int32 Amount;
		bool AllowPartial;
		FRemoveItemResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static void NewProp_AllowPartial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowPartial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryInterface_eventRemoveItemFromInventory_Parms, Inventory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryInterface_eventRemoveItemFromInventory_Parms, Item), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryInterface_eventRemoveItemFromInventory_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::NewProp_AllowPartial_SetBit(void* Obj)
{
	((InventoryInterface_eventRemoveItemFromInventory_Parms*)Obj)->AllowPartial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::NewProp_AllowPartial = { "AllowPartial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryInterface_eventRemoveItemFromInventory_Parms), &Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::NewProp_AllowPartial_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryInterface_eventRemoveItemFromInventory_Parms, ReturnValue), Z_Construct_UScriptStruct_FRemoveItemResult, METADATA_PARAMS(0, nullptr) }; // 3185035635
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::NewProp_AllowPartial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryInterface, nullptr, "RemoveItemFromInventory", nullptr, nullptr, Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::InventoryInterface_eventRemoveItemFromInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::InventoryInterface_eventRemoveItemFromInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryInterface::execRemoveItemFromInventory)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Inventory);
	P_GET_PROPERTY(FNameProperty,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_GET_UBOOL(Z_Param_AllowPartial);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRemoveItemResult*)Z_Param__Result=P_THIS->RemoveItemFromInventory(Z_Param_Inventory,Z_Param_Item,Z_Param_Amount,Z_Param_AllowPartial);
	P_NATIVE_END;
}
// End Interface UInventoryInterface Function RemoveItemFromInventory

// Begin Interface UInventoryInterface Function RequestInventory
struct Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics
{
	struct InventoryInterface_eventRequestInventory_Parms
	{
		FName Inventory;
		UInventory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryInterface_eventRequestInventory_Parms, Inventory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryInterface_eventRequestInventory_Parms, ReturnValue), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryInterface, nullptr, "RequestInventory", nullptr, nullptr, Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics::InventoryInterface_eventRequestInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics::InventoryInterface_eventRequestInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryInterface_RequestInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryInterface_RequestInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryInterface::execRequestInventory)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Inventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInventory**)Z_Param__Result=P_THIS->RequestInventory(Z_Param_Inventory);
	P_NATIVE_END;
}
// End Interface UInventoryInterface Function RequestInventory

// Begin Interface UInventoryInterface
void UInventoryInterface::StaticRegisterNativesUInventoryInterface()
{
	UClass* Class = UInventoryInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemToInventory", &IInventoryInterface::execAddItemToInventory },
		{ "HasItemInInventory", &IInventoryInterface::execHasItemInInventory },
		{ "RemoveItemFromInventory", &IInventoryInterface::execRemoveItemFromInventory },
		{ "RequestInventory", &IInventoryInterface::execRequestInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryInterface);
UClass* Z_Construct_UClass_UInventoryInterface_NoRegister()
{
	return UInventoryInterface::StaticClass();
}
struct Z_Construct_UClass_UInventoryInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Inventory/InventoryInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryInterface_AddItemToInventory, "AddItemToInventory" }, // 1886823347
		{ &Z_Construct_UFunction_UInventoryInterface_HasItemInInventory, "HasItemInInventory" }, // 4082769422
		{ &Z_Construct_UFunction_UInventoryInterface_RemoveItemFromInventory, "RemoveItemFromInventory" }, // 3632307264
		{ &Z_Construct_UFunction_UInventoryInterface_RequestInventory, "RequestInventory" }, // 1639160666
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryInterface_Statics::ClassParams = {
	&UInventoryInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryInterface()
{
	if (!Z_Registration_Info_UClass_UInventoryInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryInterface.OuterSingleton, Z_Construct_UClass_UInventoryInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryInterface.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UInventoryInterface>()
{
	return UInventoryInterface::StaticClass();
}
UInventoryInterface::UInventoryInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryInterface);
UInventoryInterface::~UInventoryInterface() {}
// End Interface UInventoryInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAddItemResult::StaticStruct, Z_Construct_UScriptStruct_FAddItemResult_Statics::NewStructOps, TEXT("AddItemResult"), &Z_Registration_Info_UScriptStruct_AddItemResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddItemResult), 4104827342U) },
		{ FRemoveItemResult::StaticStruct, Z_Construct_UScriptStruct_FRemoveItemResult_Statics::NewStructOps, TEXT("RemoveItemResult"), &Z_Registration_Info_UScriptStruct_RemoveItemResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoveItemResult), 3185035635U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryInterface, UInventoryInterface::StaticClass, TEXT("UInventoryInterface"), &Z_Registration_Info_UClass_UInventoryInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryInterface), 1598029802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_3183765866(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_InventoryInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
