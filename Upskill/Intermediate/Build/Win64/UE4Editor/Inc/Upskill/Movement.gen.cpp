// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Upskill/Movement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovement() {}
// Cross Module References
	UPSKILL_API UClass* Z_Construct_UClass_UMovement_NoRegister();
	UPSKILL_API UClass* Z_Construct_UClass_UMovement();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Upskill();
// End Cross Module References
	void UMovement::StaticRegisterNativesUMovement()
	{
	}
	UClass* Z_Construct_UClass_UMovement_NoRegister()
	{
		return UMovement::StaticClass();
	}
	struct Z_Construct_UClass_UMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingSpeedInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingSpeedInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Upskill,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Movement.h" },
		{ "ModuleRelativePath", "Movement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovement_Statics::NewProp_AimingSpeedInSeconds_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovement_Statics::NewProp_AimingSpeedInSeconds = { "AimingSpeedInSeconds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovement, AimingSpeedInSeconds), METADATA_PARAMS(Z_Construct_UClass_UMovement_Statics::NewProp_AimingSpeedInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovement_Statics::NewProp_AimingSpeedInSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovement_Statics::NewProp_AimingSpeedInSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovement_Statics::ClassParams = {
		&UMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovement_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovement, 2307045055);
	template<> UPSKILL_API UClass* StaticClass<UMovement>()
	{
		return UMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovement(Z_Construct_UClass_UMovement, &UMovement::StaticClass, TEXT("/Script/Upskill"), TEXT("UMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
