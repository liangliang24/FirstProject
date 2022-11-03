// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPROJECT_FPlayerCharacter_generated_h
#error "FPlayerCharacter.generated.h already included, missing '#pragma once' in FPlayerCharacter.h"
#endif
#define FIRSTPROJECT_FPlayerCharacter_generated_h

#define FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_SPARSE_DATA
#define FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOutCrouch); \
	DECLARE_FUNCTION(execInCrouch); \
	DECLARE_FUNCTION(execWalkLow); \
	DECLARE_FUNCTION(execWalkFast); \
	DECLARE_FUNCTION(execRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOutCrouch); \
	DECLARE_FUNCTION(execInCrouch); \
	DECLARE_FUNCTION(execWalkLow); \
	DECLARE_FUNCTION(execWalkFast); \
	DECLARE_FUNCTION(execRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPlayerCharacter(); \
	friend struct Z_Construct_UClass_AFPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AFPlayerCharacter)


#define FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPlayerCharacter(); \
	friend struct Z_Construct_UClass_AFPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AFPlayerCharacter)


#define FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPlayerCharacter(AFPlayerCharacter&&); \
	NO_API AFPlayerCharacter(const AFPlayerCharacter&); \
public:


#define FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPlayerCharacter(AFPlayerCharacter&&); \
	NO_API AFPlayerCharacter(const AFPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPlayerCharacter)


#define FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_11_PROLOG
#define FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_SPARSE_DATA \
	FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_RPC_WRAPPERS \
	FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_INCLASS \
	FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_SPARSE_DATA \
	FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class AFPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
