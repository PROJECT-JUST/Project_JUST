// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BaseUtility.generated.h"

//Ŭ����Ÿ�� ENUM Ŭ����
UENUM(BlueprintType)
enum class ECharType : uint8
{
    HASHIN UMETA(DisplayName = "HASHIN"),
	BEOMSEO UMETA(DisplayName = "BEOMSEO"),

};

//������Ÿ�� ENUM Ŭ����
UENUM(BlueprintType)
enum class EItemType : uint8
{
    RIFLE01 UMETA(DisplayName = "Rifle01"),
	SWORD01 UMETA(DisplayName = "Sword01"),
	MEDIKIT01 UMETA(DisplayName = "MediKit01"),

};

//����Ÿ�� ENUM Ŭ����
UENUM(BlueprintType)
enum class EWeaponType : uint8
{
    GUN UMETA(DisplayName = "Gun"),
	SWORD UMETA(DisplayName = "Sword"),
	SHIELD UMETA(DisplayName = "Shield"),

};

//��ųŸ�� ENUM Ŭ����
UENUM(BlueprintType)
enum class ESkillType : uint8
{
    FB UMETA(DisplayName = "FireBall"),
	DB UMETA(DisplayName = "DashBlade"),
	SC UMETA(DisplayName = "ShieldCrash"),

};



// 대미지 정보 구조체
USTRUCT(BlueprintType)
struct FDamageResult
{
	GENERATED_BODY()
	
	float damage; 
	FVector hitPoint = FVector::ZeroVector; 
	FVector hitNormal = FVector::ZeroVector; 
	FName boneName = TEXT(""); 
	FVector attackerLocation = FVector::ZeroVector;

	// XXX JBS 필요한 경우 만큼 생성자 설정해서 사용
	// 생성자
	FDamageResult() {}
	
	FDamageResult(float damage) : damage(damage) {}

	FDamageResult(float damage
				,FVector hitPoint 
				,FVector hitNormal 
				,FName boneName 
				,FVector attackerLocation) :
				 damage(damage)
				, hitPoint(hitPoint)
				, hitNormal(hitNormal) {}
};


UCLASS()
class PROJECT_JUST_API UBaseUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	


};
