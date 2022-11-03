// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/FPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPlayerCharacter() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPlayerCharacter_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References
	void AFPlayerCharacter::StaticRegisterNativesAFPlayerCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPlayerCharacter);
	UClass* Z_Construct_UClass_AFPlayerCharacter_NoRegister()
	{
		return AFPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/FPlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPlayerCharacter_Statics::ClassParams = {
		&AFPlayerCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_AFPlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPlayerCharacter.OuterSingleton, Z_Construct_UClass_AFPlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPlayerCharacter.OuterSingleton;
	}
	template<> FIRSTPROJECT_API UClass* StaticClass<AFPlayerCharacter>()
	{
		return AFPlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPlayerCharacter);
	struct Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPlayerCharacter, AFPlayerCharacter::StaticClass, TEXT("AFPlayerCharacter"), &Z_Registration_Info_UClass_AFPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPlayerCharacter), 1020614510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_2862149835(TEXT("/Script/FirstProject"),
		Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
