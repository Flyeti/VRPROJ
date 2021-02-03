// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractiveActorSon.h"

// Sets default values
AInteractiveActorSon::AInteractiveActorSon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AInteractiveActorSon::BeginPlay()
{
	Super::BeginPlay();
	StaticMeshComponent->SetSimulatePhysics(true);
	StaticMeshComponent->SetMassOverrideInKg(NAME_None, 99999.f);
	StaticMeshComponent->SetLinearDamping(0.f);
	StaticMeshComponent->SetAngularDamping(0.f);

}


void AInteractiveActorSon::Click_Implementation()
{
	StaticMeshComponent->SetRelativeRotation(FRotator(float(rand()), float(rand()), float(rand())));

}

// Called every frame
void AInteractiveActorSon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//StaticMeshComponent->AddRelativeRotation(FRotator(0.f, 0.5f, 3.f));

}