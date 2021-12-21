// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT4_VRCharacter_generated_h
#error "VRCharacter.generated.h already included, missing '#pragma once' in VRCharacter.h"
#endif
#define MYPROJECT4_VRCharacter_generated_h

#define MyProject4_Source_MyProject4_VRCharacter_h_12_SPARSE_DATA
#define MyProject4_Source_MyProject4_VRCharacter_h_12_RPC_WRAPPERS
#define MyProject4_Source_MyProject4_VRCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject4_Source_MyProject4_VRCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject4"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define MyProject4_Source_MyProject4_VRCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject4"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define MyProject4_Source_MyProject4_VRCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public:


#define MyProject4_Source_MyProject4_VRCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRCharacter)


#define MyProject4_Source_MyProject4_VRCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AVRCharacter, Camera); } \
	FORCEINLINE static uint32 __PPO__VRRoot() { return STRUCT_OFFSET(AVRCharacter, VRRoot); } \
	FORCEINLINE static uint32 __PPO__DestinationMarker() { return STRUCT_OFFSET(AVRCharacter, DestinationMarker); }


#define MyProject4_Source_MyProject4_VRCharacter_h_9_PROLOG
#define MyProject4_Source_MyProject4_VRCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject4_Source_MyProject4_VRCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject4_Source_MyProject4_VRCharacter_h_12_SPARSE_DATA \
	MyProject4_Source_MyProject4_VRCharacter_h_12_RPC_WRAPPERS \
	MyProject4_Source_MyProject4_VRCharacter_h_12_INCLASS \
	MyProject4_Source_MyProject4_VRCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject4_Source_MyProject4_VRCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject4_Source_MyProject4_VRCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject4_Source_MyProject4_VRCharacter_h_12_SPARSE_DATA \
	MyProject4_Source_MyProject4_VRCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject4_Source_MyProject4_VRCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MyProject4_Source_MyProject4_VRCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT4_API UClass* StaticClass<class AVRCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject4_Source_MyProject4_VRCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
