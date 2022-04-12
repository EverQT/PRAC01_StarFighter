// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Asteroid.generated.h"

UCLASS()
class PRAC01_STARFIGHTER_API AAsteroid : public APawn
{
	GENERATED_BODY()

private:
	float Tamano;
	float Ubicacionx;
	float UbicacionY;
	float NivelDureza;

public:
	// Sets default values for this pawn's properties
	AAsteroid();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTamano() { return Tamano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTamano(float _Tamano) { Tamano = _Tamano; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getUbicacionX() { return Ubicacionx; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setUbicacionX(float _UbicacionX) { Ubicacionx = _UbicacionX; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getUbicacionY() { return UbicacionY; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setUbicacionY(float _UbicacionY) { UbicacionY = _UbicacionY; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getNivelDureza() { return NivelDureza; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setNivelDureza(float _NivelDureza) { NivelDureza = _NivelDureza; }



	UFUNCTION(BlueprintCallable)
		void setDestroy(float _Destroy) { Destroy = _Destroy; }
	UFUNCTION(BlueprintCallable)
		float getDestroy() { return Destroy; }

	UFUNCTION(BlueprintCallable)
		void setDividirse(float _Dividirse) { Dividirse = _Dividirse; }
	UFUNCTION(BlueprintCallable)
		float getDvidirse() { return Dividirse; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float Destroy;
	float Dividirse;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
