// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFCore/HFModel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFModel() {}
// Cross Module References
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFModel_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFModel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFMMInterface_NoRegister();
// End Cross Module References
	void UHFModel::StaticRegisterNativesUHFModel()
	{
	}
	UClass* Z_Construct_UClass_UHFModel_NoRegister()
	{
		return UHFModel::StaticClass();
	}
	struct Z_Construct_UClass_UHFModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHFModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHFModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HFCore/HFModel.h" },
		{ "ModuleRelativePath", "Public/HFCore/HFModel.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHFModel_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHFMMInterface_NoRegister, (int32)VTABLE_OFFSET(UHFModel, IHFMMInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHFModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHFModel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHFModel_Statics::ClassParams = {
		&UHFModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHFModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHFModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHFModel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHFModel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHFModel, 3655133727);
	template<> HFDATADRIVEN_API UClass* StaticClass<UHFModel>()
	{
		return UHFModel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHFModel(Z_Construct_UClass_UHFModel, &UHFModel::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("UHFModel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHFModel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
