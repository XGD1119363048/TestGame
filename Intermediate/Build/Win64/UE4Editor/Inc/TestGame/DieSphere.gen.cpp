// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestGame/HitBox/DieSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDieSphere() {}
// Cross Module References
	TESTGAME_API UClass* Z_Construct_UClass_ADieSphere_NoRegister();
	TESTGAME_API UClass* Z_Construct_UClass_ADieSphere();
	TESTGAME_API UClass* Z_Construct_UClass_AHitBoxBase();
	UPackage* Z_Construct_UPackage__Script_TestGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ADieSphere::StaticRegisterNativesADieSphere()
	{
	}
	UClass* Z_Construct_UClass_ADieSphere_NoRegister()
	{
		return ADieSphere::StaticClass();
	}
	struct Z_Construct_UClass_ADieSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RestartLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADieSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHitBoxBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADieSphere_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HitBox/DieSphere.h" },
		{ "ModuleRelativePath", "HitBox/DieSphere.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADieSphere_Statics::NewProp_RestartLocation_MetaData[] = {
		{ "Category", "DieSphere" },
		{ "ModuleRelativePath", "HitBox/DieSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADieSphere_Statics::NewProp_RestartLocation = { "RestartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADieSphere, RestartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADieSphere_Statics::NewProp_RestartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADieSphere_Statics::NewProp_RestartLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADieSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADieSphere_Statics::NewProp_RestartLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADieSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADieSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADieSphere_Statics::ClassParams = {
		&ADieSphere::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADieSphere_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADieSphere_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADieSphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADieSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADieSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADieSphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADieSphere, 1756246332);
	template<> TESTGAME_API UClass* StaticClass<ADieSphere>()
	{
		return ADieSphere::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADieSphere(Z_Construct_UClass_ADieSphere, &ADieSphere::StaticClass, TEXT("/Script/TestGame"), TEXT("ADieSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADieSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
