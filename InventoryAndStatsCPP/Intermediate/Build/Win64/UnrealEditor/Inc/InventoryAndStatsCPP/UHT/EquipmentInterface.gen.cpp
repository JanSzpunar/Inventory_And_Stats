// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Inventory/EquipmentInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipment_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipmentInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipmentInterface_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipmentNotifier_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Interface UEquipmentInterface Function RequestEquipmentNotifier
struct Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics
{
	struct EquipmentInterface_eventRequestEquipmentNotifier_Parms
	{
		FGameplayTag Tag;
		int32 PlayerIndex;
		UEquipmentNotifier* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/EquipmentInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentInterface_eventRequestEquipmentNotifier_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentInterface_eventRequestEquipmentNotifier_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentInterface_eventRequestEquipmentNotifier_Parms, ReturnValue), Z_Construct_UClass_UEquipmentNotifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentInterface, nullptr, "RequestEquipmentNotifier", nullptr, nullptr, Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::EquipmentInterface_eventRequestEquipmentNotifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::EquipmentInterface_eventRequestEquipmentNotifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEquipmentInterface::execRequestEquipmentNotifier)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquipmentNotifier**)Z_Param__Result=P_THIS->RequestEquipmentNotifier(Z_Param_Tag,Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// End Interface UEquipmentInterface Function RequestEquipmentNotifier

// Begin Interface UEquipmentInterface Function RequestEquipmentObject
struct Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics
{
	struct EquipmentInterface_eventRequestEquipmentObject_Parms
	{
		FGameplayTag Tag;
		int32 PlayerIndex;
		UEquipment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/EquipmentInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentInterface_eventRequestEquipmentObject_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentInterface_eventRequestEquipmentObject_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentInterface_eventRequestEquipmentObject_Parms, ReturnValue), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentInterface, nullptr, "RequestEquipmentObject", nullptr, nullptr, Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::EquipmentInterface_eventRequestEquipmentObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::EquipmentInterface_eventRequestEquipmentObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEquipmentInterface::execRequestEquipmentObject)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquipment**)Z_Param__Result=P_THIS->RequestEquipmentObject(Z_Param_Tag,Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// End Interface UEquipmentInterface Function RequestEquipmentObject

// Begin Interface UEquipmentInterface
void UEquipmentInterface::StaticRegisterNativesUEquipmentInterface()
{
	UClass* Class = UEquipmentInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestEquipmentNotifier", &IEquipmentInterface::execRequestEquipmentNotifier },
		{ "RequestEquipmentObject", &IEquipmentInterface::execRequestEquipmentObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentInterface);
UClass* Z_Construct_UClass_UEquipmentInterface_NoRegister()
{
	return UEquipmentInterface::StaticClass();
}
struct Z_Construct_UClass_UEquipmentInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Inventory/EquipmentInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentNotifier, "RequestEquipmentNotifier" }, // 3525402165
		{ &Z_Construct_UFunction_UEquipmentInterface_RequestEquipmentObject, "RequestEquipmentObject" }, // 970745300
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEquipmentInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEquipmentInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentInterface_Statics::ClassParams = {
	&UEquipmentInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipmentInterface()
{
	if (!Z_Registration_Info_UClass_UEquipmentInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentInterface.OuterSingleton, Z_Construct_UClass_UEquipmentInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentInterface.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UEquipmentInterface>()
{
	return UEquipmentInterface::StaticClass();
}
UEquipmentInterface::UEquipmentInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentInterface);
UEquipmentInterface::~UEquipmentInterface() {}
// End Interface UEquipmentInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentInterface, UEquipmentInterface::StaticClass, TEXT("UEquipmentInterface"), &Z_Registration_Info_UClass_UEquipmentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentInterface), 1922836400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_3181611637(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
