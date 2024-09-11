// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUtility.h"
#include "GameFramework/Actor.h"
#include "BaseHandActor.generated.h"

UCLASS()
class PROJECT_JUST_API ABaseHandActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseHandActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//=============================================//
	//==============      함수      ===============//
	//=============================================//

	//사용함수(공격, 방어, 아이템)
	virtual void Use() PURE_VIRTUAL(ABaseHandActor::Use, );

	//장착함수
	virtual void AttachOwner() PURE_VIRTUAL(ABaseHandActor::AttachOwner, );

	//장착해제 함수
	virtual void DetachOwner() PURE_VIRTUAL(ABaseHandActor::DetachOwner, );

	//드랍함수
	virtual void Discard() PURE_VIRTUAL(ABaseHandActor::Discard, );


	//=============================================//
	//============== 인스턴스, 변수 ===============//
	//=============================================//

	//아이템 타입 ENUM변수
	EItemType* itemType;



};
