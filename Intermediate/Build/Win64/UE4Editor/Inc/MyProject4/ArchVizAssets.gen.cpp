// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject4/ArchVizAssets/ArchVizAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchVizAssets() {}
// Cross Module References
	MYPROJECT4_API UClass* Z_Construct_UClass_AArchVizAssets_NoRegister();
	MYPROJECT4_API UClass* Z_Construct_UClass_AArchVizAssets();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject4();
// End Cross Module References
	void AArchVizAssets::StaticRegisterNativesAArchVizAssets()
	{
	}
	UClass* Z_Construct_UClass_AArchVizAssets_NoRegister()
	{
		return AArchVizAssets::StaticClass();
	}
	struct Z_Construct_UClass_AArchVizAssets_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchVizAssets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchVizAssets_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ArchVizAssets/ArchVizAssets.h" },
		{ "ModuleRelativePath", "ArchVizAssets/ArchVizAssets.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchVizAssets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchVizAssets>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArchVizAssets_Statics::ClassParams = {
		&AArchVizAssets::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArchVizAssets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArchVizAssets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArchVizAssets()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArchVizAssets_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArchVizAssets, 18960082);
	template<> MYPROJECT4_API UClass* StaticClass<AArchVizAssets>()
	{
		return AArchVizAssets::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArchVizAssets(Z_Construct_UClass_AArchVizAssets, &AArchVizAssets::StaticClass, TEXT("/Script/MyProject4"), TEXT("AArchVizAssets"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchVizAssets);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
