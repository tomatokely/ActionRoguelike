// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunningMobile/RunningMobileGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunningMobileGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RUNNINGMOBILE_API UClass* Z_Construct_UClass_ARunningMobileGameModeBase();
	RUNNINGMOBILE_API UClass* Z_Construct_UClass_ARunningMobileGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RunningMobile();
// End Cross Module References
	void ARunningMobileGameModeBase::StaticRegisterNativesARunningMobileGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARunningMobileGameModeBase);
	UClass* Z_Construct_UClass_ARunningMobileGameModeBase_NoRegister()
	{
		return ARunningMobileGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARunningMobileGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunningMobileGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RunningMobile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunningMobileGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RunningMobileGameModeBase.h" },
		{ "ModuleRelativePath", "RunningMobileGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunningMobileGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunningMobileGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARunningMobileGameModeBase_Statics::ClassParams = {
		&ARunningMobileGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARunningMobileGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunningMobileGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunningMobileGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ARunningMobileGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARunningMobileGameModeBase.OuterSingleton, Z_Construct_UClass_ARunningMobileGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARunningMobileGameModeBase.OuterSingleton;
	}
	template<> RUNNINGMOBILE_API UClass* StaticClass<ARunningMobileGameModeBase>()
	{
		return ARunningMobileGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunningMobileGameModeBase);
	ARunningMobileGameModeBase::~ARunningMobileGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_RunningMobileGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_RunningMobileGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARunningMobileGameModeBase, ARunningMobileGameModeBase::StaticClass, TEXT("ARunningMobileGameModeBase"), &Z_Registration_Info_UClass_ARunningMobileGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunningMobileGameModeBase), 3772896602U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_RunningMobileGameModeBase_h_3857541737(TEXT("/Script/RunningMobile"),
		Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_RunningMobileGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_RunningMobileGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
