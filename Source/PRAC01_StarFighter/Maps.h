// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Maps.generated.h"

UCLASS()
class PRAC01_STARFIGHTER_API AMaps : public AActor
{
	GENERATED_BODY()

public:
	float selecMap;
	float NivelMap;

private:
	float TipoMapa;
	float Tamano;
	
public:	
	// Sets default values for this actor's properties
	AMaps();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTipoMapa() { return TipoMapa; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTipoMapa(float _TipoMapa) { TipoMapa = _TipoMapa; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTamano() { return Tamano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTamano(float _Tamano) { Tamano = _Tamano; }

	UFUNCTION(BlueprintCallable)
		void setCambiar(float _Cambiar) { Cambiar = _Cambiar; }
	UFUNCTION(BlueprintCallable)
		float getCambiar() { return Cambiar; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float Cambiar;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
