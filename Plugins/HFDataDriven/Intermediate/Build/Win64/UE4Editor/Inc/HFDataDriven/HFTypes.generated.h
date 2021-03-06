// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HFDATADRIVEN_HFTypes_generated_h
#error "HFTypes.generated.h already included, missing '#pragma once' in HFTypes.h"
#endif
#define HFDATADRIVEN_HFTypes_generated_h

#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_SPARSE_DATA
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_RPC_WRAPPERS
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHFTypes(); \
	friend struct Z_Construct_UClass_UHFTypes_Statics; \
public: \
	DECLARE_CLASS(UHFTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HFDataDriven"), NO_API) \
	DECLARE_SERIALIZER(UHFTypes)


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHFTypes(); \
	friend struct Z_Construct_UClass_UHFTypes_Statics; \
public: \
	DECLARE_CLASS(UHFTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HFDataDriven"), NO_API) \
	DECLARE_SERIALIZER(UHFTypes)


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHFTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHFTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHFTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHFTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHFTypes(UHFTypes&&); \
	NO_API UHFTypes(const UHFTypes&); \
public:


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHFTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHFTypes(UHFTypes&&); \
	NO_API UHFTypes(const UHFTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHFTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHFTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHFTypes)


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_PRIVATE_PROPERTY_OFFSET
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_14_PROLOG
#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_PRIVATE_PROPERTY_OFFSET \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_SPARSE_DATA \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_RPC_WRAPPERS \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_INCLASS \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_PRIVATE_PROPERTY_OFFSET \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_SPARSE_DATA \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_INCLASS_NO_PURE_DECLS \
	UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HFDATADRIVEN_API UClass* StaticClass<class UHFTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_HFPlugin_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCommon_HFTypes_h


#define FOREACH_ENUM_ECALLRESULT(op) \
	op(ECallResult::NoModule) \
	op(ECallResult::LackObject) \
	op(ECallResult::NoFunction) \
	op(ECallResult::Succeed) 

enum class ECallResult : uint8;
template<> HFDATADRIVEN_API UEnum* StaticEnum<ECallResult>();

#define FOREACH_ENUM_EAGREEMENTTYPE(op) \
	op(EAgreementType::SelfObject) \
	op(EAgreementType::OtherObject) \
	op(EAgreementType::ClassOtherObject) \
	op(EAgreementType::SelfClass) \
	op(EAgreementType::OtherClass) \
	op(EAgreementType::All) 

enum class EAgreementType : uint8;
template<> HFDATADRIVEN_API UEnum* StaticEnum<EAgreementType>();

#define FOREACH_ENUM_EBASEOBJECTSTATE(op) \
	op(EBaseObjectState::Active) \
	op(EBaseObjectState::Stable) \
	op(EBaseObjectState::Destroy) 

enum class EBaseObjectState : uint8;
template<> HFDATADRIVEN_API UEnum* StaticEnum<EBaseObjectState>();

#define FOREACH_ENUM_EBASEOBJECTLIFE(op) \
	op(EBaseObjectLife::None) \
	op(EBaseObjectLife::Init) \
	op(EBaseObjectLife::Loading) \
	op(EBaseObjectLife::Register) \
	op(EBaseObjectLife::Enable) \
	op(EBaseObjectLife::Disable) \
	op(EBaseObjectLife::UnRegister) \
	op(EBaseObjectLife::UnLoading) 

enum class EBaseObjectLife : uint8;
template<> HFDATADRIVEN_API UEnum* StaticEnum<EBaseObjectLife>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
