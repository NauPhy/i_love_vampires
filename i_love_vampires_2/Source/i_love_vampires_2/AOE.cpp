#include "AOE.h"
#include "Components/ShapeComponent.h"
#include "Components/SphereComponent.h"
#include "Combatant.h"
#include "Definitions.h"

void AAOE::initialise_AAOE(APawn* pawnRef, bool delayFullConstruction) {
	if (delayFullConstruction) {
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);
		SetActorTickEnabled(false);
		_delayedConstruction_pawnRef = TWeakObjectPtr<APawn>(pawnRef);
	}
	else {
		initialise_AAttackActor(pawnRef);
		initShape();
	}
}

void AAOE::initialise_AAOE(APawn* pawnRef, const UAOEData* data, bool delayFullConstruction) {
	initialise_AAOE(pawnRef, data->_config, data->_attributes, delayFullConstruction);
}

void AAOE::initialise_AAOE(APawn* pawnRef, const UAOEConfig* config, const UAOEAttributes* attributes, bool delayFullConstruction) {
	if (delayFullConstruction) {
		_delayedConstruction_config = DuplicateObject<UAOEConfig>(config, this);
		_delayedConstruction_attributes = DuplicateObject<UAOEAttributes>(attributes, this);
	}
	else {
		_config = DuplicateObject<UAOEConfig>(config, this);
		_attributes = DuplicateObject<UAOEAttributes>(attributes, this);
		initialise_AAOE(pawnRef);
	}
}

void AAOE::completeDelayedConstruction() {
	if (_delayedConstruction_config == nullptr || _delayedConstruction_attributes == nullptr) {
		LOGERROR("AAOE::completeDelayedConstruction - delayed construction data not set");
		return;
	}
	_config = _delayedConstruction_config;
	_delayedConstruction_config = nullptr;

	_attributes = _delayedConstruction_attributes;
	_delayedConstruction_attributes = nullptr;

	initialise_AAttackActor(_delayedConstruction_pawnRef.Get());
	_delayedConstruction_pawnRef = nullptr;

	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorTickEnabled(true);
	initShape();
}

void AAOE::initShape() {
	UAOEAttributes* attr = nullptr;
	if (!castAttributes<UAOEAttributes>(attr))
		return;
	UAOEConfig* config = nullptr;
	if (!castConfig<UAOEConfig>(config))
		return;
	if (config->_shape == _CIRCLE) {
		_collider = NewObject<USphereComponent>(this);
		Cast<USphereComponent>(_collider)->InitSphereRadius(attr->_radius);
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
	UAOEAttributes* attr;
	if (!castAttributes<UAOEAttributes>(attr))
		return;
	if (attr->_duration == 0) {
		if (_consumedDuration >= 0.25) {
			Destroy();
			return;
		}
		if (_consumedDuration > 0)
			_isAfterimage = true;
	}
	else if(_consumedDuration >= attr->_duration) {
		Destroy();
		return;
	}
	_consumedDuration += delta;
}

void UAOEAttributes::modifyAttributes(const UCombatantAttributes* combatantAttributes, const UAOEAttributes* baseAttributes, UAOEAttributes* finalAttributes) {
	const UAttackAttributes* superBase = Cast<UAttackAttributes>(baseAttributes);
	if (superBase == nullptr) {
		LOGERROR("AAOE::modifyAttributes - baseAttributes is not of type FAOEAttributes");
		return;
	}
	UAttackAttributes* superFinal = Cast<UAttackAttributes>(finalAttributes);
	if (superFinal == nullptr) {
		LOGERROR("AAOE::modifyAttributes - finalAttributes is not of type FAOEAttributes");
		return;
	}
	UAttackAttributes::modifyAttributes(combatantAttributes, superBase, superFinal);
	finalAttributes->_radius = baseAttributes->_radius * combatantAttributes->_projectileSize;
}