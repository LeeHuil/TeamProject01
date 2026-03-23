// MyActor.cpp


#include "MyActor.h"

AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();

<<<<<<< HEAD
	//UE_LOG(LogTemp, Warning, TEXT("AMyActor has begun play!"));
=======
	UE_LOG(LogTemp, Warning, TEXT("AMyActor has begun play!"));
>>>>>>> eec6702543bc168f58c8f9f259c202b4880f0a32
}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

<<<<<<< HEAD
	//UE_LOG(LogTemp, Warning, TEXT("AMyActor is ticking!"));
=======
	UE_LOG(LogTemp, Warning, TEXT("AMyActor is ticking!"));
>>>>>>> eec6702543bc168f58c8f9f259c202b4880f0a32
}

