// Fill out your copyright notice in the Description page of Project Settings.


#include "RotateStool.h"

// Sets default values
ARotateStool::ARotateStool()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComp->SetupAttachment(SceneRoot);
	XRotateSpeed = FMath::RandRange(0.0f, 120.0f);
	YRotateSpeed = FMath::RandRange(0.0f, 120.0f);
	ZRotateSpeed = FMath::RandRange(0.0f, 120.0f);
}

void ARotateStool::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARotateStool::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!FMath::IsNearlyZero(ZRotateSpeed)) {
		AddActorLocalRotation(FRotator(YRotateSpeed * DeltaTime, ZRotateSpeed * DeltaTime, XRotateSpeed * DeltaTime));
	}
}

