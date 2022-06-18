// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hishi2022FirstTerm/Hishi2022FirstTermGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHishi2022FirstTermGameModeBase() {}
// Cross Module References
	HISHI2022FIRSTTERM_API UClass* Z_Construct_UClass_AHishi2022FirstTermGameModeBase_NoRegister();
	HISHI2022FIRSTTERM_API UClass* Z_Construct_UClass_AHishi2022FirstTermGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Hishi2022FirstTerm();
// End Cross Module References
	void AHishi2022FirstTermGameModeBase::StaticRegisterNativesAHishi2022FirstTermGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHishi2022FirstTermGameModeBase);
	UClass* Z_Construct_UClass_AHishi2022FirstTermGameModeBase_NoRegister()
	{
		return AHishi2022FirstTermGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHishi2022FirstTermGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHishi2022FirstTermGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hishi2022FirstTerm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHishi2022FirstTermGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Hishi2022FirstTermGameModeBase.h" },
		{ "ModuleRelativePath", "Hishi2022FirstTermGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHishi2022FirstTermGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHishi2022FirstTermGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHishi2022FirstTermGameModeBase_Statics::ClassParams = {
		&AHishi2022FirstTermGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHishi2022FirstTermGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHishi2022FirstTermGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHishi2022FirstTermGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AHishi2022FirstTermGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHishi2022FirstTermGameModeBase.OuterSingleton, Z_Construct_UClass_AHishi2022FirstTermGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHishi2022FirstTermGameModeBase.OuterSingleton;
	}
	template<> HISHI2022FIRSTTERM_API UClass* StaticClass<AHishi2022FirstTermGameModeBase>()
	{
		return AHishi2022FirstTermGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHishi2022FirstTermGameModeBase);
	struct Z_CompiledInDeferFile_FID_Hishi2022FirstTerm_Source_Hishi2022FirstTerm_Hishi2022FirstTermGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Hishi2022FirstTerm_Source_Hishi2022FirstTerm_Hishi2022FirstTermGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHishi2022FirstTermGameModeBase, AHishi2022FirstTermGameModeBase::StaticClass, TEXT("AHishi2022FirstTermGameModeBase"), &Z_Registration_Info_UClass_AHishi2022FirstTermGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHishi2022FirstTermGameModeBase), 3850429361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Hishi2022FirstTerm_Source_Hishi2022FirstTerm_Hishi2022FirstTermGameModeBase_h_1557322040(TEXT("/Script/Hishi2022FirstTerm"),
		Z_CompiledInDeferFile_FID_Hishi2022FirstTerm_Source_Hishi2022FirstTerm_Hishi2022FirstTermGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Hishi2022FirstTerm_Source_Hishi2022FirstTerm_Hishi2022FirstTermGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
