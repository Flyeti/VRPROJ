// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractiveActor.h"
#include "InteractiveActorSon.generated.h"

/**
 * 
 */
UCLASS()
class VRPROJ_API AInteractiveActorSon : public AInteractiveActor
{
	GENERATED_BODY()
	
public:

	AInteractiveActorSon();

	void Click_Implementation();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
};
