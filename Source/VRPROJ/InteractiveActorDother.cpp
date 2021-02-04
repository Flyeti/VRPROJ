// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractiveActorDother.h"


// Sets default values
AInteractiveActorDother::AInteractiveActorDother()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AInteractiveActorDother::BeginPlay()
{
	Super::BeginPlay();
	Mesh->SetSimulatePhysics(true);
	Mesh->SetMassOverrideInKg(NAME_None, 10.f);
	Mesh->SetLinearDamping(10.f);
	Mesh->SetAngularDamping(0.f);
}



void AInteractiveActorDother::Click_Implementation()
{
	Mesh->SetVectorParameterValueOnMaterials(FName("Color"), FVector(float(rand()+ 0.1) / float((RAND_MAX)), float(rand() + 0.5) / float((RAND_MAX)), float(rand() + 0.3) / float((RAND_MAX))));

}



// Called every frame
void AInteractiveActorDother::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//StaticMeshComponent->AddRelativeRotation(FRotator(0.f, 2.f, 0.f));

}

