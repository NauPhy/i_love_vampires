#include "AOE.h"
#include "Definitions.h"

#include "Components/ShapeComponent.h"
#include "Components/SphereComponent.h"
#include "Combatant.h"

void AAOE::initialise_AAOE(
	APawn* pawnRef,
	const UAttackConfig* attackConfig,
	const UAttackAttributes* attackAttributes,
	const UAOEConfig* AOEConfig,
	const UAOEAttributes* AOEAttributes,
	bool delayFullConstruction) 
{
	if (delayFullConstruction) {
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);
		SetActorTickEnabled(false);
		_delayedConstruction_AOEConfig = DuplicateObject<UAOEConfig>(AOEConfig, this);
		_delayedConstruction_AOEAttributes = DuplicateObject<UAOEAttributes>(AOEAttributes, this);
		_delayedConstruction_attackConfig = DuplicateObject<UAttackConfig>(attackConfig, this);
		_delayedConstruction_attackAttributes = DuplicateObject<UAttackAttributes>(attackAttributes, this);
		_delayedConstruction_pawnRef = TWeakObjectPtr<APawn>(pawnRef);
	}
	else {
		initialise_AAttackActor(pawnRef, attackConfig, attackAttributes);
		_AOEConfig = DuplicateObject<UAOEConfig>(AOEConfig, this);
		_AOEAttributes = DuplicateObject<UAOEAttributes>(AOEAttributes, this);
		initShape();
	}
}

void AAOE::completeDelayedConstruction() {
	if (_delayedConstruction_attackConfig == nullptr ||
		_delayedConstruction_attackAttributes == nullptr ||
		_delayedConstruction_pawnRef == nullptr ||
		_delayedConstruction_AOEAttributes == nullptr ||
		_delayedConstruction_AOEConfig == nullptr
		) {
		LOGERROR("AAOE::completeDelayedConstruction - delayed construction data not set");
		return;
	}
	initialise_AAttackActor(_delayedConstruction_pawnRef.Get(), _delayedConstruction_attackConfig, _delayedConstruction_attackAttributes);
	_delayedConstruction_attackConfig = nullptr;
	_delayedConstruction_attackAttributes = nullptr;
	_delayedConstruction_pawnRef = nullptr;

	_AOEConfig = _delayedConstruction_AOEConfig;
	_delayedConstruction_AOEConfig = nullptr;

	_AOEAttributes = _delayedConstruction_AOEAttributes;
	_delayedConstruction_AOEAttributes = nullptr;

	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorTickEnabled(true);
	initShape();
}

void AAOE::initShape() {
	if (!IsValid(_AOEAttributes) || !IsValid(_AOEConfig)) {
		LOGERROR("AAOE::initShape - attributes or config not valid");
		return;
	}
	if (_AOEConfig->_shape == _CIRCLE) {
		_collider = NewObject<USphereComponent>(this);
		Cast<USphereComponent>(_collider)->InitSphereRadius(_AOEAttributes->_radius);
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
	if (!IsValid(_AOEAttributes)) {
		LOGERROR("AAOE::Tick - attributes not valid");
		return;
	}
	if (_AOEAttributes->_duration == 0) {
		if (_consumedDuration >= 0.25) {
			Destroy();
			return;
		}
		if (_consumedDuration > 0)
			_isAfterimage = true;
	}
	else if(_consumedDuration >= _AOEAttributes->_duration) {
		Destroy();
		return;
	}
	_consumedDuration += delta;
}

void AAOE::factoryInitQuery(AAttackFactory* factory) {
	if (!IsValid(factory)) {
		LOGERROR("AAOE::factoryInitQuery - factory is not valid");
		return;
	}
	factory->initAOE(this);
}
///////////////////////////////////////////////////////////////////////////////

void UAOEAttributes::modifyAttributes(const UCombatantAttributes* combatantAttributes, const UAOEAttributes* baseAttributes, UAOEAttributes* finalAttributes) {
	finalAttributes->_radius = baseAttributes->_radius * combatantAttributes->_projectileSize;
}
///////////////////////////////////////////////////////////////////////////////

void AAOEFactory::initialise_AAOEFactory(
	APawn* pawnRef,
	UCombatantAttributes* comb,
	const UAttackConfig* attackConfig,
	const UAttackAttributes* attackAttributes,
	const UAOEConfig* AOEConfig,
	const UAOEAttributes* AOEAttributes)
{
	initialise_AAttackFactory(pawnRef, comb, attackConfig, attackAttributes);
	_AOEConfig = DuplicateObject<UAOEConfig>(AOEConfig, this);
	_AOEComponent = NewObject<UAOEComponent>(this);
	_AOEComponent->initialise_UAOEComponent(AOEAttributes);
}
void AAOEFactory::launchAttack(const FVector& forward) {
	AAOE* newAttack = unrealHelpers::spawnActorOnTopOfMe<AAOE>(this);
	if (!IsValid(newAttack)) {
		LOGERROR("AAOEFactory::launchAttack - failed to spawn AAOE");
		return;
	}
	newAttack->factoryInitQuery(this);
}
void AAOEFactory::initAOE(AAOE* aoe) {
	if (!IsValid(aoe) ||
		!IsValid(_attackComponent) ||
		!IsValid(_AOEComponent)
		) {
		LOGERROR("UAOEFactory::initAOE - variable is not valid");
		return;
	}
	aoe->initialise_AAOE(
		_pawnRef.Get(),
		_attackConfig,
		_attackComponent->getDiscretizedFinal<UAttackAttributes>(this),
		_AOEConfig,
		_AOEComponent->getDiscretizedFinal<UAOEAttributes>(this)
	);
}
///////////////////////////////////////////////////////////////////////////////

AAttackFactory* UAOEFactoryTemplate::createFactory(APawn* pawnRef, UCombatantAttributes* comb) const {
	if (!IsValid(pawnRef)) {
		LOGERROR("UAOEFactoryTemplate::createFactory - pawnRef is not valid");
		return nullptr;
	}
	AAOEFactory* factory = unrealHelpers::spawnActorOnTopOfMe<AAOEFactory>(pawnRef);
	if (!IsValid(factory)) {
		LOGERROR("UAOEFactoryTemplate::createFactory - failed to spawn AAOEFactory");
		return nullptr;
	}
	factory->initialise_AAOEFactory(
		pawnRef,
		comb,
		_attackConfig,
		_attackAttributes,
		_AOEConfig,
		_AOEAttributes
	);
	return factory;
}