// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Inventory/EquipmentNotifier.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentNotifier() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipmentNotifier();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipmentNotifier_NoRegister();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentBonusPayload();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin ScriptStruct FEquipmentBonusPayload
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentBonusPayload;
class UScriptStruct* FEquipmentBonusPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentBonusPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentBonusPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentBonusPayload, (UObject*)Z_Construct_UPackage__Script_InventoryAndStatsCPP(), TEXT("EquipmentBonusPayload"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentBonusPayload.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UScriptStruct* StaticStruct<FEquipmentBonusPayload>()
{
	return FEquipmentBonusPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/EquipmentNotifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentBonus_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/EquipmentNotifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EquipmentBonus_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentBonus_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EquipmentBonus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentBonusPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::NewProp_EquipmentBonus_ValueProp = { "EquipmentBonus", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::NewProp_EquipmentBonus_Key_KeyProp = { "EquipmentBonus_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::NewProp_EquipmentBonus = { "EquipmentBonus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentBonusPayload, EquipmentBonus), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentBonus_MetaData), NewProp_EquipmentBonus_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::NewProp_EquipmentBonus_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::NewProp_EquipmentBonus_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::NewProp_EquipmentBonus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
	nullptr,
	&NewStructOps,
	"EquipmentBonusPayload",
	Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::PropPointers),
	sizeof(FEquipmentBonusPayload),
	alignof(FEquipmentBonusPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentBonusPayload()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentBonusPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentBonusPayload.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentBonusPayload.InnerSingleton;
}
// End ScriptStruct FEquipmentBonusPayload

// Begin Class UEquipmentNotifier
void UEquipmentNotifier::StaticRegisterNativesUEquipmentNotifier()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentNotifier);
UClass* Z_Construct_UClass_UEquipmentNotifier_NoRegister()
{
	return UEquipmentNotifier::StaticClass();
}
struct Z_Construct_UClass_UEquipmentNotifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/EquipmentNotifier.h" },
		{ "ModuleRelativePath", "Inventory/EquipmentNotifier.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentNotifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEquipmentNotifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentNotifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentNotifier_Statics::ClassParams = {
	&UEquipmentNotifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentNotifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentNotifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipmentNotifier()
{
	if (!Z_Registration_Info_UClass_UEquipmentNotifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentNotifier.OuterSingleton, Z_Construct_UClass_UEquipmentNotifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentNotifier.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UEquipmentNotifier>()
{
	return UEquipmentNotifier::StaticClass();
}
UEquipmentNotifier::UEquipmentNotifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentNotifier);
UEquipmentNotifier::~UEquipmentNotifier() {}
// End Class UEquipmentNotifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentNotifier_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEquipmentBonusPayload::StaticStruct, Z_Construct_UScriptStruct_FEquipmentBonusPayload_Statics::NewStructOps, TEXT("EquipmentBonusPayload"), &Z_Registration_Info_UScriptStruct_EquipmentBonusPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentBonusPayload), 817643992U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentNotifier, UEquipmentNotifier::StaticClass, TEXT("UEquipmentNotifier"), &Z_Registration_Info_UClass_UEquipmentNotifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentNotifier), 2314935891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentNotifier_h_901025384(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentNotifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentNotifier_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentNotifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentNotifier_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
