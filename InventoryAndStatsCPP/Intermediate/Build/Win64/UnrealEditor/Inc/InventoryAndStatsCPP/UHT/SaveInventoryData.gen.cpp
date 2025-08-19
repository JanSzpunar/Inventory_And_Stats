// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Saving/SaveInventoryData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveInventoryData() {}

// Begin Cross Module References
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FSaveInventoryData();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin ScriptStruct FSaveInventoryData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveInventoryData;
class UScriptStruct* FSaveInventoryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveInventoryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveInventoryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveInventoryData, (UObject*)Z_Construct_UPackage__Script_InventoryAndStatsCPP(), TEXT("SaveInventoryData"));
	}
	return Z_Registration_Info_UScriptStruct_SaveInventoryData.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UScriptStruct* StaticStruct<FSaveInventoryData>()
{
	return FSaveInventoryData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSaveInventoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Saving/SaveInventoryData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveInventoryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveInventoryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
	nullptr,
	&NewStructOps,
	"SaveInventoryData",
	nullptr,
	0,
	sizeof(FSaveInventoryData),
	alignof(FSaveInventoryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveInventoryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSaveInventoryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSaveInventoryData()
{
	if (!Z_Registration_Info_UScriptStruct_SaveInventoryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveInventoryData.InnerSingleton, Z_Construct_UScriptStruct_FSaveInventoryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SaveInventoryData.InnerSingleton;
}
// End ScriptStruct FSaveInventoryData

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveInventoryData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSaveInventoryData::StaticStruct, Z_Construct_UScriptStruct_FSaveInventoryData_Statics::NewStructOps, TEXT("SaveInventoryData"), &Z_Registration_Info_UScriptStruct_SaveInventoryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveInventoryData), 372733887U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveInventoryData_h_75735971(TEXT("/Script/InventoryAndStatsCPP"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveInventoryData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveInventoryData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
