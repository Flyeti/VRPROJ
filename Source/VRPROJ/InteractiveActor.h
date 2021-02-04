// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "IClickableInterface.h"
#include "InteractiveActor.generated.h"

UENUM(Meta = (BitFlags))
enum class EColor : uint8 
{
	Red,
	Green,
	Blue
};
//ENUM_CLASS_FLAGS(EColor)

UCLASS()
class VRPROJ_API AInteractiveActor : public AActor, public IIClickableInterface
{
	GENERATED_BODY()
	
public:	
	AInteractiveActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Meta = (BitMask, BitmaskEnum = "EColor"))
	uint8 ColorBits;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ColorTrace;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ColorActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float RedIntense = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float GreenIntense = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float BlueIntense = 1;
	
protected:

	virtual void BeginPlay() override;	

public:
	
	virtual void Tick(float DeltaTime) override;

	

};
