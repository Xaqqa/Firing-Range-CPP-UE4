// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Upskill/Bullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullet() {}
// Cross Module References
	UPSKILL_API UClass* Z_Construct_UClass_UBullet_NoRegister();
	UPSKILL_API UClass* Z_Construct_UClass_UBullet();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Upskill();
// End Cross Module References
	void UBullet::StaticRegisterNativesUBullet()
	{
	}
	UClass* Z_Construct_UClass_UBullet_NoRegister()
	{
		return UBullet::StaticClass();
	}
	struct Z_Construct_UClass_UBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletInitialVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletInitialVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Upskill,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBullet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Bullet.h" },
		{ "ModuleRelativePath", "Bullet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBullet_Statics::NewProp_BulletInitialVelocity_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Bullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBullet_Statics::NewProp_BulletInitialVelocity = { "BulletInitialVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBullet, BulletInitialVelocity), METADATA_PARAMS(Z_Construct_UClass_UBullet_Statics::NewProp_BulletInitialVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBullet_Statics::NewProp_BulletInitialVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBullet_Statics::NewProp_BulletInitialVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBullet_Statics::ClassParams = {
		&UBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBullet_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBullet, 1134799256);
	template<> UPSKILL_API UClass* StaticClass<UBullet>()
	{
		return UBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBullet(Z_Construct_UClass_UBullet, &UBullet::StaticClass, TEXT("/Script/Upskill"), TEXT("UBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
