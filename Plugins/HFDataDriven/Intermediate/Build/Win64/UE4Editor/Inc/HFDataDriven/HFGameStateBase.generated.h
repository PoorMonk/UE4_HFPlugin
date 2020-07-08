// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HFDATADRIVEN_HFGameStateBase_generated_h
#error "HFGameStateBase.generated.h already included, missing '#pragma once' in HFGameStateBase.h"
#endif
#define HFDATADRIVEN_HFGameStateBase_generated_h

#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_SPARSE_DATA
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_RPC_WRAPPERS
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHFGameStateBase(); \
	friend struct Z_Construct_UClass_AHFGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AHFGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HFDataDriven"), NO_API) \
	DECLARE_SERIALIZER(AHFGameStateBase) \
	virtual UObject* _getUObject() const override { return const_cast<AHFGameStateBase*>(this); }


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAHFGameStateBase(); \
	friend struct Z_Construct_UClass_AHFGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AHFGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HFDataDriven"), NO_API) \
	DECLARE_SERIALIZER(AHFGameStateBase) \
	virtual UObject* _getUObject() const override { return const_cast<AHFGameStateBase*>(this); }


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHFGameStateBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHFGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHFGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHFGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHFGameStateBase(AHFGameStateBase&&); \
	NO_API AHFGameStateBase(const AHFGameStateBase&); \
public:


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHFGameStateBase(AHFGameStateBase&&); \
	NO_API AHFGameStateBase(const AHFGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHFGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHFGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHFGameStateBase)


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_PRIVATE_PROPERTY_OFFSET
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_13_PROLOG
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_PRIVATE_PROPERTY_OFFSET \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_SPARSE_DATA \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_RPC_WRAPPERS \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_INCLASS \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_PRIVATE_PROPERTY_OFFSET \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_SPARSE_DATA \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_INCLASS_NO_PURE_DECLS \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HFDATADRIVEN_API UClass* StaticClass<class AHFGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFObject_HFGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
