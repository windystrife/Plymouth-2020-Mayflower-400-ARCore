// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ARPlaneActor.generated.h"

UCLASS()
class PLYMOUTHARPORTAL_API AARPlaneActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AARPlaneActor();

	/* The procedural mesh component */
	UPROPERTY(Category = GoogleARCorePlaneActor, EditAnywhere, BlueprintReadWrite)
		class UProceduralMeshComponent* PlanePolygonMeshComponent;

	/** The GoogleARCorePlane object this actor represents.*/
	UPROPERTY(Category = GoogleARCorePlaneActor, BlueprintReadWrite)
		class UGoogleARCorePlane* ARCorePlaneObject = nullptr;

	/** The feathering distance for the polygon edge. Default to 10 cm*/
	UPROPERTY(Category = GoogleARCorePlaneActor, EditAnywhere, BlueprintReadWrite)
		float EdgeFeatheringDistance = 10.0f;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "GoogleARCore|PlaneActor", meta = (Keywords = "googlear arcore plane"))
	void UpdatePlanePolygonMesh();
	
};
