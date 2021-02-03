// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractiveActor.h"

#define TEST_BIT(Bitmask, Bit) (((Bitmask) & (1 << static_cast<uint8>(Bit))) > 0)
#define SET_BIT(Bitmask, Bit) (Bitmask |= 1 << static_cast<uint8>(Bit))
#define CLEAR_BIT(Bitmask, Bit) (Bitmask &= ~(1 << static_cast<uint8>(Bit)))


// Sets default values
AInteractiveActor::AInteractiveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

// Called when the game starts or when spawned
void AInteractiveActor::BeginPlay()
{
	Super::BeginPlay();

	FVector Color(0.f, 0.f, 0.f);
	if (TEST_BIT(ColorBits, EColor::Red))
		Color.X = RedIntense;
	if (TEST_BIT(ColorBits, EColor::Green))
		Color.Y = GreenIntense;
	if (TEST_BIT(ColorBits, EColor::Blue))
		Color.Z = BlueIntense;
	
	ColorActor = Color;
	StaticMeshComponent->SetVectorParameterValueOnMaterials(FName("Color"), ColorActor);

}

// Called every frame
void AInteractiveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//StaticMeshComponent->AddRelativeRotation(FRotator(0.f, 0.f, 1.f));

	
	

	
}

