// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Stats/StatsConfigData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsConfigData() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORYANDSTATSCPP_API UEnum* Z_Construct_UEnum_InventoryAndStatsCPP_E_StatType();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FStatsConfigData();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Enum E_StatType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_StatType;
static UEnum* E_StatType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_StatType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_StatType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventoryAndStatsCPP_E_StatType, (UObject*)Z_Construct_UPackage__Script_InventoryAndStatsCPP(), TEXT("E_StatType"));
	}
	return Z_Registration_Info_UEnum_E_StatType.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UEnum* StaticEnum<E_StatType>()
{
	return E_StatType_StaticEnum();
}
struct Z_Construct_UEnum_InventoryAndStatsCPP_E_StatType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Additional.DisplayName", "Additional" },
		{ "Additional.Name", "E_StatType::Additional" },
		{ "Basic.DisplayName", "Basic" },
		{ "Basic.Name", "E_StatType::Basic" },
		{ "BlueprintType", "true" },
		{ "Main.DisplayName", "Main" },
		{ "Main.Name", "E_StatType::Main" },
		{ "ModuleRelativePath", "Stats/StatsConfigData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_StatType::Basic", (int64)E_StatType::Basic },
		{ "E_StatType::Main", (int64)E_StatType::Main },
		{ "E_StatType::Additional", (int64)E_StatType::Additional },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventoryAndStatsCPP_E_StatType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
	nullptr,
	"E_StatType",
	"E_StatType",
	Z_Construct_UEnum_InventoryAndStatsCPP_E_StatType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InventoryAndStatsCPP_E_StatType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventoryAndStatsCPP_E_StatType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventoryAndStatsCPP_E_StatType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InventoryAndStatsCPP_E_StatType()
{
	if (!Z_Registration_Info_UEnum_E_StatType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_StatType.InnerSingleton, Z_Construct_UEnum_InventoryAndStatsCPP_E_StatType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_StatType.InnerSingleton;
}
// End Enum E_StatType

// Begin ScriptStruct FStatsConfigData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StatsConfigData;
class UScriptStruct* FStatsConfigData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StatsConfigData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StatsConfigData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatsConfigData, (UObject*)Z_Construct_UPackage__Script_InventoryAndStatsCPP(), TEXT("StatsConfigData"));
	}
	return Z_Registration_Info_UScriptStruct_StatsConfigData.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UScriptStruct* StaticStruct<FStatsConfigData>()
{
	return FStatsConfigData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStatsConfigData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Stats/StatsConfigData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
		{ "Category", "StatsConfigData" },
		{ "ModuleRelativePath", "Stats/StatsConfigData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerLevel_MetaData[] = {
		{ "Category", "StatsConfigData" },
		{ "ModuleRelativePath", "Stats/StatsConfigData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "StatsConfigData" },
		{ "ModuleRelativePath", "Stats/StatsConfigData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dependencies_MetaData[] = {
		{ "Category", "StatsConfigData" },
		{ "ModuleRelativePath", "Stats/StatsConfigData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Base;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Dependencies_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dependencies_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Dependencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatsConfigData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatsConfigData, Base), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_MetaData), NewProp_Base_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewProp_PerLevel = { "PerLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatsConfigData, PerLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerLevel_MetaData), NewProp_PerLevel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatsConfigData, Type), Z_Construct_UEnum_InventoryAndStatsCPP_E_StatType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2284919710
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewProp_Dependencies_ValueProp = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewProp_Dependencies_Key_KeyProp = { "Dependencies_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatsConfigData, Dependencies), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dependencies_MetaData), NewProp_Dependencies_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatsConfigData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewProp_PerLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewProp_Dependencies_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewProp_Dependencies_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewProp_Dependencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsConfigData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatsConfigData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
	nullptr,
	&NewStructOps,
	"StatsConfigData",
	Z_Construct_UScriptStruct_FStatsConfigData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsConfigData_Statics::PropPointers),
	sizeof(FStatsConfigData),
	alignof(FStatsConfigData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsConfigData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatsConfigData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStatsConfigData()
{
	if (!Z_Registration_Info_UScriptStruct_StatsConfigData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StatsConfigData.InnerSingleton, Z_Construct_UScriptStruct_FStatsConfigData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StatsConfigData.InnerSingleton;
}
// End ScriptStruct FStatsConfigData

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfigData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ E_StatType_StaticEnum, TEXT("E_StatType"), &Z_Registration_Info_UEnum_E_StatType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2284919710U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStatsConfigData::StaticStruct, Z_Construct_UScriptStruct_FStatsConfigData_Statics::NewStructOps, TEXT("StatsConfigData"), &Z_Registration_Info_UScriptStruct_StatsConfigData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatsConfigData), 792928407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfigData_h_1117818608(TEXT("/Script/InventoryAndStatsCPP"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfigData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfigData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfigData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfigData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
