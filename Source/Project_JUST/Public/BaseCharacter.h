// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUtility.h"
#include "BaseHandActor.h"
#include "BaseCharacterInterface.h"
#include "BaseSkillComponent.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS()
class PROJECT_JUST_API ABaseCharacter : public ACharacter, public IBaseCharacterInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	//============== 인터페이스 함수 ==============//
	// 피격
	virtual void GetDamage(float damage, FVector hitPoint, FVector hitNormal = FVector::ZeroVector, FName boneName = "", FVector attackerLocation = FVector::ZeroVector) PURE_VIRTUAL(ABaseCharacter::GetDamage, );
	// 사망
	virtual void Death() PURE_VIRTUAL(ABaseCharacter::Death, );

	//============== 부모클래스 함수 ==============//
	// 이동
	virtual void Move() PURE_VIRTUAL(ABaseCharacter::Move, );
	// 공격
	virtual void Attack() PURE_VIRTUAL(ABaseCharacter::Attack, );
	// 스킬
	virtual void UseSkill(UBaseSkillComponent* usedSkill) PURE_VIRTUAL(ABaseCharacter::UseSkill, );



	//=============================================//
	//============== 인스턴스, 변수 ===============//
	//=============================================//

	//캐릭터 타입 ENUM변수
	ECharType type;
	
	//현재 체력
	float curHP;

	//최대 체력
	float maxHP;

	//이동 속도
	float moveSpeed;

	//Base Hand Actor 인스턴스
	ABaseHandActor* handActor;

	//1번 Skill Comp 인스턴스
	UBaseSkillComponent* firstSkill;

	//2번 Skill Comp 인스턴스
	UBaseSkillComponent* secondSkill;

	//궁극기 Skill Comp 인스턴스
	UBaseSkillComponent* ultSkill;

};
