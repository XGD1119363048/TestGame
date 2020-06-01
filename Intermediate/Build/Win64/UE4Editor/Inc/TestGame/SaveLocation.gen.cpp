// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestGame/HitBox/SaveLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveLocation() {}
// Cross Module References
	TESTGAME_API UClass* Z_Construct_UClass_ASaveLocation_NoRegister();
	TESTGAME_API UClass* Z_Construct_UClass_ASaveLocation();
	TESTGAME_API UClass* Z_Construct_UClass_AHitBoxBase();
	UPackage* Z_Construct_UPackage__Script_TestGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASaveLocation::StaticRegisterNativesASaveLocation()
	{
	}
	UClass* Z_Construct_UClass_ASaveLocation_NoRegister()
	{
		return ASaveLocation::StaticClass();
	}
	struct Z_Construct_UClass_ASaveLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveMeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASaveLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHitBoxBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaveLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HitBox/SaveLocation.h" },
		{ "ModuleRelativePath", "HitBox/SaveLocation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaveLocation_Statics::NewProp_SaveMeshComp_MetaData[] = {
		{ "Category", "SaveLocation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HitBox/SaveLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASaveLocation_Statics::NewProp_SaveMeshComp = { "SaveMeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaveLocation, SaveMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASaveLocation_Statics::NewProp_SaveMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASaveLocation_Statics::NewProp_SaveMeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASaveLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaveLocation_Statics::NewProp_SaveMeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASaveLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASaveLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASaveLocation_Statics::ClassParams = {
		&ASaveLocation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASaveLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASaveLocation_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASaveLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASaveLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASaveLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASaveLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASaveLocation, 683857606);
	template<> TESTGAME_API UClass* StaticClass<ASaveLocation>()
	{
		return ASaveLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASaveLocation(Z_Construct_UClass_ASaveLocation, &ASaveLocation::StaticClass, TEXT("/Script/TestGame"), TEXT("ASaveLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASaveLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
