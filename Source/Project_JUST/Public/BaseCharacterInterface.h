// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include <BaseUtility.h>
#include "BaseCharacterInterface.generated.h"




// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBaseCharacterInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROJECT_JUST_API IBaseCharacterInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	// �ǰ�
	// virtual void GetDamage(float damage, FVector hitPoint, FVector hitNormal = FVector::ZeroVector, FName boneName = "", FVector attackerLocation = FVector::ZeroVector) = 0;
	virtual void GetDamage(FDamageResult damageInfo) = 0;
	// ���
	virtual void Death() = 0;
};
