// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUtility.h"
#include "BaseHandActor.h"
#include "BaseCharacterInterface.h"
#include "BaseSkillComponent.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS(ABSTRACT)
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
	
	//============== 인터페이스 상속함수  ==============//
	//데미지 처리
	virtual void GetDamage(FDamageResult damageInfo) PURE_VIRTUAL(ABaseCharacter::GetDamage, );
	//사망처리
	virtual void Death() PURE_VIRTUAL(ABaseCharacter::Death, );

	//==============  부모 상속 함수  ==============//
	//이동
	virtual void Move() PURE_VIRTUAL(ABaseCharacter::Move, );
	//공격 
	virtual void Attack() PURE_VIRTUAL(ABaseCharacter::Attack, );
	//스킬사용
	virtual void UseSkill(UBaseSkillComponent* usedSkill) PURE_VIRTUAL(ABaseCharacter::UseSkill, );



	//=============================================//
	//============== 부모 상속 변수  ===============//
	//=============================================//

	//캐릭터타입 Enum변수
	ECharType type;
	
	//현재체력
	float curHP;

	//최대체력 
	float maxHP;

	//이동속도
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
