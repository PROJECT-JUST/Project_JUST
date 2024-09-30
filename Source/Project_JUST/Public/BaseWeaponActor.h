// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUtility.h"
#include "BaseHandActor.h"
#include "BaseWeaponActor.generated.h"

/**
 * 
 */
UCLASS(ABSTRACT)
class PROJECT_JUST_API ABaseWeaponActor : public ABaseHandActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:	
	// Called every frame
    virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Default|Values", BlueprintGetter=GetWeaponType, BlueprintSetter=SetWeaponType)
	EWeaponType weaponType;

	// JBS get set 예시
		public:
	__declspec(property(get = GetWeaponType, put = SetWeaponType)) EWeaponType WEAPON_TYPE;
	UFUNCTION(BlueprintGetter)
	EWeaponType GetWeaponType()
	{
		return weaponType;
	}
	UFUNCTION(BlueprintSetter)
	void SetWeaponType(EWeaponType value)
	{
		weaponType = value;
	}
		protected:

	float weaponDamage;

public:

protected:
	virtual void Attack() PURE_VIRTUAL(ABaseWeaponActor::Attack(), );


public:





};
