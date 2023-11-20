// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PolyTheft/Actors/Pickup/Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	POLYTHEFT_API UClass* Z_Construct_UClass_AItem();
	POLYTHEFT_API UClass* Z_Construct_UClass_AItem_NoRegister();
	POLYTHEFT_API UEnum* Z_Construct_UEnum_PolyTheft_EItemType();
	POLYTHEFT_API UScriptStruct* Z_Construct_UScriptStruct_FItemInfo();
	UPackage* Z_Construct_UPackage__Script_PolyTheft();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PolyTheft_EItemType, (UObject*)Z_Construct_UPackage__Script_PolyTheft(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> POLYTHEFT_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_PolyTheft_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PolyTheft_EItemType_Statics::Enumerators[] = {
		{ "EItemType::Cash", (int64)EItemType::Cash },
		{ "EItemType::Jewelery", (int64)EItemType::Jewelery },
		{ "EItemType::Electronics", (int64)EItemType::Electronics },
		{ "EItemType::Tools", (int64)EItemType::Tools },
		{ "EItemType::Alcohol", (int64)EItemType::Alcohol },
		{ "EItemType::Contraband", (int64)EItemType::Contraband },
		{ "EItemType::Art", (int64)EItemType::Art },
		{ "EItemType::Other", (int64)EItemType::Other },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PolyTheft_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "Alcohol.DisplayName", "Alcohol" },
		{ "Alcohol.Name", "EItemType::Alcohol" },
		{ "Art.DisplayName", "Art" },
		{ "Art.Name", "EItemType::Art" },
		{ "BlueprintType", "true" },
		{ "Cash.DisplayName", "Cash" },
		{ "Cash.Name", "EItemType::Cash" },
		{ "Contraband.DisplayName", "Contraband" },
		{ "Contraband.Name", "EItemType::Contraband" },
		{ "Electronics.DisplayName", "Electronics" },
		{ "Electronics.Name", "EItemType::Electronics" },
		{ "Jewelery.DisplayName", "Jewelery" },
		{ "Jewelery.Name", "EItemType::Jewelery" },
		{ "ModuleRelativePath", "Actors/Pickup/Item.h" },
		{ "Other.DisplayName", "Other" },
		{ "Other.Name", "EItemType::Other" },
		{ "Tools.DisplayName", "Tools" },
		{ "Tools.Name", "EItemType::Tools" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PolyTheft_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PolyTheft,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_PolyTheft_EItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PolyTheft_EItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PolyTheft_EItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PolyTheft_EItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PolyTheft_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_PolyTheft_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FItemInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemInfo;
class UScriptStruct* FItemInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemInfo, (UObject*)Z_Construct_UPackage__Script_PolyTheft(), TEXT("ItemInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ItemInfo.OuterSingleton;
}
template<> POLYTHEFT_API UScriptStruct* StaticStruct<FItemInfo>()
{
	return FItemInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueRandomization_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueRandomization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Actors/Pickup/Item.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ItemInfo" },
		{ "ModuleRelativePath", "Actors/Pickup/Item.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "ItemInfo" },
		{ "ModuleRelativePath", "Actors/Pickup/Item.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemInfo, ItemType), Z_Construct_UEnum_PolyTheft_EItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_ItemType_MetaData)) }; // 4197397649
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "ItemInfo" },
		{ "ModuleRelativePath", "Actors/Pickup/Item.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemInfo, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "ItemInfo" },
		{ "ModuleRelativePath", "Actors/Pickup/Item.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemInfo, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ItemInfo" },
		{ "ModuleRelativePath", "Actors/Pickup/Item.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemInfo, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_ValueRandomization_MetaData[] = {
		{ "Category", "ItemInfo" },
		{ "ModuleRelativePath", "Actors/Pickup/Item.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_ValueRandomization = { "ValueRandomization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemInfo, ValueRandomization), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_ValueRandomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_ValueRandomization_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_ValueRandomization,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PolyTheft,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemInfo",
		sizeof(FItemInfo),
		alignof(FItemInfo),
		Z_Construct_UScriptStruct_FItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemInfo.InnerSingleton, Z_Construct_UScriptStruct_FItemInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemInfo.InnerSingleton;
	}
	void AItem::StaticRegisterNativesAItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItem);
	UClass* Z_Construct_UClass_AItem_NoRegister()
	{
		return AItem::StaticClass();
	}
	struct Z_Construct_UClass_AItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PolyTheft,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Pickup/Item.h" },
		{ "ModuleRelativePath", "Actors/Pickup/Item.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItem_Statics::ClassParams = {
		&AItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItem()
	{
		if (!Z_Registration_Info_UClass_AItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItem.OuterSingleton, Z_Construct_UClass_AItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItem.OuterSingleton;
	}
	template<> POLYTHEFT_API UClass* StaticClass<AItem>()
	{
		return AItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem);
	AItem::~AItem() {}
	struct Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_Statics::EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4197397649U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_Statics::ScriptStructInfo[] = {
		{ FItemInfo::StaticStruct, Z_Construct_UScriptStruct_FItemInfo_Statics::NewStructOps, TEXT("ItemInfo"), &Z_Registration_Info_UScriptStruct_ItemInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemInfo), 1024408531U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItem, AItem::StaticClass, TEXT("AItem"), &Z_Registration_Info_UClass_AItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItem), 2656615654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_1189965047(TEXT("/Script/PolyTheft"),
		Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
