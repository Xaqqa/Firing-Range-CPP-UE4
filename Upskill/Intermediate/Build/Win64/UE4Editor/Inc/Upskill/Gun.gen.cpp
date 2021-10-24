// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Upskill/Gun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGun() {}
// Cross Module References
	UPSKILL_API UClass* Z_Construct_UClass_UGun_NoRegister();
	UPSKILL_API UClass* Z_Construct_UClass_UGun();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Upskill();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UGun::StaticRegisterNativesUGun()
	{
	}
	UClass* Z_Construct_UClass_UGun_NoRegister()
	{
		return UGun::StaticClass();
	}
	struct Z_Construct_UClass_UGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Bullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideAnimationInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlideAnimationInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Upskill,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGun_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Gun.h" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGun_Statics::NewProp_Bullet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGun_Statics::NewProp_Bullet = { "Bullet", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGun, Bullet), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGun_Statics::NewProp_Bullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGun_Statics::NewProp_Bullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGun_Statics::NewProp_SlideAnimationInSeconds_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGun_Statics::NewProp_SlideAnimationInSeconds = { "SlideAnimationInSeconds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGun, SlideAnimationInSeconds), METADATA_PARAMS(Z_Construct_UClass_UGun_Statics::NewProp_SlideAnimationInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGun_Statics::NewProp_SlideAnimationInSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGun_Statics::NewProp_Bullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGun_Statics::NewProp_SlideAnimationInSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGun_Statics::ClassParams = {
		&UGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGun_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGun, 4283160041);
	template<> UPSKILL_API UClass* StaticClass<UGun>()
	{
		return UGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGun(Z_Construct_UClass_UGun, &UGun::StaticClass, TEXT("/Script/Upskill"), TEXT("UGun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
