// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveStool.h"

// Sets default values
AMoveStool::AMoveStool()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	MoveSpeed = FMath::RandRange(50.0f,300.0f);
	MaxRange = FMath::RandRange(300.0f, 1000.0f);
	xValue = 1;
	yValue = 0;
	zValue = 0;
}

// Called when the game starts or when spawned
void AMoveStool::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Display, TEXT("Start!!"));

	SetActorLocation(LocationVariable);
	SetActorRotation(RotationVariable);
	SetActorScale3D(ScaleVariable);
	StartLocation = GetActorLocation();
}

// Called every frame
void AMoveStool::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	CurrentLocation += FVector(xValue, yValue, zValue) * MoveSpeed * DeltaTime;
	SetActorLocation(CurrentLocation);

	float DistanceTraveled = FVector::Dist(StartLocation, CurrentLocation);

	if (DistanceTraveled >= MaxRange) {
		MoveSpeed *= -1.0f;
	}
}

