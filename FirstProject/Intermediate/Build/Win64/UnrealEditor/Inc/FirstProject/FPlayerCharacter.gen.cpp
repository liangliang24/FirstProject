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
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPlayerCharacter::execOutCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OutCrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPlayerCharacter::execInCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InCrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPlayerCharacter::execWalkLow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WalkLow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPlayerCharacter::execWalkFast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WalkFast();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPlayerCharacter::execRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Right(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPlayerCharacter::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_value);
		P_NATIVE_END;
	}
	void AFPlayerCharacter::StaticRegisterNativesAFPlayerCharacter()
	{
		UClass* Class = AFPlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InCrouch", &AFPlayerCharacter::execInCrouch },
			{ "MoveForward", &AFPlayerCharacter::execMoveForward },
			{ "OutCrouch", &AFPlayerCharacter::execOutCrouch },
			{ "Right", &AFPlayerCharacter::execRight },
			{ "WalkFast", &AFPlayerCharacter::execWalkFast },
			{ "WalkLow", &AFPlayerCharacter::execWalkLow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPlayerCharacter_InCrouch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPlayerCharacter_InCrouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPlayerCharacter_InCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPlayerCharacter, nullptr, "InCrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPlayerCharacter_InCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPlayerCharacter_InCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPlayerCharacter_InCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPlayerCharacter_InCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPlayerCharacter_MoveForward_Statics
	{
		struct FPlayerCharacter_eventMoveForward_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPlayerCharacter_MoveForward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCharacter_eventMoveForward_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPlayerCharacter_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPlayerCharacter_MoveForward_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPlayerCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPlayerCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPlayerCharacter, nullptr, "MoveForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFPlayerCharacter_MoveForward_Statics::FPlayerCharacter_eventMoveForward_Parms), Z_Construct_UFunction_AFPlayerCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPlayerCharacter_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPlayerCharacter_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPlayerCharacter_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPlayerCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPlayerCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPlayerCharacter_OutCrouch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPlayerCharacter_OutCrouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPlayerCharacter_OutCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPlayerCharacter, nullptr, "OutCrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPlayerCharacter_OutCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPlayerCharacter_OutCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPlayerCharacter_OutCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPlayerCharacter_OutCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPlayerCharacter_Right_Statics
	{
		struct FPlayerCharacter_eventRight_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPlayerCharacter_Right_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCharacter_eventRight_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPlayerCharacter_Right_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPlayerCharacter_Right_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPlayerCharacter_Right_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPlayerCharacter_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPlayerCharacter, nullptr, "Right", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFPlayerCharacter_Right_Statics::FPlayerCharacter_eventRight_Parms), Z_Construct_UFunction_AFPlayerCharacter_Right_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPlayerCharacter_Right_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPlayerCharacter_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPlayerCharacter_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPlayerCharacter_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPlayerCharacter_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPlayerCharacter_WalkFast_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPlayerCharacter_WalkFast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPlayerCharacter_WalkFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPlayerCharacter, nullptr, "WalkFast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPlayerCharacter_WalkFast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPlayerCharacter_WalkFast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPlayerCharacter_WalkFast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPlayerCharacter_WalkFast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPlayerCharacter_WalkLow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPlayerCharacter_WalkLow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPlayerCharacter_WalkLow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPlayerCharacter, nullptr, "WalkLow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPlayerCharacter_WalkLow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPlayerCharacter_WalkLow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPlayerCharacter_WalkLow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPlayerCharacter_WalkLow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPlayerCharacter);
	UClass* Z_Construct_UClass_AFPlayerCharacter_NoRegister()
	{
		return AFPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkFastSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkFastSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPlayerCharacter_InCrouch, "InCrouch" }, // 1953213612
		{ &Z_Construct_UFunction_AFPlayerCharacter_MoveForward, "MoveForward" }, // 2862049347
		{ &Z_Construct_UFunction_AFPlayerCharacter_OutCrouch, "OutCrouch" }, // 2722926403
		{ &Z_Construct_UFunction_AFPlayerCharacter_Right, "Right" }, // 1793745465
		{ &Z_Construct_UFunction_AFPlayerCharacter_WalkFast, "WalkFast" }, // 2808533528
		{ &Z_Construct_UFunction_AFPlayerCharacter_WalkLow, "WalkLow" }, // 2848066869
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/FPlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_WalkFastSpeed_MetaData[] = {
		{ "Category", "FPlayerCharacter" },
		{ "ModuleRelativePath", "Public/FPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_WalkFastSpeed = { "WalkFastSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPlayerCharacter, WalkFastSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_WalkFastSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_WalkFastSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "FPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPlayerCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "FPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPlayerCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_SpringArmComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_WalkFastSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_CameraComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPlayerCharacter_Statics::NewProp_SpringArmComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPlayerCharacter_Statics::ClassParams = {
		&AFPlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPlayerCharacter_Statics::PropPointers),
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
		{ Z_Construct_UClass_AFPlayerCharacter, AFPlayerCharacter::StaticClass, TEXT("AFPlayerCharacter"), &Z_Registration_Info_UClass_AFPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPlayerCharacter), 1235724724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_2467190460(TEXT("/Script/FirstProject"),
		Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstProject_Source_FirstProject_Public_FPlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
