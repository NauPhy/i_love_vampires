#include "AOE.h"
#include "Definitions.h"

#include "Components/ShapeComponent.h"
#include "Components/SphereComponent.h"
#include "Combatant.h"
#include "unrealHelpers.h"
#include "helpers.h"

void AAOE::initialise_AAOE(const AOEInitStruct& temp) 
{
	AAttackActor::initialise_AAttackActor(temp._attack);
	_AOEConfig = temp._AOEConfig;
	_AOEAttributes = std::make_unique<AOEAttributes>(temp._AOEAttributes);
	_initialisedWithDelay = temp._delayFullConstruction;
	if (temp._delayFullConstruction) {
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);
		SetActorTickEnabled(false);
	}
}

void AAOE::BeginPlay() {
	if (!_initialisedWithDelay) {
		if (!IsValid(_AOEConfig.Get()) || _AOEAttributes.get() == nullptr || !IsValid(RootComponent)) {
			LOGERROR("AAOE::BeginPlay - invalid parameters");
			return;
		}
		Super::BeginPlay();
		initShape();
	}
}

void AAOE::completeDelayedConstruction() {
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorTickEnabled(true);
	_initialisedWithDelay = false;
	BeginPlay();
}

void AAOE::initShape() {
	if (_AOEConfig->_shape == _CIRCLE) {
		_collider = NewObject<USphereComponent>(this);
		Cast<USphereComponent>(_collider)->InitSphereRadius(_AOEAttributes->_radius.getFinal());
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
	if (!IsValid(OtherActor)) {
		LOGERROR("AAOE::OnOverlapBegin - OtherActor is not valid");
		return;
	}
	if (_isAfterimage)
		return;
	for (const TWeakObjectPtr<APawn>& effectedPawn : _effectedPawns) {
		if (effectedPawn.Get() == OtherActor) {
			return;
		}
	}
	ACombatant* combatantActor = Cast<ACombatant>(OtherActor);
	if (!IsValid(combatantActor)) {
		LOGERROR("AAOE::OnOverlapBegin - OtherActor is not a combatant");
		return;
	}
	applyEffect(combatantActor);
}

void AAOE::Tick(float delta) {
	AAttackActor::Tick(delta);
	if (_AOEAttributes->_duration.getFinal() <= 0) {
		if (_consumedDuration >= 0.25) {
			Destroy();
			return;
		}
		if (_consumedDuration > 0)
			_isAfterimage = true;
	}
	else if(_consumedDuration >= _AOEAttributes->_duration.getFinal()) {
		Destroy();
		return;
	}
	_consumedDuration += delta;
}
///////////////////////////////////////////////////////////////////////////////
// Since modifyAttributes sets _final = _base, it's actually set twice, which is dodgy but fine
void AOEAttributes::modifyAttributes(const CombatantAttributes* attr) {
	if (attr != nullptr)
		_radius.modify(_radius._base * attr->_projectileSize.getFinal());
}
///////////////////////////////////////////////////////////////////////////////

void AOEFactory::launchAttack(const FVector& forward) {
	AAOE* newAttack = nullptr;
	if (!unrealHelpers::spawnActorOnTopOfMeDeferred<AAOE>(_owner.Get(), newAttack)){
		LOGERROR("AAOEFactory::launchAttack - failed to spawn AAOE");
		return;
	}
	{
		AOEInitStruct temp = getAOEInit();
		newAttack->initialise_AAOE(temp);
	}
	unrealHelpers::finishDeferredSpawn<AAOE>(_owner.Get(), newAttack);
}

AOEFactory::AOEFactory(
	ACombatant* owner,
	const UAttackConfig* attackConfig,
	const UAttackAttributeData* attackAttributes,
	const UAOEConfig* AOEConfig,
	const UAOEAttributeData* AOEAttributesParam
) :
	AttackFactory(owner, attackConfig, attackAttributes),
	_AOEConfig(AOEConfig),
	_AOEAttributes(owner, AOEAttributesParam)
{
	if (!IsValid(_AOEConfig.Get())) {
		LOGERROR("AOEFactory::AOEFactory - invalid AOEConfig");
		return;
	}
}

void  AOEFactory::tick(float delta) {
	const CombatantAttributes& temp = _owner->getAttributes();
	_AOEAttributes.tick(delta, getStatusEffects(), &temp);
	AttackFactory::tick(delta);
}
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//AOEAttributes& AOEAttributes::operator=(const AOEAttributes& other) {
//	if (this == &other)
//		return *this;
//	BaseAttributes::operator=(other);
//	_radius = other._radius;
//	_duration = other._duration;
//	return *this;
//}
//AOEAttributes& AOEAttributes::operator=(AOEAttributes&& other) {
//	if (this == &other)
//		return *this;
//	BaseAttributes::operator=(std::move(other));
//	_radius = std::move(other._radius);
//	_duration = std::move(other._duration);
//	return *this;
//}
///////////////////////////////////////////////////////////////////////////////
AOEFactory::AOEFactory(AOEFactory&& other) :
	AttackFactory(std::move(other)),
	_AOEConfig(other._AOEConfig),
	_AOEAttributes(std::move(other._AOEAttributes))
{
	//other._AOEConfig = nullptr;
}
//AOEFactory& AOEFactory::operator=(AOEFactory&& other) {
//	if (this == &other)
//		return *this;
//	AttackFactory::operator=(std::move(other));
//	_AOEConfig = other._AOEConfig;
//	_AOEAttributes = std::move(other._AOEAttributes);
//	other._AOEConfig = nullptr;
//	return *this;
//}

std::unique_ptr<AttackFactory> UAOETemplate::createFactory(ACombatant* owner) const {
	const UAOETemplate* temp = unrealHelpers::getDynamicTemplate<UAOETemplate>(this, this);
	if (!IsValid(temp)) {
		LOGERROR("UAOEFactory::createFactory - failed to get template");
		return nullptr;
	}
	return std::make_unique<AOEFactory>(
		owner,
		temp->_attackConfig,
		temp->_attackAttributes,
		temp->_AOEConfig,
		temp->_AOEAttributes
	);
}

void UAOEConfig::replaceOverrides() {
	if (unrealHelpers::isInvalidData(static_cast<uint8>(_shape)))
		_shape = defaults::_shape;
}

void UAOEAttributeData::replaceOverrides() {
	if (helpers::isInvalidData(_radius))
		_radius = defaults::_radius;
	if (helpers::isInvalidData(_duration))
		_duration = defaults::_duration;
}