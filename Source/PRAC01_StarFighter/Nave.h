// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nave.generated.h"

UCLASS()
class PRAC01_STARFIGHTER_API ANave : public AActor
{
	GENERATED_BODY()

public:
	float Colour;
	float Model;

private:
	float Tamano;
	float PosicionX;
	float PosicionY;
	float Life;
	
public:	
	// Sets default values for this actor's properties
	ANave();


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getPosicionX() { return PosicionX; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setPosicionX(float _PosicionX) { PosicionX = _PosicionX; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getPosicionY() { return PosicionY; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setPosicionY(float _PosicionY) { PosicionY = _PosicionY; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTamano() { return Tamano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTamano(float _Tamano) { Tamano = _Tamano; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getLife() { return Life; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setLife(float _Life) { Life = _Life; }


	UFUNCTION(BlueprintCallable)
	void setMorir(float _Morir) { Morir = _Morir; }
	UFUNCTION(BluepirntReadWrite)
	float getMorir() { return Morir; }

	UFUNCTION(BlueprintCallable)
		void setRevivir(float _Revivir) { Revivir = _Revivir; }
	UFUNCTION(BluepirntReadWrite)
		float getRevivir() { return Revivir; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float Morir;
	float Revivir;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
