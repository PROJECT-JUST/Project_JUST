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
	//==============      함수      ===============//
	//=============================================//

	////사용함수(공격, 방어, 아이템)
	//virtual void Use() PURE_VIRTUAL(ABaseHandActor::Use, );

	////장착함수
	//virtual void AttachOwner() PURE_VIRTUAL(ABaseHandActor::AttachOwner, );

	////장착해제 함수
	//virtual void DetachOwner() PURE_VIRTUAL(ABaseHandActor::DetachOwner, );

	////드랍함수
	//virtual void Discard() PURE_VIRTUAL(ABaseHandActor::Discard, );

	//공격함수
	virtual void Attack() PURE_VIRTUAL(ABaseWeaponActor::Attack(), );

	//=============================================//
	//============== 인스턴스, 변수 ===============//
	//=============================================//

	//무기 타입 ENUM변수
	EWeaponType* weaponType;

	//무기 데미지
	float weaponDamage;


};
