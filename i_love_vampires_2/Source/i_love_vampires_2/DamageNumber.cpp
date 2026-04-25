#pragma once
#include "DamageNumber.h"
#include "Definitions.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"

void UDamageNumber::initialise_UDamageNumber_Implementation(AActor* instigator, const FVector& offset, float damageAmount) {
	if (!IsValid(instigator)) {
		LOGERROR("UDamageNumber::initialise_UDamageNumber_Implementation - invalid instigator");
		return;
	}
	AddToViewport();
	_instigator = instigator;
	_offset = offset;
	_damageAmount = damageAmount;
	_lastKnownLocation = instigator->GetActorLocation();
}

void UDamageNumber::NativeTick(const FGeometry& MyGeometry, float InDeltaTime) {
	Super::NativeTick(MyGeometry, InDeltaTime);
	if (!_instigator.IsValid()) {
		moveToApparentLocation(_lastKnownLocation + _offset);
	}
	else {
		moveToApparentLocation(_instigator->GetActorLocation() + _offset);
	}
}

void UDamageNumber::moveToApparentLocation(const FVector& location) {
	FVector2D screenPos;
	if (!UGameplayStatics::ProjectWorldToScreen(UGameplayStatics::GetPlayerController(this, 0), location, screenPos)) {
		LOGERROR("unrealHelpers::spawnDamageNumberNearMe - failed to project world to screen");
		return;
	}
	SetPositionInViewport(screenPos);
}