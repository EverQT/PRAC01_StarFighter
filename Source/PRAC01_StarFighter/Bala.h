// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Bala.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PRAC01_STARFIGHTER_API UBala : public UActorComponent
{
	GENERATED_BODY()

private:
	float TipoBala;
	float DistanciaMax;
	float Tamano;
	float UbicacionX;
	float UbicacionY;
	float NivelDano;
	float Energia;

public:	
	// Sets default values for this component's properties
	UBala();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTipoBala() { return TipoBala; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTipoBala(float _TipoBala) { TipoBala = _TipoBala; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getDistanciaMax() { return DistanciaMax; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setDistanciaMax(float _DistanciaMax) { DistanciaMax = _DistanciaMax; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTamano() { return Tamano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTamano(float _Tamano) { Tamano = _Tamano; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getUbicacionX() { return UbicacionX; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setUbicacionX(float _UbicacionX) { UbicacionX = _UbicacionX; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getUbicacionY() { return UbicacionY; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setUbicacionY(float _UbicacionY) { UbicacionY = _UbicacionY; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getNivelDano() { return NivelDano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setNivelDano(float _NivelDano) { NivelDano = _NivelDano; }


	UFUNCTION(BlueprintCallable)
		void setMatar(float _Matar) { Matar = _Matar; }
	UFUNCTION(BlueprintCallable)
		float getMatar() { return Matar; }


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	float Matar;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
