#include "AOE.h"
#include "Definitions.h"

#include "Components/ShapeComponent.h"
#include "Components/SphereComponent.h"
#include "Combatant.h"
#include "unrealHelpers.h"

void AAOE::initialise_AAOE(AOEInitStruct& temp) 
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
	AAOE* newAttack = unrealHelpers::spawnActorOnTopOfMe<AAOE>(_owner.Get());
	if (!IsValid(newAttack)) {
		LOGERROR("AAOEFactory::launchAttack - failed to spawn AAOE");
		return;
	}
	{
		AOEInitStruct temp = getAOEInit();
		newAttack->initialise_AAOE(temp);
	}
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