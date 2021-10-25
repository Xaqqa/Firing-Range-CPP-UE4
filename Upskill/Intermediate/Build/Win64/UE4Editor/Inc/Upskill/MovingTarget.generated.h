// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UPSKILL_MovingTarget_generated_h
#error "MovingTarget.generated.h already included, missing '#pragma once' in MovingTarget.h"
#endif
#define UPSKILL_MovingTarget_generated_h

#define Upskill_Source_Upskill_MovingTarget_h_14_SPARSE_DATA
#define Upskill_Source_Upskill_MovingTarget_h_14_RPC_WRAPPERS
#define Upskill_Source_Upskill_MovingTarget_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Upskill_Source_Upskill_MovingTarget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovingTarget(); \
	friend struct Z_Construct_UClass_UMovingTarget_Statics; \
public: \
	DECLARE_CLASS(UMovingTarget, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Upskill"), NO_API) \
	DECLARE_SERIALIZER(UMovingTarget)


#define Upskill_Source_Upskill_MovingTarget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMovingTarget(); \
	friend struct Z_Construct_UClass_UMovingTarget_Statics; \
public: \
	DECLARE_CLASS(UMovingTarget, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Upskill"), NO_API) \
	DECLARE_SERIALIZER(UMovingTarget)


#define Upskill_Source_Upskill_MovingTarget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovingTarget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovingTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovingTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovingTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovingTarget(UMovingTarget&&); \
	NO_API UMovingTarget(const UMovingTarget&); \
public:


#define Upskill_Source_Upskill_MovingTarget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovingTarget(UMovingTarget&&); \
	NO_API UMovingTarget(const UMovingTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovingTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovingTarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovingTarget)


#define Upskill_Source_Upskill_MovingTarget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnchorOne() { return STRUCT_OFFSET(UMovingTarget, AnchorOne); } \
	FORCEINLINE static uint32 __PPO__AnchorTwo() { return STRUCT_OFFSET(UMovingTarget, AnchorTwo); } \
	FORCEINLINE static uint32 __PPO__AnimationTimeInSeconds() { return STRUCT_OFFSET(UMovingTarget, AnimationTimeInSeconds); }


#define Upskill_Source_Upskill_MovingTarget_h_11_PROLOG
#define Upskill_Source_Upskill_MovingTarget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Upskill_Source_Upskill_MovingTarget_h_14_PRIVATE_PROPERTY_OFFSET \
	Upskill_Source_Upskill_MovingTarget_h_14_SPARSE_DATA \
	Upskill_Source_Upskill_MovingTarget_h_14_RPC_WRAPPERS \
	Upskill_Source_Upskill_MovingTarget_h_14_INCLASS \
	Upskill_Source_Upskill_MovingTarget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Upskill_Source_Upskill_MovingTarget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Upskill_Source_Upskill_MovingTarget_h_14_PRIVATE_PROPERTY_OFFSET \
	Upskill_Source_Upskill_MovingTarget_h_14_SPARSE_DATA \
	Upskill_Source_Upskill_MovingTarget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Upskill_Source_Upskill_MovingTarget_h_14_INCLASS_NO_PURE_DECLS \
	Upskill_Source_Upskill_MovingTarget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UPSKILL_API UClass* StaticClass<class UMovingTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Upskill_Source_Upskill_MovingTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
