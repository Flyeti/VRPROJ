// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractiveActor.h"
#include "InteractiveActorDother.generated.h"

/**
 * 
 */
UCLASS()
class VRPROJ_API AInteractiveActorDother : public AInteractiveActor
{
	GENERATED_BODY()
	
public:

	AInteractiveActorDother();

	void Click_Implementation();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
};

