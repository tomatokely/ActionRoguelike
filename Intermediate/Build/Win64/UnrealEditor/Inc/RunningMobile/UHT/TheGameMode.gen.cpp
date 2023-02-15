// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunningMobile/Public/TheGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	RUNNINGMOBILE_API UClass* Z_Construct_UClass_ATheGameMode();
	RUNNINGMOBILE_API UClass* Z_Construct_UClass_ATheGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RunningMobile();
// End Cross Module References
	void ATheGameMode::StaticRegisterNativesATheGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATheGameMode);
	UClass* Z_Construct_UClass_ATheGameMode_NoRegister()
	{
		return ATheGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATheGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_RunningMobile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheGameMode.h" },
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheGameMode_Statics::ClassParams = {
		&ATheGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATheGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATheGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheGameMode()
	{
		if (!Z_Registration_Info_UClass_ATheGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheGameMode.OuterSingleton, Z_Construct_UClass_ATheGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATheGameMode.OuterSingleton;
	}
	template<> RUNNINGMOBILE_API UClass* StaticClass<ATheGameMode>()
	{
		return ATheGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheGameMode);
	ATheGameMode::~ATheGameMode() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_Public_TheGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_Public_TheGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATheGameMode, ATheGameMode::StaticClass, TEXT("ATheGameMode"), &Z_Registration_Info_UClass_ATheGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheGameMode), 267624265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_Public_TheGameMode_h_4200893549(TEXT("/Script/RunningMobile"),
		Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_Public_TheGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_RunningMobile_Source_RunningMobile_Public_TheGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
