#include "Projectile.h"
#include "Definitions.h"

#include "Math/Quat.h"
#include "CollisionShape.h"
#include "Engine/HitResult.h"
#include "CombatantManager.h"
#include "Combatant.h"
#include "MyGameplayStatics.h"

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
	initialise_AAttackActor(pawnRef, attackConfig, attackAttributes);
	_projectileConfig = DuplicateObject<UProjectileConfig>(projectileConfig, this);
	_projectileAttributes = DuplicateObject<UProjectileAttributes>(projectileAttributes, this);
	_directionX = directionX; 
	_directionZ = directionZ; 
	_distanceTravelled = 0;

	_pierce = _projectileAttributes->_pierce;
	_bounce = _projectileAttributes->_bounce;
}

void AProjectile::performSweep(const FVector& startPos, const FVector& endPos, TArray<struct FHitResult>& OutHits) {
	FCollisionObjectQueryParams params;
	params.AddObjectTypesToQuery(ECC_Pawn);
	FCollisionQueryParams params2;
	params2.AddIgnoredActor(this);
	if (_pawnRef.Get() != nullptr)
		params2.AddIgnoredActor(_pawnRef.Get());
	for (const auto& tempPawn : _effectedPawns) {
		if (tempPawn.Get() != nullptr)
			params2.AddIgnoredActor(tempPawn.Get());
	}
	UWorld* world = GetWorld();
	if (world == nullptr) {
		LOGERROR("AProjectile::performSweep - world is null");
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
		if (hitActor == nullptr)
			continue;
		ACombatant* combatantActor = Cast<ACombatant>(hitActor);
		if (combatantActor == nullptr) {
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
	FVector end = start + FVector(_directionX, 0, _directionZ) * attr->_speed * delta;
	TArray<struct FHitResult> OutHits;
	performSweep(start, end, OutHits);
	handleSweepResults(OutHits);

	FHitResult* throwaway = nullptr;
	AddActorWorldOffset((end - start), false, throwaway, ETeleportType::TeleportPhysics);
	_distanceTravelled += _projectileAttributes->_speed * delta;
}

void AProjectile::factoryInitQuery(const UAttackFactory* factory) {
	if (!IsVaid(factory)) {
		LOGERROR("AProjectile::factoryInitQuery - factory is not valid");
	}
	factory->initProjectile(this);
}
///////////////////////////////////////////////////////////////////////////////

void UProjectileAttributes::modifyAttributes(const UCombatantAttributes* combatantAttributes, const UProjectileAttributes* baseAttributes, UProjectileAttributes* finalAttributes) {
	const UAttackAttributes* superBase = Cast<UAttackAttributes>(baseAttributes);
	if (superBase == nullptr) {
		LOGERROR("AProjectile::modifyAttributes - baseAttributes is not a UAttackAttributes");
		return;
	}
	UAttackAttributes* superFinal = Cast<UAttackAttributes>(finalAttributes);
	if (superFinal == nullptr) {
		LOGERROR("AProjectile::modifyAttributes - attributes is not a UAttackAttributes");
		return;
	}
	UAttackAttributes::modifyAttributes(combatantAttributes, superBase, superFinal);

	finalAttributes->_radius = baseAttributes->_radius * combatantAttributes->_projectileSize;
	finalAttributes->_speed = baseAttributes->_speed * combatantAttributes->_projectileSpeed;
	finalAttributes->_pierce = baseAttributes->_pierce + combatantAttributes->_bonusPierce;
	finalAttributes->_bounce = baseAttributes->_bounce + combatantAttributes->_bonusBounces;
	finalAttributes->_projectileCount = baseAttributes->_projectileCount + combatantAttributes->_bonusProjectiles;
}
///////////////////////////////////////////////////////////////////////////////
void UProjectileFactory::initialise_UProjectileFactory(
	APawn* pawn,
	const UAttackConfig* attackConfig,
	const UAttackAttributes* attackAttributes,
	const UProjectileConfig* projectileConfig,
	const UProjectileAttributes* projectileAttributes)
{
	initialise_UAttackFactory(pawn, attackConfig, attackAttributes);
	_projectileConfig = DuplicateObject<UProjectileConfig>(projectileConfig, this);
	_projectileComponent = NewObject<UProjectileComponent>(this);
	_projectileComponent->initialise_UProjectileComponent(projectileAttributes);
}

///////////////////////////////////////////////////////////////////////////////

bool UProjectileFactoryTemplate::isValid() const {
	if (!IsValid(_projectileConfig)) {
		LOGERROR("UProjectileFactoryTemplate::isValid - projectileConfig is not valid");
		return false;
	}
	if (!IsValid(_projectileAttributes)) {
		LOGERROR("UProjectileFactoryTemplate::isValid - projectileAttributes is not valid");
		return false;
	}
	return UAttackFactoryTemplate::isValid();
}

UAttackFactory* UProjectileFactoryTemplate::createFactory(APawn* pawn, const UObject* caller) const {
	if (!isValid())
		return nullptr;
	UProjectileFactory* factory = NewObject<UProjectileFactory>(caller);
	factory->initialise_UProjectileFactory(
		pawn, 
		_attackConfig,
		_attackAttributes,
		_projectileConfig,
		_projectileAttributes);
	return factory;
}