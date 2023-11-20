// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/Pickup/Item.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POLYTHEFT_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define POLYTHEFT_Item_generated_h

#define FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemInfo_Statics; \
	POLYTHEFT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> POLYTHEFT_API UScriptStruct* StaticStruct<struct FItemInfo>();

#define FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_SPARSE_DATA
#define FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_RPC_WRAPPERS
#define FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_ACCESSORS
#define FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PolyTheft"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PolyTheft"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	NO_API virtual ~AItem();


#define FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem) \
	NO_API virtual ~AItem();


#define FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_46_PROLOG
#define FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_SPARSE_DATA \
	FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_RPC_WRAPPERS \
	FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_ACCESSORS \
	FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_INCLASS \
	FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_SPARSE_DATA \
	FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_ACCESSORS \
	FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_INCLASS_NO_PURE_DECLS \
	FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POLYTHEFT_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PolyTheft_Source_PolyTheft_Actors_Pickup_Item_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Cash) \
	op(EItemType::Jewelery) \
	op(EItemType::Electronics) \
	op(EItemType::Tools) \
	op(EItemType::Alcohol) \
	op(EItemType::Contraband) \
	op(EItemType::Art) \
	op(EItemType::Other) 

enum class EItemType;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> POLYTHEFT_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
