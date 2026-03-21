#include "Projectile.h"
#include "Definitions.h"

#include "Math/Quat.h"
#include "CollisionShape.h"
#include "Engine/HitResult.h"
#include "CombatantManager.h"
#include "Combatant.h"
#include "Engine/World.h"
#include "MyGameplayStatics.h"
#include "helpers.h"
#include "unrealHelpers.h"
#include "PaperFlipbookComponent.h"

namespace {
	float dist(float x, float y) {
		return sqrt(pow(x, 2.0) + pow(y, 2.0));
	}
}

void AProjectile::initialise_AProjectile(
	APawn* pawnRef, 
	float directionX, 
	float directionZ, 
	const UAttackConfig* attackConfig,
	const UAttackAttributes* attackAttributes,
	const UProjectileConfig* projectileConfig, 
	const UProjectileAttributes* projectileAttributes)
{
	if (!IsValid(projectileConfig) || !IsValid(projectileAttributes)) {
		LOGERROR("AProjectile::initialise_AProjectile - invalid projectile config or attributes");
		return;
	}
	initialise_AAttackActor(pawnRef, attackConfig, attackAttributes);
	_projectileConfig = DuplicateObject<UProjectileConfig>(projectileConfig, this);
	_projectileAttributes = DuplicateObject<UProjectileAttributes>(projectileAttributes, this);
	_directionX = directionX; 
	_directionZ = directionZ; 
	_distanceTravelled = 0;

	_pierce = projectileAttributes->_pierce;
	_bounce = projectileAttributes->_bounce;
	FVector currentScale = GetActorScale3D();
	SetActorScale3D(currentScale * _projectileAttributes->_radius);
}

void AProjectile::performSweep(const FVector& startPos, const FVector& endPos, TArray<struct FHitResult>& OutHits) {
	FCollisionObjectQueryParams params;
	params.AddObjectTypesToQuery(ECC_Pawn);
	FCollisionQueryParams params2;
	params2.AddIgnoredActor(this);
	if (_pawnRef.IsValid())
		params2.AddIgnoredActor(_pawnRef.Get());
	for (const auto& tempPawn : _effectedPawns) {
		if (!tempPawn.IsValid())
			continue;
		if (tempPawn.Get() != nullptr)
			params2.AddIgnoredActor(tempPawn.Get());
	}
	UWorld* world = GetWorld();
	if (!IsValid(world)) {
		LOGERROR("AProjectile::performSweep - world is invalid");
		return;
	}
	if (!IsValid(_projectileConfig)) {
		LOGERROR("AProjectile::performSweep - projectileConfig is not valid");
		return;
	}
	if (!IsValid(_projectileAttributes)) {
		LOGERROR("AProjectile::performSweep - projectileAttributes is not valid");
		return;
	}
	if (_projectileConfig->_shape == _CIRCLE) {
		world->SweepMultiByObjectType(OutHits, startPos, endPos, FQuat::Identity, params, FCollisionShape::MakeSphere(_projectileAttributes->_radius), params2);
	}
	else {
		LOGERROR("AProjectile::performSweep - shape not implemented");
	}
}

void AProjectile::handleSweepResults(const TArray<struct FHitResult>& hits) {
	for (const FHitResult& hit : hits) {
		AActor* hitActor = hit.GetActor();
		//hitActor is in the middle of construction or destruction
		if (!IsValid(hitActor))
			continue;
		ACombatant* combatantActor = Cast<ACombatant>(hitActor);
		if (!IsValid(combatantActor)) {
			LOGERROR("AProjectile::handleSweepResults - hitActor is not a combatant");
			continue;
		}
		applyEffect(combatantActor);
		handleBouncePierce();
	}
}

void AProjectile::handleBouncePierce() {
	if (_pierce == 0) {
		if (_bounce == 0) {
			bulletDeath();
			return;
		}
		else {
			executeBounce();
			_bounce -= 1;
		}
	}
	else {
		_pierce -= 1;
	}
}

