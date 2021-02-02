// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "InteractiveActor.generated.h"

UENUM(Meta = (BitFlags))
enum class EColor : uint8 
{
	None = 0 UMETA(Hidden),
	Red,
	Green,
	Blue
};


UCLASS()
class VRPROJ_API AInteractiveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AInteractiveActor();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, Meta = (BitMask, BitmaskEnum = "EColor"))
	uint8 ColorBits;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
