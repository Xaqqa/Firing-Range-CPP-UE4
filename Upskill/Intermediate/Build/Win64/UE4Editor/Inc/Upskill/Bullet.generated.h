// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UPSKILL_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define UPSKILL_Bullet_generated_h

#define Upskill_Source_Upskill_Bullet_h_16_SPARSE_DATA
#define Upskill_Source_Upskill_Bullet_h_16_RPC_WRAPPERS
#define Upskill_Source_Upskill_Bullet_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Upskill_Source_Upskill_Bullet_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBullet(); \
	friend struct Z_Construct_UClass_UBullet_Statics; \
public: \
	DECLARE_CLASS(UBullet, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Upskill"), NO_API) \
	DECLARE_SERIALIZER(UBullet)


#define Upskill_Source_Upskill_Bullet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBullet(); \
	friend struct Z_Construct_UClass_UBullet_Statics; \
public: \
	DECLARE_CLASS(UBullet, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Upskill"), NO_API) \
	DECLARE_SERIALIZER(UBullet)


#define Upskill_Source_Upskill_Bullet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBullet(UBullet&&); \
	NO_API UBullet(const UBullet&); \
public:


#define Upskill_Source_Upskill_Bullet_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBullet(UBullet&&); \
	NO_API UBullet(const UBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBullet)


#define Upskill_Source_Upskill_Bullet_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BulletInitialVelocity() { return STRUCT_OFFSET(UBullet, BulletInitialVelocity); }


#define Upskill_Source_Upskill_Bullet_h_13_PROLOG
#define Upskill_Source_Upskill_Bullet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Upskill_Source_Upskill_Bullet_h_16_PRIVATE_PROPERTY_OFFSET \
	Upskill_Source_Upskill_Bullet_h_16_SPARSE_DATA \
	Upskill_Source_Upskill_Bullet_h_16_RPC_WRAPPERS \
	Upskill_Source_Upskill_Bullet_h_16_INCLASS \
	Upskill_Source_Upskill_Bullet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Upskill_Source_Upskill_Bullet_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Upskill_Source_Upskill_Bullet_h_16_PRIVATE_PROPERTY_OFFSET \
	Upskill_Source_Upskill_Bullet_h_16_SPARSE_DATA \
	Upskill_Source_Upskill_Bullet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Upskill_Source_Upskill_Bullet_h_16_INCLASS_NO_PURE_DECLS \
	Upskill_Source_Upskill_Bullet_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UPSKILL_API UClass* StaticClass<class UBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Upskill_Source_Upskill_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
