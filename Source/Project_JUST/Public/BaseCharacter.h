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
	
	//==============        ̽   Լ  ==============//
	//  ǰ 
	virtual void GetDamage(FDamageResult damageInfo) PURE_VIRTUAL(ABaseCharacter::GetDamage, );
	//    
	virtual void Death() PURE_VIRTUAL(ABaseCharacter::Death, );

	//==============  θ Ŭ      Լ  ==============//
	//  ̵ 
	virtual void Move() PURE_VIRTUAL(ABaseCharacter::Move, );
	//     
	virtual void Attack() PURE_VIRTUAL(ABaseCharacter::Attack, );
	//   ų
	virtual void UseSkill(UBaseSkillComponent* usedSkill) PURE_VIRTUAL(ABaseCharacter::UseSkill, );



	//=============================================//
	//==============  ν  Ͻ ,      ===============//
	//=============================================//

	//ĳ     Ÿ   ENUM    
	ECharType type;
	
	//     ü  
	float curHP;

	// ִ  ü  
	float maxHP;

	// ̵   ӵ 
	float moveSpeed;

	//Base Hand Actor  ν  Ͻ 
	ABaseHandActor* handActor;

	//1   Skill Comp  ν  Ͻ 
	UBaseSkillComponent* firstSkill;

	//2   Skill Comp  ν  Ͻ 
	UBaseSkillComponent* secondSkill;

	// ñر  Skill Comp  ν  Ͻ 
	UBaseSkillComponent* ultSkill;

};
