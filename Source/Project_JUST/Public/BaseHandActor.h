// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUtility.h"
#include "GameFramework/Actor.h"
#include "BaseHandActor.generated.h"

UCLASS(ABSTRACT)
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
	//==============      ???      ===============//
	//=============================================//

	//??????(????, ???, ??????)
	virtual void Use() PURE_VIRTUAL(ABaseHandActor::Use, );

	//???????
	virtual void AttachOwner() PURE_VIRTUAL(ABaseHandActor::AttachOwner, );

	//???????? ???
	virtual void DetachOwner() PURE_VIRTUAL(ABaseHandActor::DetachOwner, );

	//??????
	virtual void Discard() PURE_VIRTUAL(ABaseHandActor::Discard, );


	//=============================================//
	//============== ?��????, ???? ===============//
	//=============================================//

	//?????? ??? ENUM????
	EItemType itemType;


};
