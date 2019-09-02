// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4ThirdPersonTest/UE4ThirdPersonTestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4ThirdPersonTestGameMode() {}
// Cross Module References
	UE4THIRDPERSONTEST_API UClass* Z_Construct_UClass_AUE4ThirdPersonTestGameMode_NoRegister();
	UE4THIRDPERSONTEST_API UClass* Z_Construct_UClass_AUE4ThirdPersonTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE4ThirdPersonTest();
// End Cross Module References
	void AUE4ThirdPersonTestGameMode::StaticRegisterNativesAUE4ThirdPersonTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUE4ThirdPersonTestGameMode_NoRegister()
	{
		return AUE4ThirdPersonTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE4ThirdPersonTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4ThirdPersonTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4ThirdPersonTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4ThirdPersonTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE4ThirdPersonTestGameMode.h" },
		{ "ModuleRelativePath", "UE4ThirdPersonTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4ThirdPersonTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4ThirdPersonTestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4ThirdPersonTestGameMode_Statics::ClassParams = {
		&AUE4ThirdPersonTestGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AUE4ThirdPersonTestGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUE4ThirdPersonTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4ThirdPersonTestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4ThirdPersonTestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4ThirdPersonTestGameMode, 3832983967);
	template<> UE4THIRDPERSONTEST_API UClass* StaticClass<AUE4ThirdPersonTestGameMode>()
	{
		return AUE4ThirdPersonTestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4ThirdPersonTestGameMode(Z_Construct_UClass_AUE4ThirdPersonTestGameMode, &AUE4ThirdPersonTestGameMode::StaticClass, TEXT("/Script/UE4ThirdPersonTest"), TEXT("AUE4ThirdPersonTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4ThirdPersonTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
