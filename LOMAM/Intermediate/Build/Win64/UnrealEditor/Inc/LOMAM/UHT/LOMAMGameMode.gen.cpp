// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LOMAM/LOMAMGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLOMAMGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	LOMAM_API UClass* Z_Construct_UClass_ALOMAMGameMode();
	LOMAM_API UClass* Z_Construct_UClass_ALOMAMGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LOMAM();
// End Cross Module References
	void ALOMAMGameMode::StaticRegisterNativesALOMAMGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALOMAMGameMode);
	UClass* Z_Construct_UClass_ALOMAMGameMode_NoRegister()
	{
		return ALOMAMGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALOMAMGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALOMAMGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LOMAM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALOMAMGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALOMAMGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LOMAMGameMode.h" },
		{ "ModuleRelativePath", "LOMAMGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALOMAMGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALOMAMGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALOMAMGameMode_Statics::ClassParams = {
		&ALOMAMGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALOMAMGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALOMAMGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ALOMAMGameMode()
	{
		if (!Z_Registration_Info_UClass_ALOMAMGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALOMAMGameMode.OuterSingleton, Z_Construct_UClass_ALOMAMGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALOMAMGameMode.OuterSingleton;
	}
	template<> LOMAM_API UClass* StaticClass<ALOMAMGameMode>()
	{
		return ALOMAMGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALOMAMGameMode);
	ALOMAMGameMode::~ALOMAMGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_gowth_OneDrive_Documents_Unreal_Projects_LOMAM_Source_LOMAM_LOMAMGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gowth_OneDrive_Documents_Unreal_Projects_LOMAM_Source_LOMAM_LOMAMGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALOMAMGameMode, ALOMAMGameMode::StaticClass, TEXT("ALOMAMGameMode"), &Z_Registration_Info_UClass_ALOMAMGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALOMAMGameMode), 3958660790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gowth_OneDrive_Documents_Unreal_Projects_LOMAM_Source_LOMAM_LOMAMGameMode_h_3739246801(TEXT("/Script/LOMAM"),
		Z_CompiledInDeferFile_FID_Users_gowth_OneDrive_Documents_Unreal_Projects_LOMAM_Source_LOMAM_LOMAMGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gowth_OneDrive_Documents_Unreal_Projects_LOMAM_Source_LOMAM_LOMAMGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
