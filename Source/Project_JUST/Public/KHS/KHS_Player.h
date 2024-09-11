// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "KHS_Player.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_JUST_API AKHS_Player : public ABaseCharacter
{
	GENERATED_BODY()
	
	////============= = 인터페이스 함수 ==============//
	//// 피격
	//virtual void GetDamage(float damage, FVector hitPoint, FVector hitNormal = FVector::ZeroVector, FName boneName = "", FVector attackerLocation = FVector::ZeroVector) PURE_VIRTUAL(ABaseCharacter::GetDamage, );
	//// 사망
	//virtual void Death() PURE_VIRTUAL(ABaseCharacter::Death, );

	////============== 부모클래스 함수 ==============//
	//// 이동
	//virtual void Move() PURE_VIRTUAL(ABaseCharacter::Move, );
	//// 공격
	//virtual void Attack() PURE_VIRTUAL(ABaseCharacter::Attack, );
	//// 스킬
	//virtual void UseSkill(UBaseSkillComponent* usedSkill) PURE_VIRTUAL(ABaseCharacter::UseSkill, );



};
