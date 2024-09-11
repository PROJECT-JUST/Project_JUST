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


	//��ų ��� �Լ�
	virtual void Use() PURE_VIRTUAL(UBaseSkillComponent::Use, );

	//��ų Ÿ�� ENUM ����
	ESkillType* skillType;

	//��ų ��Ÿ�� ����
	float coolTIme;

	//��ų ��밡���÷���
	bool canUseSkill;

	//��ų ������
	float skillDamage;

		
};
