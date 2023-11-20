// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyTheft_init() {}
	POLYTHEFT_API UFunction* Z_Construct_UDelegateFunction_PolyTheft_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PolyTheft;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PolyTheft()
	{
		if (!Z_Registration_Info_UPackage__Script_PolyTheft.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PolyTheft_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PolyTheft",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAE6B7176,
				0xCA9C7593,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PolyTheft.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PolyTheft.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PolyTheft(Z_Construct_UPackage__Script_PolyTheft, TEXT("/Script/PolyTheft"), Z_Registration_Info_UPackage__Script_PolyTheft, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAE6B7176, 0xCA9C7593));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
