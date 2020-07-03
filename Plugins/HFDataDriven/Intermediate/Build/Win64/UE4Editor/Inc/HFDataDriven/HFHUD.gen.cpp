// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFObject/HFHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFHUD() {}
// Cross Module References
	HFDATADRIVEN_API UClass* Z_Construct_UClass_AHFHUD_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_AHFHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFOOInterface_NoRegister();
// End Cross Module References
	void AHFHUD::StaticRegisterNativesAHFHUD()
	{
	}
	UClass* Z_Construct_UClass_AHFHUD_NoRegister()
	{
		return AHFHUD::StaticClass();
	}
	struct Z_Construct_UClass_AHFHUD_Statics
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
	UObject* (*const Z_Construct_UClass_AHFHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHFHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HFObject/HFHUD.h" },
		{ "ModuleRelativePath", "Public/HFObject/HFHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHFHUD_Statics::NewProp_ClassName_MetaData[] = {
		{ "Category", "HFDataDriven" },
		{ "ModuleRelativePath", "Public/HFObject/HFHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHFHUD_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHFHUD, ClassName), METADATA_PARAMS(Z_Construct_UClass_AHFHUD_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHFHUD_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHFHUD_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "HFDataDriven" },
		{ "ModuleRelativePath", "Public/HFObject/HFHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHFHUD_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHFHUD, ObjectName), METADATA_PARAMS(Z_Construct_UClass_AHFHUD_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHFHUD_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHFHUD_Statics::NewProp_ModuleName_MetaData[] = {
		{ "Category", "HFDataDriven" },
		{ "ModuleRelativePath", "Public/HFObject/HFHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHFHUD_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHFHUD, ModuleName), METADATA_PARAMS(Z_Construct_UClass_AHFHUD_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHFHUD_Statics::NewProp_ModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHFHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHFHUD_Statics::NewProp_ClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHFHUD_Statics::NewProp_ObjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHFHUD_Statics::NewProp_ModuleName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHFHUD_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHFOOInterface_NoRegister, (int32)VTABLE_OFFSET(AHFHUD, IHFOOInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHFHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHFHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHFHUD_Statics::ClassParams = {
		&AHFHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHFHUD_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHFHUD_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHFHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHFHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHFHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHFHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHFHUD, 3237427758);
	template<> HFDATADRIVEN_API UClass* StaticClass<AHFHUD>()
	{
		return AHFHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHFHUD(Z_Construct_UClass_AHFHUD, &AHFHUD::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("AHFHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHFHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
