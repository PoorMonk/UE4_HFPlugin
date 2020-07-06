// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAgreementType : uint8;
#ifdef HFDATADRIVEN_HFModule_generated_h
#error "HFModule.generated.h already included, missing '#pragma once' in HFModule.h"
#endif
#define HFDATADRIVEN_HFModule_generated_h

#define RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_SPARSE_DATA
#define RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableObject) \
	{ \
		P_GET_ENUM(EAgreementType,Z_Param_Agreement); \
		P_GET_TARRAY(FName,Z_Param_TargetNameGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableObject(EAgreementType(Z_Param_Agreement),Z_Param_TargetNameGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableObject) \
	{ \
		P_GET_ENUM(EAgreementType,Z_Param_Agreement); \
		P_GET_TARRAY(FName,Z_Param_TargetNameGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableObject(EAgreementType(Z_Param_Agreement),Z_Param_TargetNameGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyObject) \
	{ \
		P_GET_ENUM(EAgreementType,Z_Param_Agreement); \
		P_GET_TARRAY(FName,Z_Param_TargetNameGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyObject(EAgreementType(Z_Param_Agreement),Z_Param_TargetNameGroup); \
		P_NATIVE_END; \
	}


#define RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableObject) \
	{ \
		P_GET_ENUM(EAgreementType,Z_Param_Agreement); \
		P_GET_TARRAY(FName,Z_Param_TargetNameGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableObject(EAgreementType(Z_Param_Agreement),Z_Param_TargetNameGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableObject) \
	{ \
		P_GET_ENUM(EAgreementType,Z_Param_Agreement); \
		P_GET_TARRAY(FName,Z_Param_TargetNameGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableObject(EAgreementType(Z_Param_Agreement),Z_Param_TargetNameGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyObject) \
	{ \
		P_GET_ENUM(EAgreementType,Z_Param_Agreement); \
		P_GET_TARRAY(FName,Z_Param_TargetNameGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyObject(EAgreementType(Z_Param_Agreement),Z_Param_TargetNameGroup); \
		P_NATIVE_END; \
	}


#define RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHFModule(); \
	friend struct Z_Construct_UClass_UHFModule_Statics; \
public: \
	DECLARE_CLASS(UHFModule, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HFDataDriven"), NO_API) \
	DECLARE_SERIALIZER(UHFModule)


#define RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHFModule(); \
	friend struct Z_Construct_UClass_UHFModule_Statics; \
public: \
	DECLARE_CLASS(UHFModule, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HFDataDriven"), NO_API) \
	DECLARE_SERIALIZER(UHFModule)


#define RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHFModule(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHFModule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHFModule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHFModule); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHFModule(UHFModule&&); \
	NO_API UHFModule(const UHFModule&); \
public:


#define RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHFModule(UHFModule&&); \
	NO_API UHFModule(const UHFModule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHFModule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHFModule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHFModule)


#define RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_PRIVATE_PROPERTY_OFFSET
#define RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_14_PROLOG
#define RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_PRIVATE_PROPERTY_OFFSET \
	RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_SPARSE_DATA \
	RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_RPC_WRAPPERS \
	RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_INCLASS \
	RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_PRIVATE_PROPERTY_OFFSET \
	RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_SPARSE_DATA \
	RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_INCLASS_NO_PURE_DECLS \
	RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HFDATADRIVEN_API UClass* StaticClass<class UHFModule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RaceCar_Plugins_HFDataDriven_Source_HFDataDriven_Public_HFCore_HFModule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
