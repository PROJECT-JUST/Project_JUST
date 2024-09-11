// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUtility.h"
#include "Components/ActorComponent.h"
#include "BaseSkillComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_JUST_API UBaseSkillComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBaseSkillComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	//스킬 사용 함수
	virtual void Use() PURE_VIRTUAL(UBaseSkillComponent::Use, );

	//스킬 타입 ENUM 변수
	ESkillType* skillType;

	//스킬 쿨타임 변수
	float coolTIme;

	//스킬 사용가능플래그
	bool canUseSkill;

	//스킬 데미지
	float skillDamage;

		
};
