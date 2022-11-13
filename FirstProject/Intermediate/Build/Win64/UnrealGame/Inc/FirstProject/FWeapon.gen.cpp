// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/FWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFWeapon() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AFWeapon_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AFWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AFBullet_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPlayerCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFWeapon::execBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent1);
		P_GET_PROPERTY(FIntProperty,Z_Param_I);
		P_GET_UBOOL(Z_Param_bArg);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginOverlap(Z_Param_PrimitiveComponent,Z_Param_Actor,Z_Param_PrimitiveComponent1,Z_Param_I,Z_Param_bArg,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	void AFWeapon::StaticRegisterNativesAFWeapon()
	{
		UClass* Class = AFWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginOverlap", &AFWeapon::execBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics
	{
		struct FWeapon_eventBeginOverlap_Parms
		{
			UPrimitiveComponent* PrimitiveComponent;
			AActor* Actor;
			UPrimitiveComponent* PrimitiveComponent1;
			int32 I;
			bool bArg;
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent1;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_I;
		static void NewProp_bArg_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bArg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeapon_eventBeginOverlap_Parms, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_PrimitiveComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeapon_eventBeginOverlap_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_PrimitiveComponent1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_PrimitiveComponent1 = { "PrimitiveComponent1", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeapon_eventBeginOverlap_Parms, PrimitiveComponent1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_PrimitiveComponent1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_PrimitiveComponent1_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_I = { "I", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeapon_eventBeginOverlap_Parms, I), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_bArg_SetBit(void* Obj)
	{
		((FWeapon_eventBeginOverlap_Parms*)Obj)->bArg = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_bArg = { "bArg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeapon_eventBeginOverlap_Parms), &Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_bArg_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeapon_eventBeginOverlap_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_HitResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_PrimitiveComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_PrimitiveComponent1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_I,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_bArg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFWeapon, nullptr, "BeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::FWeapon_eventBeginOverlap_Parms), Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFWeapon_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFWeapon_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFWeapon);
	UClass* Z_Construct_UClass_AFWeapon_NoRegister()
	{
		return AFWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AFWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bullet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Bullet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireParticle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFWeapon_BeginOverlap, "BeginOverlap" }, // 2527675557
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FWeapon.h" },
		{ "ModuleRelativePath", "Public/FWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFWeapon_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "FWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFWeapon_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFWeapon, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFWeapon_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFWeapon_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFWeapon_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "FWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFWeapon, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFWeapon_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFWeapon_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFWeapon_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "FWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFWeapon_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFWeapon, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFWeapon_Statics::NewProp_SphereComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFWeapon_Statics::NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFWeapon_Statics::NewProp_Bullet_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/FWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFWeapon_Statics::NewProp_Bullet = { "Bullet", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFWeapon, Bullet), Z_Construct_UClass_AFBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFWeapon_Statics::NewProp_Bullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFWeapon_Statics::NewProp_Bullet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFWeapon_Statics::NewProp_OwnerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/FWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFWeapon_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFWeapon, OwnerPawn), Z_Construct_UClass_AFPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFWeapon_Statics::NewProp_OwnerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFWeapon_Statics::NewProp_OwnerPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFWeapon_Statics::NewProp_FireParticle_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/FWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFWeapon_Statics::NewProp_FireParticle = { "FireParticle", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFWeapon, FireParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFWeapon_Statics::NewProp_FireParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFWeapon_Statics::NewProp_FireParticle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFWeapon_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFWeapon_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFWeapon_Statics::NewProp_SphereComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFWeapon_Statics::NewProp_Bullet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFWeapon_Statics::NewProp_OwnerPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFWeapon_Statics::NewProp_FireParticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFWeapon_Statics::ClassParams = {
		&AFWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFWeapon()
	{
		if (!Z_Registration_Info_UClass_AFWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFWeapon.OuterSingleton, Z_Construct_UClass_AFWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFWeapon.OuterSingleton;
	}
	template<> FIRSTPROJECT_API UClass* StaticClass<AFWeapon>()
	{
		return AFWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFWeapon);
	struct Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFWeapon, AFWeapon::StaticClass, TEXT("AFWeapon"), &Z_Registration_Info_UClass_AFWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFWeapon), 1442211092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FWeapon_h_1274583270(TEXT("/Script/FirstProject"),
		Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
