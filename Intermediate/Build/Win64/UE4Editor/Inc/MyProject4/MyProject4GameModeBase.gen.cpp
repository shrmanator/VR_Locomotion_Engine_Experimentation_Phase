// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject4/MyProject4GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject4GameModeBase() {}
// Cross Module References
	MYPROJECT4_API UClass* Z_Construct_UClass_AMyProject4GameModeBase_NoRegister();
	MYPROJECT4_API UClass* Z_Construct_UClass_AMyProject4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyProject4();
// End Cross Module References
	void AMyProject4GameModeBase::StaticRegisterNativesAMyProject4GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMyProject4GameModeBase_NoRegister()
	{
		return AMyProject4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyProject4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProject4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyProject4GameModeBase.h" },
		{ "ModuleRelativePath", "MyProject4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProject4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProject4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProject4GameModeBase_Statics::ClassParams = {
		&AMyProject4GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyProject4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProject4GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProject4GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProject4GameModeBase, 1365528549);
	template<> MYPROJECT4_API UClass* StaticClass<AMyProject4GameModeBase>()
	{
		return AMyProject4GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProject4GameModeBase(Z_Construct_UClass_AMyProject4GameModeBase, &AMyProject4GameModeBase::StaticClass, TEXT("/Script/MyProject4"), TEXT("AMyProject4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject4GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
