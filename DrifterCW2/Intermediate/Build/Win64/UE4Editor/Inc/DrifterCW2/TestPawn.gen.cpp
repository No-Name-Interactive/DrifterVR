// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DrifterCW2/TestPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPawn() {}
// Cross Module References
	DRIFTERCW2_API UClass* Z_Construct_UClass_ATestPawn_NoRegister();
	DRIFTERCW2_API UClass* Z_Construct_UClass_ATestPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DrifterCW2();
// End Cross Module References
	void ATestPawn::StaticRegisterNativesATestPawn()
	{
	}
	UClass* Z_Construct_UClass_ATestPawn_NoRegister()
	{
		return ATestPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATestPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DrifterCW2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TestPawn.h" },
		{ "ModuleRelativePath", "TestPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestPawn_Statics::ClassParams = {
		&ATestPawn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATestPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestPawn, 784845561);
	template<> DRIFTERCW2_API UClass* StaticClass<ATestPawn>()
	{
		return ATestPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestPawn(Z_Construct_UClass_ATestPawn, &ATestPawn::StaticClass, TEXT("/Script/DrifterCW2"), TEXT("ATestPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
