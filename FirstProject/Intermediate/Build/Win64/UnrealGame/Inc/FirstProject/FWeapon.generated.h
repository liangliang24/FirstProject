// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FIRSTPROJECT_FWeapon_generated_h
#error "FWeapon.generated.h already included, missing '#pragma once' in FWeapon.h"
#endif
#define FIRSTPROJECT_FWeapon_generated_h

#define FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_SPARSE_DATA
#define FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginOverlap);


#define FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginOverlap);


#define FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFWeapon(); \
	friend struct Z_Construct_UClass_AFWeapon_Statics; \
public: \
	DECLARE_CLASS(AFWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AFWeapon)


#define FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFWeapon(); \
	friend struct Z_Construct_UClass_AFWeapon_Statics; \
public: \
	DECLARE_CLASS(AFWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AFWeapon)


#define FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFWeapon(AFWeapon&&); \
	NO_API AFWeapon(const AFWeapon&); \
public:


#define FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFWeapon(AFWeapon&&); \
	NO_API AFWeapon(const AFWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFWeapon)


#define FID_FirstProject_Source_FirstProject_Public_FWeapon_h_12_PROLOG
#define FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_SPARSE_DATA \
	FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_RPC_WRAPPERS \
	FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_INCLASS \
	FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_SPARSE_DATA \
	FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_INCLASS_NO_PURE_DECLS \
	FID_FirstProject_Source_FirstProject_Public_FWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class AFWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstProject_Source_FirstProject_Public_FWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
