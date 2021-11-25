// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealWork/CPP_CameraDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_CameraDirector() {}
// Cross Module References
	UNREALWORK_API UClass* Z_Construct_UClass_ACPP_CameraDirector_NoRegister();
	UNREALWORK_API UClass* Z_Construct_UClass_ACPP_CameraDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealWork();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ACPP_CameraDirector::StaticRegisterNativesACPP_CameraDirector()
	{
	}
	UClass* Z_Construct_UClass_ACPP_CameraDirector_NoRegister()
	{
		return ACPP_CameraDirector::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_CameraDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraTwo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_CameraDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_CameraDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_CameraDirector.h" },
		{ "ModuleRelativePath", "CPP_CameraDirector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_CameraDirector_Statics::NewProp_CameraOne_MetaData[] = {
		{ "Category", "CPP_CameraDirector" },
		{ "ModuleRelativePath", "CPP_CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_CameraDirector_Statics::NewProp_CameraOne = { "CameraOne", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_CameraDirector, CameraOne), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_CameraDirector_Statics::NewProp_CameraOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_CameraDirector_Statics::NewProp_CameraOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_CameraDirector_Statics::NewProp_CameraTwo_MetaData[] = {
		{ "Category", "CPP_CameraDirector" },
		{ "ModuleRelativePath", "CPP_CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_CameraDirector_Statics::NewProp_CameraTwo = { "CameraTwo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_CameraDirector, CameraTwo), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_CameraDirector_Statics::NewProp_CameraTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_CameraDirector_Statics::NewProp_CameraTwo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_CameraDirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_CameraDirector_Statics::NewProp_CameraOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_CameraDirector_Statics::NewProp_CameraTwo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_CameraDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_CameraDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_CameraDirector_Statics::ClassParams = {
		&ACPP_CameraDirector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_CameraDirector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_CameraDirector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_CameraDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_CameraDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_CameraDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_CameraDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_CameraDirector, 2266863578);
	template<> UNREALWORK_API UClass* StaticClass<ACPP_CameraDirector>()
	{
		return ACPP_CameraDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_CameraDirector(Z_Construct_UClass_ACPP_CameraDirector, &ACPP_CameraDirector::StaticClass, TEXT("/Script/UnrealWork"), TEXT("ACPP_CameraDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_CameraDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
