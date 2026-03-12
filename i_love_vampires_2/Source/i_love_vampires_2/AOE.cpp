#include "AOE.h"
#include "Components/ShapeComponent.h"
#include "Components/SphereComponent.h"
#include "Combatant.h"

void AAOE::initialise_AAOE(APawn* pawnRef, const FAOEConfig& config, const FAOEAttributes& attributes) {
	initialise_AAttackActor(pawnRef);
	_config = MakeUnique<FAOEConfig>(config);
	_attributes = MakeUnique<FAOEAttributes>(attributes);
	initShape();
}

void AAOE::initShape() {
	FAOEConfig* config = nullptr;
	if (!castConfig<FAOEConfig>(config))
		return;
	if (config->_shape == _CIRCLE) {
		_collider = NewObject<USphereComponent>(this);
		Cast<USphereComponent>(_collider)->InitSphereRadius(_radius);
	}
	else {
		LOGERROR("AAOE::initShape - shape not implemented");
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
	FAOEAttributes* attr;
	if (!castAttribute<FAOEAttributes>(attr))
		return;
	if (attr->_duration == 0) {
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

