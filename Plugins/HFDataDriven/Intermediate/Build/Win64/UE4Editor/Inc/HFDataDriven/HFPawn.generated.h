// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HFDATADRIVEN_HFPawn_generated_h
#error "HFPawn.generated.h already included, missing '#pragma once' in HFPawn.h"
#endif
#define HFDATADRIVEN_HFPawn_generated_h

#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_SPARSE_DATA
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_RPC_WRAPPERS
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHFPawn(); \
	friend struct Z_Construct_UClass_AHFPawn_Statics; \
public: \
	DECLARE_CLASS(AHFPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HFDataDriven"), NO_API) \
	DECLARE_SERIALIZER(AHFPawn) \
	virtual UObject* _getUObject() const override { return const_cast<AHFPawn*>(this); }


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAHFPawn(); \
	friend struct Z_Construct_UClass_AHFPawn_Statics; \
public: \
	DECLARE_CLASS(AHFPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HFDataDriven"), NO_API) \
	DECLARE_SERIALIZER(AHFPawn) \
	virtual UObject* _getUObject() const override { return const_cast<AHFPawn*>(this); }


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHFPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHFPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHFPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHFPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHFPawn(AHFPawn&&); \
	NO_API AHFPawn(const AHFPawn&); \
public:


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHFPawn(AHFPawn&&); \
	NO_API AHFPawn(const AHFPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHFPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHFPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHFPawn)


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_PRIVATE_PROPERTY_OFFSET
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_10_PROLOG
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_SPARSE_DATA \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_RPC_WRAPPERS \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_INCLASS \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_SPARSE_DATA \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_INCLASS_NO_PURE_DECLS \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HFDATADRIVEN_API UClass* StaticClass<class AHFPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
