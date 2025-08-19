// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Saving/SavePlayersData.h"
#include "InventoryAndStatsCPP/Stats/BaseStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavePlayersData() {}

// Begin Cross Module References
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FBaseStats();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FSavePlayersData();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin ScriptStruct FSavePlayersData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SavePlayersData;
class UScriptStruct* FSavePlayersData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SavePlayersData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SavePlayersData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavePlayersData, (UObject*)Z_Construct_UPackage__Script_InventoryAndStatsCPP(), TEXT("SavePlayersData"));
	}
	return Z_Registration_Info_UScriptStruct_SavePlayersData.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UScriptStruct* StaticStruct<FSavePlayersData>()
{
	return FSavePlayersData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSavePlayersData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Saving/SavePlayersData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Defaulted_MetaData[] = {
		{ "ModuleRelativePath", "Saving/SavePlayersData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledCharacterIndex_MetaData[] = {
		{ "ModuleRelativePath", "Saving/SavePlayersData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[] = {
		{ "Category", "SavePlayersData" },
		{ "ModuleRelativePath", "Saving/SavePlayersData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Defaulted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Defaulted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControlledCharacterIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Characters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Characters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavePlayersData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSavePlayersData_Statics::NewProp_Defaulted_SetBit(void* Obj)
{
	((FSavePlayersData*)Obj)->Defaulted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSavePlayersData_Statics::NewProp_Defaulted = { "Defaulted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSavePlayersData), &Z_Construct_UScriptStruct_FSavePlayersData_Statics::NewProp_Defaulted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Defaulted_MetaData), NewProp_Defaulted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSavePlayersData_Statics::NewProp_ControlledCharacterIndex = { "ControlledCharacterIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavePlayersData, ControlledCharacterIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledCharacterIndex_MetaData), NewProp_ControlledCharacterIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSavePlayersData_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseStats, METADATA_PARAMS(0, nullptr) }; // 3185252591
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSavePlayersData_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavePlayersData, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Characters_MetaData), NewProp_Characters_MetaData) }; // 3185252591
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavePlayersData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavePlayersData_Statics::NewProp_Defaulted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavePlayersData_Statics::NewProp_ControlledCharacterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavePlayersData_Statics::NewProp_Characters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavePlayersData_Statics::NewProp_Characters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavePlayersData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavePlayersData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
	nullptr,
	&NewStructOps,
	"SavePlayersData",
	Z_Construct_UScriptStruct_FSavePlayersData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavePlayersData_Statics::PropPointers),
	sizeof(FSavePlayersData),
	alignof(FSavePlayersData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavePlayersData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSavePlayersData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSavePlayersData()
{
	if (!Z_Registration_Info_UScriptStruct_SavePlayersData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SavePlayersData.InnerSingleton, Z_Construct_UScriptStruct_FSavePlayersData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SavePlayersData.InnerSingleton;
}
// End ScriptStruct FSavePlayersData

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SavePlayersData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSavePlayersData::StaticStruct, Z_Construct_UScriptStruct_FSavePlayersData_Statics::NewStructOps, TEXT("SavePlayersData"), &Z_Registration_Info_UScriptStruct_SavePlayersData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSavePlayersData), 135201384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SavePlayersData_h_740425217(TEXT("/Script/InventoryAndStatsCPP"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SavePlayersData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SavePlayersData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
