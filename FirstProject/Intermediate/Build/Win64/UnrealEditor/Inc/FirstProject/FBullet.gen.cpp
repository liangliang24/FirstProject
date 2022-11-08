// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/FBullet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBullet() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AFBullet_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AFBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AFBullet::StaticRegisterNativesAFBullet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFBullet);
	UClass* Z_Construct_UClass_AFBullet_NoRegister()
	{
		return AFBullet::StaticClass();
	}
	struct Z_Construct_UClass_AFBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FBullet.h" },
		{ "ModuleRelativePath", "Public/FBullet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBullet_Statics::NewProp_ParticleComp_MetaData[] = {
		{ "Category", "FBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FBullet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBullet_Statics::NewProp_ParticleComp = { "ParticleComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBullet, ParticleComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFBullet_Statics::NewProp_ParticleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBullet_Statics::NewProp_ParticleComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBullet_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "FBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FBullet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBullet_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBullet, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFBullet_Statics::NewProp_SphereComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBullet_Statics::NewProp_SphereComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFBullet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBullet_Statics::NewProp_ParticleComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBullet_Statics::NewProp_SphereComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFBullet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFBullet_Statics::ClassParams = {
		&AFBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFBullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFBullet()
	{
		if (!Z_Registration_Info_UClass_AFBullet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFBullet.OuterSingleton, Z_Construct_UClass_AFBullet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFBullet.OuterSingleton;
	}
	template<> FIRSTPROJECT_API UClass* StaticClass<AFBullet>()
	{
		return AFBullet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFBullet);
	struct Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FBullet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FBullet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFBullet, AFBullet::StaticClass, TEXT("AFBullet"), &Z_Registration_Info_UClass_AFBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFBullet), 3744154385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FBullet_h_2519468801(TEXT("/Script/FirstProject"),
		Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FBullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FBullet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
