// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UPSKILL_Gun_generated_h
#error "Gun.generated.h already included, missing '#pragma once' in Gun.h"
#endif
#define UPSKILL_Gun_generated_h

#define Upskill_Source_Upskill_Gun_h_22_SPARSE_DATA
#define Upskill_Source_Upskill_Gun_h_22_RPC_WRAPPERS
#define Upskill_Source_Upskill_Gun_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Upskill_Source_Upskill_Gun_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGun(); \
	friend struct Z_Construct_UClass_UGun_Statics; \
public: \
	DECLARE_CLASS(UGun, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Upskill"), NO_API) \
	DECLARE_SERIALIZER(UGun)


#define Upskill_Source_Upskill_Gun_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUGun(); \
	friend struct Z_Construct_UClass_UGun_Statics; \
public: \
	DECLARE_CLASS(UGun, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Upskill"), NO_API) \
	DECLARE_SERIALIZER(UGun)


#define Upskill_Source_Upskill_Gun_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGun(UGun&&); \
	NO_API UGun(const UGun&); \
public:


#define Upskill_Source_Upskill_Gun_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGun(UGun&&); \
	NO_API UGun(const UGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGun)


#define Upskill_Source_Upskill_Gun_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Bullet() { return STRUCT_OFFSET(UGun, Bullet); } \
	FORCEINLINE static uint32 __PPO__SlideAnimationInSeconds() { return STRUCT_OFFSET(UGun, SlideAnimationInSeconds); } \
	FORCEINLINE static uint32 __PPO__ReloadTimeInSeconds() { return STRUCT_OFFSET(UGun, ReloadTimeInSeconds); }


#define Upskill_Source_Upskill_Gun_h_19_PROLOG
#define Upskill_Source_Upskill_Gun_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Upskill_Source_Upskill_Gun_h_22_PRIVATE_PROPERTY_OFFSET \
	Upskill_Source_Upskill_Gun_h_22_SPARSE_DATA \
	Upskill_Source_Upskill_Gun_h_22_RPC_WRAPPERS \
	Upskill_Source_Upskill_Gun_h_22_INCLASS \
	Upskill_Source_Upskill_Gun_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Upskill_Source_Upskill_Gun_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Upskill_Source_Upskill_Gun_h_22_PRIVATE_PROPERTY_OFFSET \
	Upskill_Source_Upskill_Gun_h_22_SPARSE_DATA \
	Upskill_Source_Upskill_Gun_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Upskill_Source_Upskill_Gun_h_22_INCLASS_NO_PURE_DECLS \
	Upskill_Source_Upskill_Gun_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UPSKILL_API UClass* StaticClass<class UGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Upskill_Source_Upskill_Gun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
