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
	
	////============= = �������̽� �Լ� ==============//
	//// �ǰ�
	//virtual void GetDamage(float damage, FVector hitPoint, FVector hitNormal = FVector::ZeroVector, FName boneName = "", FVector attackerLocation = FVector::ZeroVector) PURE_VIRTUAL(ABaseCharacter::GetDamage, );
	//// ���
	//virtual void Death() PURE_VIRTUAL(ABaseCharacter::Death, );

	////============== �θ�Ŭ���� �Լ� ==============//
	//// �̵�
	//virtual void Move() PURE_VIRTUAL(ABaseCharacter::Move, );
	//// ����
	//virtual void Attack() PURE_VIRTUAL(ABaseCharacter::Attack, );
	//// ��ų
	//virtual void UseSkill(UBaseSkillComponent* usedSkill) PURE_VIRTUAL(ABaseCharacter::UseSkill, );



};
