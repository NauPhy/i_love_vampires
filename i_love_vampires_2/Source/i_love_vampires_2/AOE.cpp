#include "AOE.h"
#include "Definitions.h"
#include "Kismet/KismetMathLibrary.h"

#include "Components/ShapeComponent.h"
#include "Components/SphereComponent.h"
#include "Combatant.h"
#include "unrealHelpers.h"
#include "helpers.h"
///////////////////////////////////////////////////////////////////////////////
// AAOE
void AAOE::initialise_AAOE(const AOEInitStruct& temp) 
{
	AAttackActor::initialise_AAttackActor(temp._attack);
	_AOEConfig = temp._AOEConfig;
	_AOEAttributes = std::make_unique<AOEAttributes>(temp._AOEAttributes);
	_initialisedWithDelay = temp._delayFullConstruction;
	unrealHelpers::lookAtDirection(this, temp._arcShape_forwardVector);
	if (temp._delayFullConstruction) {
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);
		SetActorTickEnabled(false);
	}
}

void AAOE::BeginPlay() {
	Super::BeginPlay();
	if (!IsValid(_AOEConfig.Get()) || _AOEAttributes.get() == nullptr || !IsValid(RootComponent)) {
		LOGERROR("AAOE::BeginPlay - invalid parameters");
		return;
	}
	if (!_initialisedWithDelay) {
		initShape();
		SetActorTickEnabled(true);
	}
}

void AAOE::completeDelayedConstruction() {
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorTickEnabled(true);
	_initialisedWithDelay = false;
	initShape();
}

void AAOE::Tick(float delta) {
	if (_AOEConfig->_shape == _ARC) {
		reorientSlash();
	}
	if (_AOEAttributes->_duration.getFinal() <= 0) {
		if (_consumedDuration >= 0.25) {
			Destroy();
			return;
		}
		if (_consumedDuration > 0)
			_isAfterimage = true;
	}
	else if (_consumedDuration >= _AOEAttributes->_duration.getFinal()) {
		Destroy();
		return;
	}
	_consumedDuration += delta;
	AAttackActor::Tick(delta);
}

void AAOE::initShape() {
	const FVector currentScale = GetActorScale3D();
	if (_AOEConfig->_shape == _CIRCLE || _AOEConfig->_shape == _ARC) {
		_collider = NewObject<USphereComponent>(this);
		const float radius = _attackAttributes->_radius.getFinal() * _SPRITE_RADIUS;
		Cast<USphereComponent>(_collider)->InitSphereRadius(radius);
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
	if (_AOEConfig->_shape == _ARC) {
		const FVector forward = GetActorForwardVector();
		const float angle = unrealHelpers::getAngleBetweenVectors(forward, OtherActor->GetActorLocation() - GetActorLocation());
		if (angle > _AOEAttributes->_arcShape_angle.getFinal() / 2)
			return;
	}
	ACombatant* combatantActor = Cast<ACombatant>(OtherActor);
	if (!IsValid(combatantActor)) {
		LOGERROR("AAOE::OnOverlapBegin - OtherActor is not a combatant");
		return;
	}
	applyEffect(combatantActor);
}

// For now, slash attacks just have a single instantaneous hitbox, so moving the slash is just cosmetic, unless it's on the very first frame, in which case
// the hitbox isn't active when the slash is moved.
void AAOE::reorientSlash() {
	if (!_pawnRef.IsValid())
		return;
	const FVector newLocation = _pawnRef->GetActorLocation();
	FHitResult* unused = nullptr;
	SetActorLocation(newLocation, false, unused, ETeleportType::TeleportPhysics);
	const FVector& newForward = _pawnRef->myGetForwardVector();
	const FRotator rotation = UKismetMathLibrary::FindLookAtRotation(FVector(0, 0, 0), FVector(newForward.X, 0, newForward.Z));

	SetActorRotation(rotation, ETeleportType::TeleportPhysics);
}
///////////////////////////////////////////////////////////////////////////////
// AOEFactory
AOEFactory::AOEFactory(ACombatant* owner, const UAOETemplate* myTemplate) :
	AttackFactory(owner, myTemplate)
{
	if (
		!IsValid(_AOEConfig.Get()) || 
		!IsValid(myTemplate->_AOEConfig) || 
		_levels.Num() == 0 || 
		getLevel() < 0 || 
		getLevel() > _levels.Num() - 1 || 
		!IsValid(_levels[getLevel()])
		) 
	{
		LOGERROR("AOEFactory::AOEFactory - invalid parameter");
		return;
	}
	_AOEConfig = myTemplate->_AOEConfig;
	const auto casted = Cast<UAOELevel>(_levels[getLevel()]);
	if (!IsValid(casted)) {
		LOGERROR("AOEFactory::AOEFactory - attempted to initialize with incompatible level");
		return;
	}
	auto temp = std::make_shared<AOEAttributes>(casted->_AOEOffsets, owner->getAttributes());
	_AOEAttributes = std::make_unique<BaseAttributeWrapper<AOEAttributes>>(owner, temp);
}

AOEFactory::AOEFactory(AOEFactory&& other) :
	AttackFactory(std::move(other)),
	_AOEConfig(other._AOEConfig),
	_AOEAttributes(std::move(other._AOEAttributes))
{
	other._AOEAttributes = nullptr;
}

void AOEFactory::finishUpgrade(const UAttackLevel* newLevel) {
	AttackFactory::finishUpgrade(newLevel);
	const auto casted = Cast<UAOELevel>(newLevel);
	if (!IsValid(casted)) {
		LOGERROR("AOEFactory::finishUpgrade - newLevel is not a UAOELevel");
		return;
	}
	_AOEAttributes->changeBaseValues<UAOEAttributeData>(casted->_AOEOffsets.Get());
}

void AOEFactory::tick(float delta) {
	if (!_AOEAttributes) {
		LOGERROR("AOEFactory::tick - AOEAttributes not initialized");
		return;
	}
	_AOEAttributes->tick(delta, getStatusEffects());
	AttackFactory::tick(delta);
}

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

	FVector newLocation(0, -1, 0);
	if (_AOEConfig->_targeting == _INSTIGATOR)
		return;
	else if (_AOEConfig->_targeting == _RANDOM) {
		const float orthoWidth = unrealHelpers::getOrthoWidth(_owner.Get());
		float X = FMath::FRandRange(-orthoWidth, orthoWidth);
		float Z = FMath::FRandRange(-orthoWidth/DEFAULT_SCREEN_RATIO, orthoWidth/DEFAULT_SCREEN_RATIO);
		newLocation = FVector(X, 0, Z);
	}
	if (helpers::nearEq(newLocation.Y, 0)) {
		newAttack->SetActorLocation(newLocation, false, nullptr, ETeleportType::TeleportPhysics);
	}
}

