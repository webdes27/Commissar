// Fill out your copyright notice in the Description page of Project Settings.

#include "Commissar.h"
#include "CommissarAmmunition.h"

#include "CommissarProjectile.h"

#include "Engine.h"

ACommissarAmmunition::ACommissarAmmunition()
{
	bIsProjectile = true;
}

// Called every frame
void ACommissarAmmunition::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);
}