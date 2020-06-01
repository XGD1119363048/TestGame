// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestGame/HitBox/EndLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndLocation() {}
// Cross Module References
	TESTGAME_API UClass* Z_Construct_UClass_AEndLocation_NoRegister();
	TESTGAME_API UClass* Z_Construct_UClass_AEndLocation();
	TESTGAME_API UClass* Z_Construct_UClass_AHitBoxBase();
	UPackage* Z_Construct_UPackage__Script_TestGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEndLocation::StaticRegisterNativesAEndLocation()
	{
	}
	UClass* Z_Construct_UClass_AEndLocation_NoRegister()
	{
		return AEndLocation::StaticClass();
	}
	struct Z_Construct_UClass_AEndLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndMeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEndLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHitBoxBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HitBox/EndLocation.h" },
		{ "ModuleRelativePath", "HitBox/EndLocation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndLocation_Statics::NewProp_EndMeshComp_MetaData[] = {
		{ "Category", "EndLocation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HitBox/EndLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEndLocation_Statics::NewProp_EndMeshComp = { "EndMeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEndLocation, EndMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEndLocation_Statics::NewProp_EndMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEndLocation_Statics::NewProp_EndMeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEndLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndLocation_Statics::NewProp_EndMeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEndLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEndLocation_Statics::ClassParams = {
		&AEndLocation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEndLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEndLocation_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEndLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEndLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEndLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEndLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEndLocation, 3856735790);
	template<> TESTGAME_API UClass* StaticClass<AEndLocation>()
	{
		return AEndLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEndLocation(Z_Construct_UClass_AEndLocation, &AEndLocation::StaticClass, TEXT("/Script/TestGame"), TEXT("AEndLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