AOEInitStruct AOEFactory::getAOEInit() const {
	AOEAttributes temp(*(_AOEAttributes->getCore()));
	temp.discretizeFull();
	//Owner is guaranteed to be valid
	FVector forward = _owner->myGetForwardVector();
	AOEInitStruct ret(AttackFactory::getAttackInit(), _AOEConfig.Get(), temp, false, forward);
	return ret;
}
///////////////////////////////////////////////////////////////////////////////
// UAOEAttributeData
//void UAOEAttributeData::replaceOverrides() {
//	if (helpers::isInvalidData(_duration))
//		_duration = _defaults._duration;
//}
void UAOEAttributeData::replaceOverrides() {
	for (const auto& [memberPtr, defaultVal] : DefaultProxy<UAOEAttributeData>::get()) {
		BASEATTRIBUTES_OVERRIDE(memberPtr, defaultVal);
	}
}
///////////////////////////////////////////////////////////////////////////////
// UAOEAttributes
AOEAttributes::AOEAttributes(const AOEAttributes& other) : 
	BaseAttributes(other),  
	//_duration(other._duration), 
	//_arcShape_angle(other._arcShape_angle),
	_attrRef(other._attrRef)
{
	baseInit(other);
}

AOEAttributes::AOEAttributes(AOEAttributes&& other) : 
	BaseAttributes(std::move(other)),
	//_duration(std::move(other._duration)), 
	//_arcShape_angle(std::move(other._arcShape_angle)),
	_attrRef(other._attrRef)
{
	baseInit(other);
	other._attrRef.reset();
}

AOEAttributes::AOEAttributes(const UAOEAttributeData* attr, std::shared_ptr<const CombatantAttributes> attrRef) : 
	BaseAttributes(attr), 
	//_duration(attr->_duration), 
	//_arcShape_angle(attr->_arcShape_angle),
	_attrRef(attrRef)
{
	baseInit(attr);
}

void AOEAttributes::tick(UObject* context, float delta, const TArray<FEffectStruct>& statusEffects) {
	auto temp = _attrRef.lock();
	if (temp.get() == nullptr)
		return;
	softReset();
	modifyAttributes(temp);
	tick_internal(context, delta, statusEffects);
}

void AOEAttributes::modifyAttributes(const std::shared_ptr<const CombatantAttributes>& attr) {
	if (attr.get() == nullptr)
		return;
}
///////////////////////////////////////////////////////////////////////////////
// UAOEConfig
void UAOEConfig::replaceOverrides() {
	if (unrealHelpers::isInvalidData(_shape))
		_shape = _defaults._shape;
}

///////////////////////////////////////////////////////////////////////////////
// UAOETemplate
std::unique_ptr<AttackFactory> UAOETemplate::createFactory(ACombatant* owner) const {
	return std::make_unique<AOEFactory>(owner, this);
}