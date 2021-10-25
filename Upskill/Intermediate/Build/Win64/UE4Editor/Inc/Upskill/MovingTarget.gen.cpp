// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Upskill/MovingTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingTarget() {}
// Cross Module References
	UPSKILL_API UClass* Z_Construct_UClass_UMovingTarget_NoRegister();
	UPSKILL_API UClass* Z_Construct_UClass_UMovingTarget();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Upskill();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UMovingTarget::StaticRegisterNativesUMovingTarget()
	{
	}
	UClass* Z_Construct_UClass_UMovingTarget_NoRegister()
	{
		return UMovingTarget::StaticClass();
	}
	struct Z_Construct_UClass_UMovingTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnchorOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnchorOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnchorTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnchorTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTimeInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimationTimeInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovingTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Upskill,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovingTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MovingTarget.h" },
		{ "ModuleRelativePath", "MovingTarget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnchorOne_MetaData[] = {
		{ "Category", "MovingTarget" },
		{ "ModuleRelativePath", "MovingTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnchorOne = { "AnchorOne", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovingTarget, AnchorOne), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnchorOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnchorOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnchorTwo_MetaData[] = {
		{ "Category", "MovingTarget" },
		{ "ModuleRelativePath", "MovingTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnchorTwo = { "AnchorTwo", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovingTarget, AnchorTwo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnchorTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnchorTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnimationTimeInSeconds_MetaData[] = {
		{ "Category", "MovingTarget" },
		{ "ModuleRelativePath", "MovingTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnimationTimeInSeconds = { "AnimationTimeInSeconds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovingTarget, AnimationTimeInSeconds), METADATA_PARAMS(Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnimationTimeInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnimationTimeInSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovingTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnchorOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnchorTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingTarget_Statics::NewProp_AnimationTimeInSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovingTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovingTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovingTarget_Statics::ClassParams = {
		&UMovingTarget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovingTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovingTarget_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovingTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovingTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovingTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovingTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovingTarget, 4224217752);
	template<> UPSKILL_API UClass* StaticClass<UMovingTarget>()
	{
		return UMovingTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovingTarget(Z_Construct_UClass_UMovingTarget, &UMovingTarget::StaticClass, TEXT("/Script/Upskill"), TEXT("UMovingTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovingTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