void AProjectile::executeBounce() {
	UCombatantManager* manager;
	if (!MyGameplayStatics::getCombatantManager(this, manager))
		return;
	// It's possible that combatantManager will return a reference to a combatant that is in the middle of construction or destruction.
	// If this happens 10 times in a row, there is likely a bug.
	TWeakObjectPtr<ACombatant> newTarget = nullptr;
	for (int i = 0; i < 10; i++) {
		if (newTarget.IsValid())
			break;
		if (!manager->getRandomEnemyPtr(newTarget)) {
			bulletDeath();
			return;
		}
	}
	if (!newTarget.IsValid()) {
		LOGERROR("AProjectile::executeBounce - bullet could not find new target to bounce to")
		bulletDeath();
		return;
	}
	FVector myLocation = GetActorLocation();
	FVector targetLocation = newTarget->GetActorLocation();
	FVector difference = targetLocation - myLocation;
	FVector norm = difference / dist(difference.X, difference.Y);
	_directionX = norm.X;
	_directionZ = norm.Y;
}

void AProjectile::Tick(float delta) {
	AAttackActor::Tick(delta);
	if (!IsValid(_projectileAttributes)) {
		LOGERROR("AProjectile::Tick - projectileAttributes is not valid");
		return;
	}
	if (_distanceTravelled >= _projectileAttributes->_range) {
		bulletDeath();
		return;
	}
	FVector start = GetActorLocation();
	FVector end = start + FVector(_directionX, 0, _directionZ) * _projectileAttributes->_speed * delta;
	TArray<struct FHitResult> OutHits;
	performSweep(start, end, OutHits);
	handleSweepResults(OutHits);

	FHitResult* throwaway = nullptr;
	AddActorWorldOffset((end - start), false, throwaway, ETeleportType::TeleportPhysics);
	_distanceTravelled += _projectileAttributes->_speed * delta;
}

void AProjectile::factoryInitQuery(AAttackFactory* factory) {
	if (!IsValid(factory)) {
		LOGERROR("AProjectile::factoryInitQuery - factory is not valid");
	}
	factory->initProjectile(this);
}
///////////////////////////////////////////////////////////////////////////////

void UProjectileAttributes::modifyAttributes(const UCombatantAttributes* combatantAttributes, const UProjectileAttributes* baseAttributes, UProjectileAttributes* finalAttributes) {
	if (!IsValid(combatantAttributes) || !IsValid(baseAttributes) || !IsValid(finalAttributes)) {
		LOGERROR("UProjectileAttributes::modifyAttributes - invalid argument");
		return;
	}
	finalAttributes->_radius = baseAttributes->_radius * combatantAttributes->_projectileSize;
	finalAttributes->_speed = baseAttributes->_speed * combatantAttributes->_projectileSpeed;
	finalAttributes->_pierce = baseAttributes->_pierce + combatantAttributes->_bonusPierce;
	finalAttributes->_bounce = baseAttributes->_bounce + combatantAttributes->_bonusBounces;
	finalAttributes->_projectileCount = baseAttributes->_projectileCount + combatantAttributes->_bonusProjectiles;
}
///////////////////////////////////////////////////////////////////////////////

void UProjectileComponent::modifyAttributes(ABaseAttributeSet* set) {
	if (!IsValid(set)) {
		LOGERROR("UAttackComponent::modifyAttributes - set is not valid");
		return;
	}
	UCombatantAttributes* attr = nullptr;
	if (!set->getModifiers<UCombatantAttributes>(attr))
		return;
	if (!IsValid(_base) || !IsValid(_final)) {
		LOGERROR("UAttackComponent::modifyAttributes - base or final is not valid");
		return;
	}
	UProjectileAttributes* base = Cast<UProjectileAttributes>(_base);
	UProjectileAttributes* final = Cast<UProjectileAttributes>(_final);
	UProjectileAttributes::modifyAttributes(attr, base, final);
}

///////////////////////////////////////////////////////////////////////////////
void AProjectileFactory::initialise_AProjectileFactory(
	APawn* pawn,
	UCombatantAttributes* comb,
	const UAttackConfig* attackConfig,
	const UAttackAttributes* attackAttributes,
	const UProjectileConfig* projectileConfig,
	const UProjectileAttributes* projectileAttributes)
{
	if (!IsValid(projectileConfig) || !IsValid(projectileAttributes)) {
		LOGERROR("AProjectileFactory::initialise_AProjectileFactory - invalid projectile config or attributes");
		return;
	}
	initialise_AAttackFactory(pawn, comb, attackConfig, attackAttributes);
	_projectileConfig = DuplicateObject<UProjectileConfig>(projectileConfig, this);
	_projectileComponent = NewObject<UProjectileComponent>(this);
	_projectileComponent->initialise_UProjectileComponent(projectileAttributes);
}

