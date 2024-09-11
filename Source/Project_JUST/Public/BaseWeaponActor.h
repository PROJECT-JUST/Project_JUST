// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUtility.h"
#include "BaseHandActor.h"
#include "BaseWeaponActor.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_JUST_API ABaseWeaponActor : public ABaseHandActor
{
	GENERATED_BODY()
	

public:
	
	//=============================================//
	//==============      �Լ�      ===============//
	//=============================================//

	////����Լ�(����, ���, ������)
	//virtual void Use() PURE_VIRTUAL(ABaseHandActor::Use, );

	////�����Լ�
	//virtual void AttachOwner() PURE_VIRTUAL(ABaseHandActor::AttachOwner, );

	////�������� �Լ�
	//virtual void DetachOwner() PURE_VIRTUAL(ABaseHandActor::DetachOwner, );

	////����Լ�
	//virtual void Discard() PURE_VIRTUAL(ABaseHandActor::Discard, );

	//�����Լ�
	virtual void Attack() PURE_VIRTUAL(ABaseWeaponActor::Attack(), );

	//=============================================//
	//============== �ν��Ͻ�, ���� ===============//
	//=============================================//

	//���� Ÿ�� ENUM����
	EWeaponType* weaponType;

	//���� ������
	float weaponDamage;


};
