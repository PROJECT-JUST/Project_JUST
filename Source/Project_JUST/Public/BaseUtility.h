// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BaseUtility.generated.h"


//클래스타입 ENUM 클래스
UENUM(BlueprintType)
enum class ECharType : uint8
{
    HASHIN UMETA(DisplayName = "HASHIN"),
	BEOMSEO UMETA(DisplayName = "BEOMSEO"),

};

//아이템타입 ENUM 클래스
UENUM(BlueprintType)
enum class EItemType : uint8
{
    RIFLE01 UMETA(DisplayName = "Rifle01"),
	SWORD01 UMETA(DisplayName = "Sword01"),
	MEDIKIT01 UMETA(DisplayName = "MediKit01"),

};

//무기타입 ENUM 클래스
UENUM(BlueprintType)
enum class EWeaponType : uint8
{
    GUN UMETA(DisplayName = "Gun"),
	SWORD UMETA(DisplayName = "Sword"),
	SHIELD UMETA(DisplayName = "Shield"),

};

//스킬타입 ENUM 클래스
UENUM(BlueprintType)
enum class ESkillType : uint8
{
    FB UMETA(DisplayName = "FireBall"),
	DB UMETA(DisplayName = "DashBlade"),
	SC UMETA(DisplayName = "ShieldCrash"),

};



////GetDamage 인자 구조체
//USTRUCT(BlueprintType)
//struct GDVariable
//{
//    GENERATED_BODY()
//    
//public:
//
//    float damage; 
//    FVector hitPoint; 
//    FVector hitNormal = FVector::ZeroVector; 
//    FName boneName = ""; 
//    FVector attackerLocation = FVector::ZeroVector;
//
//};


/**
 * 
 */
UCLASS()
class PROJECT_JUST_API UBaseUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public: 


};
