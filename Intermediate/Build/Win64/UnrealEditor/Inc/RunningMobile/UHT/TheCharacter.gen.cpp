// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunningMobile/Public/TheCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	RUNNINGMOBILE_API UClass* Z_Construct_UClass_ATheCharacter();
	RUNNINGMOBILE_API UClass* Z_Construct_UClass_ATheCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RunningMobile();
// End Cross Module References
	void ATheCharacter::StaticRegisterNativesATheCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATheCharacter);
	UClass* Z_Construct_UClass_ATheCharacter_NoRegister()
	{
		return ATheCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATheCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RunningMobile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TheCharacter.h" },
		{ "ModuleRelativePath", "Public/TheCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheCharacter_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "TheCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TheCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATheCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATheCharacter_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATheCharacter_Statics::NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheCharacter_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "TheCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TheCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATheCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATheCharacter_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATheCharacter_Statics::NewProp_CameraComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATheCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheCharacter_Statics::NewProp_SpringArmComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheCharacter_Statics::NewProp_CameraComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheCharacter_Statics::ClassParams = {
		&ATheCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATheCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATheCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATheCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATheCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheCharacter()
	{
		if (!Z_Registration_Info_UClass_ATheCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheCharacter.OuterSingleton, Z_Construct_UClass_ATheCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATheCharacter.OuterSingleton;
	}
	template<> RUNNINGMOBILE_API UClass* StaticClass<ATheCharacter>()
	{
		return ATheCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheCharacter);
	ATheCharacter::~ATheCharacter() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_Public_TheCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_Public_TheCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATheCharacter, ATheCharacter::StaticClass, TEXT("ATheCharacter"), &Z_Registration_Info_UClass_ATheCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheCharacter), 3567436548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_Public_TheCharacter_h_3990659233(TEXT("/Script/RunningMobile"),
		Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_Public_TheCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_Public_TheCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
