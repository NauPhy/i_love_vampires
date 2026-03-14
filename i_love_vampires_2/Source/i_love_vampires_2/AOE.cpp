#include "AOE.h"
#include "Definitions.h"

#include "Components/ShapeComponent.h"
#include "Components/SphereComponent.h"
#include "Combatant.h"

void AAOE::initialise_AAOE(
	APawn* pawnRef,
	const UAttackConfg* attackConfig,
	const UAttackAttributes* attackAttributes,
	const UAOEConfig* AOEConfig,
	const UAOEAttributes* AOEAttributes,
	bool delayFullConstruction) 
{
	if (delayFullConstruction) {
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);
		SetActorTickEnabled(false);
		_delayedConstruction_AOEconfig = DuplicateObject<UAOEConfig>(AOEConfig, this);
		_delayedConstruction_AOEattributes = DuplicateObject<UAOEAttributes>(AOEAttributes, this);
		_delayedConstruction_AttackConfig = DuplicateObject<UAttackConfg>(attackConfig, this);
		_delayedConstruction_AttackAttributes = DuplicateObject<UAttackAttributes>(attackAttributes, this);
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
		_delayedConstruction_AOEattributes == nullptr ||
		_delayedConstruction_AOEconfig == nullptr
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
	if (!IsValid(_aoeAttributes) || !IsValid(_aoeConfig)) {
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

void AAOE::factoryInitQuery(const UAttackFactory* factory) {
	if (!IsValid(factory)) {
		LOGERROR("AAOE::factoryInitQuery - factory is not valid");
		return;
	}
	factory->initAOE(this);
}
///////////////////////////////////////////////////////////////////////////////

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
///////////////////////////////////////////////////////////////////////////////

void UAOEFactory::initialise_UAOEFactory(
	APawn* pawnRef,
	const UAttackConfig* attackConfig,
	const UAttackAttributes* attackAttributes,
	const UAOEConfig* AOEConfig,
	const UAOEAttributes* AOEAttributes)
{
	initialise_UAttackFactory(pawnRef, attackConfig, attackAttributes);
	_AOEConfig = DuplicateObject<UAOEConfig>(AOEConfig, this);
	_AOEComponent = NewObject<UAOEComponent>(this);
	_AOEComponent->initialise_UAOEComponent(AOEAttributes);
}
///////////////////////////////////////////////////////////////////////////////

bool UAOEFactoryTemplate::isValid() const {
	if (!IsValid(_AOEConfig)) {
		LOGERROR("UAOEFactoryTemplate::isValid - AOEConfig is not valid");
		return false;
	}
	if (!IsValid(_AOEAttributes)) {
		LOGERROR("UAOEFactoryTemplate::isValid - AOEAttributes is not valid");
		return false;
	}
	return UAttackFactoryTemplate::isValid();
}

void UAOEFactoryTemplate::createFactory(APawn* pawnRef, const UObject* caller) const {
	if (!isValid())
		return nullptr;
	UAOEFactory* factory = NewObject<UAOEFactory>(caller);
	factory->initialise_UAOEFactory(
		pawnRef,
		_delayedConstruction_AttackConfig != nullptr ? _delayedConstruction_AttackConfig : _attackConfig,
		_delayedConstruction_AttackAttributes != nullptr ? _delayedConstruction_AttackAttributes : _attackAttributes,
		_delayedConstruction_AOEconfig != nullptr ? _delayedConstruction_AOEconfig : _AOEConfig,
		_delayedConstruction_AOEAttributes != nullptr ? _delayedConstruction_AOEAttributes : _AOEAttributes
	);
	return factory;
}