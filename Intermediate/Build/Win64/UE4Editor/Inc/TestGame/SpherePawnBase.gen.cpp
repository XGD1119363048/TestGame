// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestGame/Player/SpherePawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpherePawnBase() {}
// Cross Module References
	TESTGAME_API UClass* Z_Construct_UClass_ASpherePawnBase_NoRegister();
	TESTGAME_API UClass* Z_Construct_UClass_ASpherePawnBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TestGame();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpherePawnBase::execSpeedDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpeedDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpherePawnBase::execSpeedUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpeedUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpherePawnBase::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpherePawnBase::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	void ASpherePawnBase::StaticRegisterNativesASpherePawnBase()
	{
		UClass* Class = ASpherePawnBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &ASpherePawnBase::execMoveForward },
			{ "MoveRight", &ASpherePawnBase::execMoveRight },
			{ "SpeedDown", &ASpherePawnBase::execSpeedDown },
			{ "SpeedUp", &ASpherePawnBase::execSpeedUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpherePawnBase_MoveForward_Statics
	{
		struct SpherePawnBase_eventMoveForward_Parms
		{
			float AxisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpherePawnBase_MoveForward_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpherePawnBase_eventMoveForward_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpherePawnBase_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpherePawnBase_MoveForward_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpherePawnBase_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SpherePawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpherePawnBase_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpherePawnBase, nullptr, "MoveForward", nullptr, nullptr, sizeof(SpherePawnBase_eventMoveForward_Parms), Z_Construct_UFunction_ASpherePawnBase_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpherePawnBase_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpherePawnBase_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpherePawnBase_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpherePawnBase_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpherePawnBase_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpherePawnBase_MoveRight_Statics
	{
		struct SpherePawnBase_eventMoveRight_Parms
		{
			float AxisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpherePawnBase_MoveRight_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpherePawnBase_eventMoveRight_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpherePawnBase_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpherePawnBase_MoveRight_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpherePawnBase_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SpherePawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpherePawnBase_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpherePawnBase, nullptr, "MoveRight", nullptr, nullptr, sizeof(SpherePawnBase_eventMoveRight_Parms), Z_Construct_UFunction_ASpherePawnBase_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpherePawnBase_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpherePawnBase_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpherePawnBase_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpherePawnBase_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpherePawnBase_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpherePawnBase_SpeedDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpherePawnBase_SpeedDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SpherePawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpherePawnBase_SpeedDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpherePawnBase, nullptr, "SpeedDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpherePawnBase_SpeedDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpherePawnBase_SpeedDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpherePawnBase_SpeedDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpherePawnBase_SpeedDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpherePawnBase_SpeedUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpherePawnBase_SpeedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SpherePawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpherePawnBase_SpeedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpherePawnBase, nullptr, "SpeedUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpherePawnBase_SpeedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpherePawnBase_SpeedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpherePawnBase_SpeedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpherePawnBase_SpeedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpherePawnBase_NoRegister()
	{
		return ASpherePawnBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpherePawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInput_MetaData[];
#endif
		static void NewProp_IsInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereMeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpherePawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TestGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpherePawnBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpherePawnBase_MoveForward, "MoveForward" }, // 2193373860
		{ &Z_Construct_UFunction_ASpherePawnBase_MoveRight, "MoveRight" }, // 772620033
		{ &Z_Construct_UFunction_ASpherePawnBase_SpeedDown, "SpeedDown" }, // 1400217089
		{ &Z_Construct_UFunction_ASpherePawnBase_SpeedUp, "SpeedUp" }, // 2439040355
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpherePawnBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/SpherePawnBase.h" },
		{ "ModuleRelativePath", "Player/SpherePawnBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_IsInput_MetaData[] = {
		{ "Category", "SpherePawnBase" },
		{ "ModuleRelativePath", "Player/SpherePawnBase.h" },
	};
#endif
	void Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_IsInput_SetBit(void* Obj)
	{
		((ASpherePawnBase*)Obj)->IsInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_IsInput = { "IsInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpherePawnBase), &Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_IsInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_IsInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_IsInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SpherePawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpherePawnBase, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SpherePawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpherePawnBase, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_SphereMeshComp_MetaData[] = {
		{ "Category", "SphereComp" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SceneComp\")\n//class USceneComponent* SceneComp;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SpherePawnBase.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SceneComp\")\nclass USceneComponent* SceneComp;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_SphereMeshComp = { "SphereMeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpherePawnBase, SphereMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_SphereMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_SphereMeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpherePawnBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_IsInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_CameraComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_SpringArmComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePawnBase_Statics::NewProp_SphereMeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpherePawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpherePawnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpherePawnBase_Statics::ClassParams = {
		&ASpherePawnBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpherePawnBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawnBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpherePawnBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpherePawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpherePawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpherePawnBase, 207655883);
	template<> TESTGAME_API UClass* StaticClass<ASpherePawnBase>()
	{
		return ASpherePawnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpherePawnBase(Z_Construct_UClass_ASpherePawnBase, &ASpherePawnBase::StaticClass, TEXT("/Script/TestGame"), TEXT("ASpherePawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpherePawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
