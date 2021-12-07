// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealWork/CollidingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollidingPawn() {}
// Cross Module References
	UNREALWORK_API UClass* Z_Construct_UClass_ACollidingPawn_NoRegister();
	UNREALWORK_API UClass* Z_Construct_UClass_ACollidingPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UnrealWork();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void ACollidingPawn::StaticRegisterNativesACollidingPawn()
	{
	}
	UClass* Z_Construct_UClass_ACollidingPawn_NoRegister()
	{
		return ACollidingPawn::StaticClass();
	}
	struct Z_Construct_UClass_ACollidingPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollidingPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CollidingPawn.h" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollidingPawn_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollidingPawn, ParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_ParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_ParticleSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollidingPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollidingPawn_Statics::NewProp_ParticleSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollidingPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollidingPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACollidingPawn_Statics::ClassParams = {
		&ACollidingPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACollidingPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACollidingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACollidingPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACollidingPawn, 4111221047);
	template<> UNREALWORK_API UClass* StaticClass<ACollidingPawn>()
	{
		return ACollidingPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollidingPawn(Z_Construct_UClass_ACollidingPawn, &ACollidingPawn::StaticClass, TEXT("/Script/UnrealWork"), TEXT("ACollidingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollidingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
