// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UPSKILL_Target_generated_h
#error "Target.generated.h already included, missing '#pragma once' in Target.h"
#endif
#define UPSKILL_Target_generated_h

#define Upskill_Source_Upskill_Target_h_17_SPARSE_DATA
#define Upskill_Source_Upskill_Target_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Upskill_Source_Upskill_Target_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Upskill_Source_Upskill_Target_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTarget(); \
	friend struct Z_Construct_UClass_UTarget_Statics; \
public: \
	DECLARE_CLASS(UTarget, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Upskill"), NO_API) \
	DECLARE_SERIALIZER(UTarget)


#define Upskill_Source_Upskill_Target_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTarget(); \
	friend struct Z_Construct_UClass_UTarget_Statics; \
public: \
	DECLARE_CLASS(UTarget, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Upskill"), NO_API) \
	DECLARE_SERIALIZER(UTarget)


#define Upskill_Source_Upskill_Target_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTarget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTarget(UTarget&&); \
	NO_API UTarget(const UTarget&); \
public:


#define Upskill_Source_Upskill_Target_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTarget(UTarget&&); \
	NO_API UTarget(const UTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTarget)


#define Upskill_Source_Upskill_Target_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Bullet() { return STRUCT_OFFSET(UTarget, Bullet); } \
	FORCEINLINE static uint32 __PPO__AnimationTimeInSeconds() { return STRUCT_OFFSET(UTarget, AnimationTimeInSeconds); }


#define Upskill_Source_Upskill_Target_h_14_PROLOG
#define Upskill_Source_Upskill_Target_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Upskill_Source_Upskill_Target_h_17_PRIVATE_PROPERTY_OFFSET \
	Upskill_Source_Upskill_Target_h_17_SPARSE_DATA \
	Upskill_Source_Upskill_Target_h_17_RPC_WRAPPERS \
	Upskill_Source_Upskill_Target_h_17_INCLASS \
	Upskill_Source_Upskill_Target_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Upskill_Source_Upskill_Target_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Upskill_Source_Upskill_Target_h_17_PRIVATE_PROPERTY_OFFSET \
	Upskill_Source_Upskill_Target_h_17_SPARSE_DATA \
	Upskill_Source_Upskill_Target_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Upskill_Source_Upskill_Target_h_17_INCLASS_NO_PURE_DECLS \
	Upskill_Source_Upskill_Target_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UPSKILL_API UClass* StaticClass<class UTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Upskill_Source_Upskill_Target_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
