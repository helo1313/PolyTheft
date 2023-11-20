// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PolyTheft/PolyTheftGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyTheftGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	POLYTHEFT_API UClass* Z_Construct_UClass_APolyTheftGameMode();
	POLYTHEFT_API UClass* Z_Construct_UClass_APolyTheftGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PolyTheft();
// End Cross Module References
	void APolyTheftGameMode::StaticRegisterNativesAPolyTheftGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APolyTheftGameMode);
	UClass* Z_Construct_UClass_APolyTheftGameMode_NoRegister()
	{
		return APolyTheftGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APolyTheftGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APolyTheftGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PolyTheft,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APolyTheftGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PolyTheftGameMode.h" },
		{ "ModuleRelativePath", "PolyTheftGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APolyTheftGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APolyTheftGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APolyTheftGameMode_Statics::ClassParams = {
		&APolyTheftGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APolyTheftGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APolyTheftGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APolyTheftGameMode()
	{
		if (!Z_Registration_Info_UClass_APolyTheftGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APolyTheftGameMode.OuterSingleton, Z_Construct_UClass_APolyTheftGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APolyTheftGameMode.OuterSingleton;
	}
	template<> POLYTHEFT_API UClass* StaticClass<APolyTheftGameMode>()
	{
		return APolyTheftGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APolyTheftGameMode);
	APolyTheftGameMode::~APolyTheftGameMode() {}
	struct Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_PolyTheftGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_PolyTheftGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APolyTheftGameMode, APolyTheftGameMode::StaticClass, TEXT("APolyTheftGameMode"), &Z_Registration_Info_UClass_APolyTheftGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APolyTheftGameMode), 4031449665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_PolyTheftGameMode_h_2928591419(TEXT("/Script/PolyTheft"),
		Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_PolyTheftGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PolyTheft_Source_PolyTheft_PolyTheftGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
