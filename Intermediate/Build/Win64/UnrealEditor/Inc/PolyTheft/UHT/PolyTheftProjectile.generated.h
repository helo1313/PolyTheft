// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PolyTheftProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef POLYTHEFT_PolyTheftProjectile_generated_h
#error "PolyTheftProjectile.generated.h already included, missing '#pragma once' in PolyTheftProjectile.h"
#endif
#define POLYTHEFT_PolyTheftProjectile_generated_h

#define FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_SPARSE_DATA
#define FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_ACCESSORS
#define FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPolyTheftProjectile(); \
	friend struct Z_Construct_UClass_APolyTheftProjectile_Statics; \
public: \
	DECLARE_CLASS(APolyTheftProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PolyTheft"), NO_API) \
	DECLARE_SERIALIZER(APolyTheftProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPolyTheftProjectile(); \
	friend struct Z_Construct_UClass_APolyTheftProjectile_Statics; \
public: \
	DECLARE_CLASS(APolyTheftProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PolyTheft"), NO_API) \
	DECLARE_SERIALIZER(APolyTheftProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APolyTheftProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APolyTheftProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APolyTheftProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APolyTheftProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APolyTheftProjectile(APolyTheftProjectile&&); \
	NO_API APolyTheftProjectile(const APolyTheftProjectile&); \
public: \
	NO_API virtual ~APolyTheftProjectile();


#define FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APolyTheftProjectile(APolyTheftProjectile&&); \
	NO_API APolyTheftProjectile(const APolyTheftProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APolyTheftProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APolyTheftProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APolyTheftProjectile) \
	NO_API virtual ~APolyTheftProjectile();


#define FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_12_PROLOG
#define FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_SPARSE_DATA \
	FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_RPC_WRAPPERS \
	FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_ACCESSORS \
	FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_INCLASS \
	FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_SPARSE_DATA \
	FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_ACCESSORS \
	FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POLYTHEFT_API UClass* StaticClass<class APolyTheftProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PolyTheft_Source_PolyTheft_PolyTheftProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
