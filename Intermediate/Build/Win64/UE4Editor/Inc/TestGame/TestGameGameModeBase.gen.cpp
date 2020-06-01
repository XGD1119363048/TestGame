// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestGame/GameMode/TestGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestGameGameModeBase() {}
// Cross Module References
	TESTGAME_API UClass* Z_Construct_UClass_ATestGameGameModeBase_NoRegister();
	TESTGAME_API UClass* Z_Construct_UClass_ATestGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TESTGAME_API UClass* Z_Construct_UClass_ASpherePawnBase_NoRegister();
// End Cross Module References
	void ATestGameGameModeBase::StaticRegisterNativesATestGameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATestGameGameModeBase_NoRegister()
	{
		return ATestGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATestGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnd_MetaData[];
#endif
		static void NewProp_IsEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDieNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerDieNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentStartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSpherePawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerSpherePawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameMode/TestGameGameModeBase.h" },
		{ "ModuleRelativePath", "GameMode/TestGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_IsEnd_MetaData[] = {
		{ "Category", "TestGameGameModeBase" },
		{ "ModuleRelativePath", "GameMode/TestGameGameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_IsEnd_SetBit(void* Obj)
	{
		((ATestGameGameModeBase*)Obj)->IsEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_IsEnd = { "IsEnd", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATestGameGameModeBase), &Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_IsEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_IsEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_IsEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_PlayerDieNum_MetaData[] = {
		{ "Category", "TestGameGameModeBase" },
		{ "ModuleRelativePath", "GameMode/TestGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_PlayerDieNum = { "PlayerDieNum", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGameGameModeBase, PlayerDieNum), METADATA_PARAMS(Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_PlayerDieNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_PlayerDieNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_CurrentStartLocation_MetaData[] = {
		{ "Category", "CurrentStart" },
		{ "ModuleRelativePath", "GameMode/TestGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_CurrentStartLocation = { "CurrentStartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGameGameModeBase, CurrentStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_CurrentStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_CurrentStartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_PlayerSpherePawn_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "ModuleRelativePath", "GameMode/TestGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_PlayerSpherePawn = { "PlayerSpherePawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGameGameModeBase, PlayerSpherePawn), Z_Construct_UClass_ASpherePawnBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_PlayerSpherePawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_PlayerSpherePawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestGameGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_IsEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_PlayerDieNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_CurrentStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGameGameModeBase_Statics::NewProp_PlayerSpherePawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestGameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestGameGameModeBase_Statics::ClassParams = {
		&ATestGameGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATestGameGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestGameGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestGameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestGameGameModeBase, 1642040351);
	template<> TESTGAME_API UClass* StaticClass<ATestGameGameModeBase>()
	{
		return ATestGameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestGameGameModeBase(Z_Construct_UClass_ATestGameGameModeBase, &ATestGameGameModeBase::StaticClass, TEXT("/Script/TestGame"), TEXT("ATestGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
