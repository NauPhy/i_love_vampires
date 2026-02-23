#include "AOE.h"
#include "Components/ShapeComponent.h"
#include "Components/SphereComponent.h"
#include "Combatant.h"
#include "Definitions.h"

void AAOE::initialise_AAOE(APawn* pawnRef, const TArray<FGameplayEffectSpecHandle>& effect, const TArray<float>& effectChances, const FAOETemplate& AOEData) {
	initialise_AAttackActor(pawnRef, effect, effectChances);
	initialise_AAOE_int(AOEData);
}
void AAOE::initialise_AAOE(TWeakObjectPtr<APawn> pawnRef, const TArray<EffectStruct>& effect, const FAOETemplate& AOEData) {
	initialise_AAttackActor(pawnRef, effect);
	initialise_AAOE_int(AOEData);
}
void AAOE::initialise_AAOE_int(const FAOETemplate& AOEData) {
	_duration = AOEData.duration;
	_shape = AOEData.shape;
	_radius = AOEData.radius;
	initShape();
}

void AAOE::initShape() {
	//circle (sphere)
	if (_shape == 0) {
		_collider = NewObject<USphereComponent>(this);
		Cast<USphereComponent>(_collider)->InitSphereRadius(_radius);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Not implemented"));
		return;
	}
	_collider->SetupAttachment(RootComponent);
	_collider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	_collider->SetCollisionObjectType(ECC_WorldDynamic);
	_collider->SetCollisionResponseToAllChannels(ECR_Ignore);
	_collider->SetCollisionResponseToChannel(ECC_Pawn, ECollisionResponse::ECR_Overlap);
	_collider->OnComponentBeginOverlap.AddDynamic(this, &AAOE::OnOverlapBegin);
	_collider->RegisterComponent();
	_collider->UpdateOverlaps();

	UE_LOG(LogTemp, Warning, TEXT("AOE object type: %d"), (int32)_collider->GetCollisionObjectType());
	TArray<AActor*> OverlappingActors;
	_collider->GetOverlappingActors(OverlappingActors, APawn::StaticClass());
	for (AActor* Actor : OverlappingActors)
	{
		OnOverlapBegin(_collider, Actor, nullptr, 0, false, FHitResult());
	}
}

void AAOE::OnOverlapBegin(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult
) {
	if (_isAfterimage)
		return;
	for (const TWeakObjectPtr<APawn>& effectedPawn : _effectedPawns) {
		if (effectedPawn.Get() == OtherActor) {
			return;
		}
	}
	ACombatant* combatantActor = Cast<ACombatant>(OtherActor);
	if (combatantActor == nullptr) {
		LOGERROR("AAOE::OnOverlapBegin - OtherActor is not a combatant");
		return;
	}
	applyEffect(combatantActor);
}

void AAOE::Tick(float delta) {
	AAttackActor::Tick(delta);
	if (_duration == 0) {
		if (_consumedDuration >= 0.25) {
			Destroy();
			return;
		}
		if (_consumedDuration > 0)
			_isAfterimage = true;
	}
	else if(_consumedDuration >= _duration) {
		Destroy();
		return;
	}
	_consumedDuration += delta;
}

