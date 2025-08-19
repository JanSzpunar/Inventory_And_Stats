// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Characters/Player_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Base() {}

// Begin Cross Module References
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_ACharacter_Base();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_APlayer_Base();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_APlayer_Base_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipmentNotifyReceiver_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class APlayer_Base
void APlayer_Base::StaticRegisterNativesAPlayer_Base()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayer_Base);
UClass* Z_Construct_UClass_APlayer_Base_NoRegister()
{
	return APlayer_Base::StaticClass();
}
struct Z_Construct_UClass_APlayer_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Player_Base.h" },
		{ "ModuleRelativePath", "Characters/Player_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentNotifyReceiver_MetaData[] = {
		{ "Category", "Equipment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/Player_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentNotifyReceiver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_EquipmentNotifyReceiver = { "EquipmentNotifyReceiver", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayer_Base, EquipmentNotifyReceiver), Z_Construct_UClass_UEquipmentNotifyReceiver_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentNotifyReceiver_MetaData), NewProp_EquipmentNotifyReceiver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_EquipmentNotifyReceiver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayer_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Base_Statics::ClassParams = {
	&APlayer_Base::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayer_Base_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayer_Base()
{
	if (!Z_Registration_Info_UClass_APlayer_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayer_Base.OuterSingleton, Z_Construct_UClass_APlayer_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayer_Base.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<APlayer_Base>()
{
	return APlayer_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Base);
APlayer_Base::~APlayer_Base() {}
// End Class APlayer_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Player_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayer_Base, APlayer_Base::StaticClass, TEXT("APlayer_Base"), &Z_Registration_Info_UClass_APlayer_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayer_Base), 3517224345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Player_Base_h_3157581493(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Player_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Player_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