void AProjectileFactory::launchAttack(const FVector& forward) {
	if (!IsValid(_projectileConfig)) {
		LOGERROR("AProjectileFactory::launchAttack - projectileConfig is not valid");
		return;
	}
	EAttackShape type = _projectileConfig->_attackShape;
	if (type == EAttackShape::fan) {
		launchAttack_fan(forward);
	}
	else {
		LOGERROR("AProjectileFactory::launchAttack - attack shape not implemented");
		return;
	}
}

void AProjectileFactory::initProjectile(AProjectile* projectile) {
	if (
		!IsValid(projectile) ||
		!IsValid(_attackComponent) ||
		!IsValid(_projectileComponent)
		) {
		LOGERROR("AProjectileFactory::initProjectile - variable is not valid");
		return;
	}
	if (!_owner.IsValid())
		return;
	APawn* pawnRef = Cast<APawn>(_owner.Get());
	projectile->initialise_AProjectile(
		pawnRef,
		getDirectionX(),
		getDirectionZ(),
		_attackConfig,
		_attackComponent->getDiscretizedFinal<UAttackAttributes>(this),
		_projectileConfig,
		_projectileComponent->getDiscretizedFinal<UProjectileAttributes>(this));
}

FVector AProjectileFactory::launchAttack_fan_getDirection(const UProjectileAttributes* attributes, const FVector& forward, int projectileIndex) {
	// attributes should already be discretized, but I'm gonna do it again just in case
	UProjectileAttributes* attr = attributes->getDiscretizedCopy(this);
	
	float angle = 0;
	if (helpers::nearEq(1, attr->_projectileCount)) {
		angle = FMath::FRandRange(-attr->_spread / 2.0, attr->_spread / 2.0);
	}
	else {
		float proportion = projectileIndex / (attr->_projectileCount - 1);
		angle = proportion * attr->_spread - attr->_spread / 2.0;
	}
	FRotator rot = FRotator(angle, 0, 0);
	return rot.RotateVector(forward);
}

void AProjectileFactory::launchAttack_fan(const FVector& forward) {
	UProjectileComponent* comp = getComponent<UProjectileComponent>();
	if (!IsValid(comp))
		return;
	UProjectileAttributes* attr = comp->getDiscretizedFinal<UProjectileAttributes>(this);
	if (!IsValid(attr))
		return;
	if (!_owner.IsValid())
		return;
	for (int i = 0; i < static_cast<int>(attr->_projectileCount); i++) {
		FVector direction = launchAttack_fan_getDirection(attr, forward, i);
		_directionX = direction.X;
		_directionZ = direction.Z;

		APawn* pawnRef = Cast<APawn>(_owner.Get());
		AProjectile* projectile = unrealHelpers::spawnActorOnTopOfMe<AProjectile>(pawnRef);
		if (!IsValid(projectile)) {
			LOGERROR("AProjectileFactory::launchAttack_fan - failed to spawn projectile");
			continue;
		}
		projectile->factoryInitQuery(this);
	}
}

///////////////////////////////////////////////////////////////////////////////

AAttackFactory* UProjectileFactoryTemplate::createFactory(APawn* pawn, UCombatantAttributes* comb) const {
	if (!IsValid(pawn)) {
		LOGERROR("UProjectileFactoryTemplate::createFactory - pawn is not valid");
		return nullptr;
	}
	AProjectileFactory* factory = unrealHelpers::spawnActorOnTopOfMe<AProjectileFactory>(pawn);
	if (!IsValid(factory)) {
		LOGERROR("UProjectileFactoryTemplate::createFactory - failed to spawn factory")
		return nullptr;
	}
	factory->initialise_AProjectileFactory(
		pawn, 
		comb,
		_attackConfig,
		_attackAttributes,
		_projectileConfig,
		_projectileAttributes);
	return factory;
}