// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFObject/HFWheeledVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFWheeledVehicle() {}
// Cross Module References
	HFDATADRIVEN_API UClass* Z_Construct_UClass_AHFWheeledVehicle_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_AHFWheeledVehicle();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFOOInterface_NoRegister();
// End Cross Module References
	void AHFWheeledVehicle::StaticRegisterNativesAHFWheeledVehicle()
	{
	}
	UClass* Z_Construct_UClass_AHFWheeledVehicle_NoRegister()
	{
		return AHFWheeledVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AHFWheeledVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHFWheeledVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHFWheeledVehicle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HFObject/HFWheeledVehicle.h" },
		{ "ModuleRelativePath", "Public/HFObject/HFWheeledVehicle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ClassName_MetaData[] = {
		{ "Category", "HFDataDriven" },
		{ "ModuleRelativePath", "Public/HFObject/HFWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHFWheeledVehicle, ClassName), METADATA_PARAMS(Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "HFDataDriven" },
		{ "ModuleRelativePath", "Public/HFObject/HFWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHFWheeledVehicle, ObjectName), METADATA_PARAMS(Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ModuleName_MetaData[] = {
		{ "Category", "HFDataDriven" },
		{ "ModuleRelativePath", "Public/HFObject/HFWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHFWheeledVehicle, ModuleName), METADATA_PARAMS(Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHFWheeledVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ObjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHFWheeledVehicle_Statics::NewProp_ModuleName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHFWheeledVehicle_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHFOOInterface_NoRegister, (int32)VTABLE_OFFSET(AHFWheeledVehicle, IHFOOInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHFWheeledVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHFWheeledVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHFWheeledVehicle_Statics::ClassParams = {
		&AHFWheeledVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHFWheeledVehicle_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHFWheeledVehicle_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHFWheeledVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHFWheeledVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHFWheeledVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHFWheeledVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHFWheeledVehicle, 408474538);
	template<> HFDATADRIVEN_API UClass* StaticClass<AHFWheeledVehicle>()
	{
		return AHFWheeledVehicle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHFWheeledVehicle(Z_Construct_UClass_AHFWheeledVehicle, &AHFWheeledVehicle::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("AHFWheeledVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHFWheeledVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
