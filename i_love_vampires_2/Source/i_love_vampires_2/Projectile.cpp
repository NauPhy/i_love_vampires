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
#include <cmath>
#include "EnemyBase.h"

namespace {
	float dist(float x, float y) {
		return std::sqrt(std::pow(x, 2.0) + std::pow(y, 2.0));
	}
	TArray<FVector> getFanDirections(const FVector& tempForward, int projectileCount, float spread) {
		TArray<FVector> ret;
		for (int i = 0; i < projectileCount; i++) {
			if (spread <= EPSILON) {
				ret.Add(tempForward);
				continue;
			}
			float angle = 0;
			if (helpers::nearEq(1, projectileCount)) {
				angle = FMath::FRandRange(-spread / 2.0, spread / 2.0);
			}
			else {
				float proportion = i / static_cast<float>(projectileCount - 1);
				angle = proportion * spread - spread / 2.0;
			}
			FRotator rot = FRotator(angle, 0, 0);
			ret.Add(rot.RotateVector(tempForward));
		}
		return ret;
	}
	// The ineligible target will most likely be an enemy that was bounced off of this frame
	AEnemyBase* getRandomEnemy(UObject* caller, AEnemyBase* ineligibleTarget) {
		UCombatantManager* manager;
		if (!MyGameplayStatics::getCombatantManager(caller, manager)) {
			LOGERROR("ProjectileFactory::getRandomEnemy - failed to get combatant manager");
			return nullptr;
		}
		AEnemyBase* target = manager->getRandomEnemyPtr(ineligibleTarget);
		return target;
	}
	//Gives the direction that a projectile should be fired in to lead a target
	FVector getLeadTargetTrajectory(const AActor* caller, const AEnemyBase* target, float projectileSpeed) {
		if (!IsValid(target) || !IsValid(caller)) {
			LOGERROR("getLeadTargetTrajectory - invalid parameters");
			return FVector(1, 0, 0);
		}
		const FVector targetVelocity = target->getMoveDirection() * target->getMoveSpeed();
		const FVector targetLocation = target->GetActorLocation();
		const FVector myLocation = caller->GetActorLocation();

		const float distanceToTarget = FVector::Dist(myLocation, targetLocation);
		const float timeToTarget = distanceToTarget / projectileSpeed;
		const FVector futureTargetLocation = targetLocation + targetVelocity * timeToTarget;

		return (futureTargetLocation - myLocation).GetSafeNormal();
	}
}

void AProjectile::initialise_AProjectile(const ProjectileInitStruct& temp)
{
	initialise_AAttackActor(temp._attack);
	_projectileConfig = temp._projectileConfig;
	_projectileAttributes = std::make_unique<ProjectileAttributes>(temp._projectileAttributes);
	_directionX = temp._directionX; 
	_directionZ = temp._directionZ; 
}

void AProjectile::BeginPlay() {
	if (!IsValid(_projectileConfig.Get()) || _projectileAttributes.get() == nullptr) {
		LOGERROR("AProjectile::BeginPlay - _projectileConfig is not valid");
		return;
	}
	Super::BeginPlay();
	_distanceTravelled = 0;
	_pierce = _projectileAttributes->_pierce.getFinal();
	_bounce = _projectileAttributes->_bounce.getFinal();
	FVector currentScale = GetActorScale3D();
	SetActorScale3D(currentScale * _projectileAttributes->_radius.getFinal());
}

bool AProjectile::performSweep(const FVector& startPos, const FVector& endPos, TArray<struct FHitResult>& OutHits) {
	FCollisionShape collisionShape;
	if (_projectileConfig->_shape == _CIRCLE) {
		collisionShape = FCollisionShape::MakeSphere(_projectileAttributes->_radius.getFinal()*_SPRITE_RADIUS);
	}
	else {
		LOGERROR("AProjectile::performSweep - shape not implemented");
	}
	//Inefficient
	TArray<const APawn*> tempArr;
	for (const auto& tempPawn : _effectedPawns) {
		if (!tempPawn.IsValid())
			continue;
		tempArr.Add(tempPawn.Get());
	}
	if (_pawnRef.IsValid())
		tempArr.Add(_pawnRef.Get());
	if (!unrealHelpers::performSweepAtPawn(this, startPos, endPos, collisionShape, OutHits, tempArr)) {
		LOGERROR("AProjectile::performSweep - performSweepAtPawn failed");
		return false;
	}
	return true;
	//FCollisionObjectQueryParams params;
	//params.AddObjectTypesToQuery(ECC_Pawn);
	//FCollisionQueryParams params2;
	//params2.AddIgnoredActor(this);
	//if (_pawnRef.IsValid())
	//	params2.AddIgnoredActor(_pawnRef.Get());
	//for (const auto& tempPawn : _effectedPawns) {
	//	if (!tempPawn.IsValid())
	//		continue;
	//	if (tempPawn.Get() != nullptr)
	//		params2.AddIgnoredActor(tempPawn.Get());
	//}
	//UWorld* world = GetWorld();
	//if (!IsValid(world)) {
	//	LOGERROR("AProjectile::performSweep - world is invalid");
	//	return;
	//}
	//if (_projectileConfig->_shape == _CIRCLE) {
	//	world->SweepMultiByObjectType(OutHits, startPos, endPos, FQuat::Identity, params, FCollisionShape::MakeSphere(_projectileAttributes->_radius.getFinal()), params2);
	//}
	//else {
	//	LOGERROR("AProjectile::performSweep - shape not implemented");
	//}
}

bool AProjectile::handleSweepResults(const TArray<struct FHitResult>& hits) {
	for (const FHitResult& hit : hits) {
		AActor* hitActor = hit.GetActor();
		//hitActor is in the middle of construction or destruction
		if (!IsValid(hitActor))
			continue;
		if (_effectedPawns.Contains(hitActor))
			continue;
		ACombatant* combatantActor = Cast<ACombatant>(hitActor);
		if (!IsValid(combatantActor)) {
			LOGERROR("AProjectile::handleSweepResults - hitActor is not a combatant");
			continue;
		}
		applyEffect(combatantActor);
		if (handleBouncePierce(combatantActor))
			return true;
		break;
	}
	return false;
}

// returns true iff bulletDeath was called
bool AProjectile::handleBouncePierce(ACombatant* hitActor) {
	if (_pierce == 0) {
		if (_bounce == 0) {
			bulletDeath();
			return true;
		}
		else {
			// If a bullet hitting a non-enemy has bounce, it will be ignored.
			// you'll need to change this later if you want it to bounce off of trees or something.
			AEnemyBase* casted = Cast<AEnemyBase>(hitActor);
			if (!IsValid(casted)) {
				bulletDeath();
				return true;
			}
			executeBounce(casted);
			_bounce -= 1;
		}
	}
	else {
		_pierce -= 1;
	}
	return false;
}

void AProjectile::executeBounce(AEnemyBase* ineligibleTarget) {
	const AEnemyBase* enemy = getRandomEnemy(this, ineligibleTarget);
	if (!IsValid(enemy))
		return;
	const FVector newDirection = getLeadTargetTrajectory(this, enemy, _projectileAttributes->_speed.getFinal());
	_directionX = newDirection.X;
	_directionZ = newDirection.Z;
	
	int foundIndex = -1;
	for (auto i = 0; i < _effectedPawns.Num(); i++) {
		if (_effectedPawns[i].Get() == enemy) {
			foundIndex = i;
			break;
		}
	}
	if (foundIndex != -1) {
		_effectedPawns.RemoveAt(foundIndex);
	}
}

void AProjectile::Tick(float delta) {
	FRotator currentRotation = GetActorRotation();

	AAttackActor::Tick(delta);
	if (_distanceTravelled >= _projectileAttributes->_range.getFinal()) {
		bulletDeath();
		return;
	}
	FVector start = GetActorLocation();
	FVector end = start + FVector(_directionX, 0, _directionZ) * _projectileAttributes->_speed.getFinal() * delta;
	TArray<struct FHitResult> OutHits;
	if (!performSweep(start, end, OutHits))
		return;
	// returns true iff bulletDeath was called
	if (handleSweepResults(OutHits))
		return;

	FHitResult* throwaway = nullptr;
	AddActorWorldOffset((end - start), false, throwaway, ETeleportType::TeleportPhysics);
	_distanceTravelled += _projectileAttributes->_speed.getFinal() * delta;

	FRotator newRotation = FVector(_directionX, 0, _directionZ).GetSafeNormal().Rotation();
	if (!helpers::nearEq(currentRotation.Pitch, newRotation.Pitch) || !helpers::nearEq(currentRotation.Roll, newRotation.Roll) || !helpers::nearEq(currentRotation.Yaw, newRotation.Yaw))
		SetActorRotation(newRotation, ETeleportType::TeleportPhysics);

	setNewDirection();
}

void AProjectile::setNewDirection() {
	if (_projectileConfig->_isHoming) {
		UCombatantManager* manager;
		if (!MyGameplayStatics::getCombatantManager(this, manager)) {
			LOGERROR("AProjectile::setNewDirection - failed to get combatant manager");
			return;
		}
		_targetEnemy = manager->getNearestEnemyPtr(this);
	}
	if (_targetEnemy.IsValid()) {
		const FVector myLocation = GetActorLocation();
		const FVector targetLocation = _targetEnemy->GetActorLocation();
		const FVector difference = targetLocation - myLocation;
		const FVector norm = difference.GetSafeNormal();
		_directionX = norm.X;
		_directionZ = norm.Z;
	}
}
///////////////////////////////////////////////////////////////////////////////

void ProjectileAttributes::modifyAttributes(const CombatantAttributes* combatantAttributes) {
	if (combatantAttributes == nullptr)
		return;
	_radius.modify(_radius._base * combatantAttributes->_projectileSize.getFinal());
	_speed.modify(_speed._base * combatantAttributes->_projectileSpeed.getFinal() * _PROJECTILE_SPEED);
	_pierce.modify(_pierce._base + combatantAttributes->_bonusPierce.getFinal());
	_bounce.modify(_bounce._base + combatantAttributes->_bonusBounces.getFinal());
	_projectileCount.modify(_projectileCount._base + combatantAttributes->_bonusProjectiles.getFinal());
	_range.modify(_range._base * _PROJECTILE_RANGE);
}
///////////////////////////////////////////////////////////////////////////////

ProjectileFactory::ProjectileFactory(
	ACombatant* pawn,
	const UAttackConfig* attackConfig,
	const UAttackAttributeData* attackAttributes,
	const UProjectileConfig* projectileConfig,
	const UProjectileAttributeData* projectileAttributes) :
	AttackFactory(pawn, attackConfig, attackAttributes), 
	_projectileConfig(projectileConfig), 
	_projectileAttributes(pawn, projectileAttributes)
{
	if (!IsValid(_projectileConfig.Get())) {
		LOGERROR("AProjectileFactory::initialise_AProjectileFactory - invalid projectile config");
		return;
	}
}

void ProjectileFactory::launchAttack(const FVector& forward) {
	const FVector tempForward = getTempForward(forward);
	const TArray<FVector> projectileDirections = getProjectileDirections(tempForward);
	for (const auto& direction : projectileDirections) {
		AProjectile* projectile = launchSingleProjectile(direction);
		//homing or other postinit here
	}
}

FVector ProjectileFactory::getTempForward(const FVector& forwardVector) const {
	EProjectileTargeting target = _projectileConfig->_targeting;
	if (target == _SKILLSHOT)
		return forwardVector;
	else if (target == _RANDOM)
		return getDirection_random();
	else if (target == _RANDOM_ENEMY) {
		return getLeadTargetTrajectory(
			_owner.Get(), 
			getRandomEnemy(_owner.Get(), nullptr),
			_projectileAttributes.getMember(&ProjectileAttributes::_speed)
		);
	}
	else {
		LOGERROR("ProjectileFactory::launchAttack - targeting type not implemented ");
		return FVector(1, 0, 0);
	}
}

FVector ProjectileFactory::getDirection_random() {
	const float angle = FMath::FRandRange(0.0f, 360.0f);
	const FRotator rot = FRotator(angle, 0, 0);
	return rot.RotateVector(FVector(1, 0, 0));
}

TArray<FVector> ProjectileFactory::getProjectileDirections(const FVector& tempForward) {
	const int projectileCount = static_cast<int>(_projectileAttributes.getMemberDiscretized(&ProjectileAttributes::_projectileCount));
	const float spread = _projectileAttributes.getMember(&ProjectileAttributes::_spread);
	EAttackShape type = _projectileConfig->_attackShape;
	
	if (type == _FAN) {
		return getFanDirections(tempForward, projectileCount, spread);
	}
	else {
		LOGERROR("AProjectileFactory::launchAttack - attack shape not implemented");
		return {};
	}
}

AProjectile* ProjectileFactory::launchSingleProjectile(const FVector& direction) {
	_directionX = direction.X;
	_directionZ = direction.Z;
	AProjectile* projectile = nullptr;
	if (!unrealHelpers::spawnActorOnTopOfMeDeferred<AProjectile>(_owner.Get(), projectile)) {
		LOGERROR("AProjectileFactory::projectileLaunchInternal - failed to spawn projectile");
		return nullptr;
	}
	projectile->initialise_AProjectile(getProjectileInit());
	unrealHelpers::finishDeferredSpawn<AProjectile>(_owner.Get(), projectile);
	return projectile;
}

///////////////////////////////////////////////////////////////////////////////
void ProjectileAttributes::applyToAllStats(const std::function<void(Stat&)>& func) {
	func(_spread);
	func(_radius);
	func(_speed);
	func(_range);
	func(_pierce);
	func(_bounce);
	func(_projectileCount);
}
void ProjectileAttributes::discretizeFull() {
	_pierce.discretize();
	_bounce.discretize();
	_projectileCount.discretize();
}
///////////////////////////////////////////////////////////////////////////////
void ProjectileFactory::tick(float delta) {
	const CombatantAttributes& temp = _owner->getAttributes();
	_projectileAttributes.tick(delta, getStatusEffects(), &temp);
	AttackFactory::tick(delta);
}
///////////////////////////////////////////////////////////////////////////////
ProjectileAttributes::ProjectileAttributes(const ProjectileAttributes& other) :
	BaseAttributes(other),
	_spread(other._spread),
	_radius(other._radius),
	_speed(other._speed),
	_range(other._range),
	_pierce(other._pierce),
	_bounce(other._bounce),
	_projectileCount(other._projectileCount)
{
}
ProjectileAttributes::ProjectileAttributes(ProjectileAttributes&& other) :
	BaseAttributes(std::move(other)),
	_spread(std::move(other._spread)),
	_radius(std::move(other._radius)),
	_speed(std::move(other._speed)),
	_range(std::move(other._range)),
	_pierce(std::move(other._pierce)),
	_bounce(std::move(other._bounce)),
	_projectileCount(std::move(other._projectileCount))
{
}

ProjectileAttributes::ProjectileAttributes(const UProjectileAttributeData* attr) :
	BaseAttributes(),
	_spread(attr->_spread),
	_radius(attr->_radius),
	_speed(attr->_speed),
	_range(attr->_range),
	_pierce(attr->_pierce),
	_bounce(attr->_bounce),
	_projectileCount(attr->_projectileCount)
{
}
///////////////////////////////////////////////////////////////////////////////

ProjectileFactory::ProjectileFactory(ProjectileFactory&& other) :
	AttackFactory(std::move(other)),
	_projectileConfig(other._projectileConfig),
	_projectileAttributes(std::move(other._projectileAttributes)),
	_directionX(other._directionX),
	_directionZ(other._directionZ)
{
	//other._projectileConfig = nullptr;
}

std::unique_ptr<AttackFactory> UProjectileTemplate::createFactory(ACombatant* owner) const {
	const UProjectileTemplate* temp = unrealHelpers::getDynamicTemplate<UProjectileTemplate>(owner, this);
	if (!IsValid(temp)) {
		LOGERROR("UAttackTemplate::createFactory - failed to get template");
		return nullptr;
	}
	return std::make_unique<ProjectileFactory>(
		owner,
		temp->_attackConfig,
		temp->_attackAttributes,
		temp->_projectileConfig,
		temp->_projectileAttributes
	);
}

void UProjectileConfig::replaceOverrides() {
	if (unrealHelpers::isInvalidData(_shape))
		_shape = _defaults._shape;
	if (unrealHelpers::isInvalidData(_attackShape))
		_attackShape = _defaults._attackShape;
	if (unrealHelpers::isInvalidData(_targeting))
		_targeting = _defaults._targeting;
}

void UProjectileAttributeData::replaceOverrides() {
	if (helpers::isInvalidData(_spread))
		_spread = _defaults._spread;
	if (helpers::isInvalidData(_radius))
		_radius = _defaults._radius;
	if (helpers::isInvalidData(_speed))
		_speed = _defaults._speed;
	if (helpers::isInvalidData(_range))
		_range = _defaults._range;
	if (helpers::isInvalidData(_pierce))
		_pierce = _defaults._pierce;
	if (helpers::isInvalidData(_bounce))
		_bounce = _defaults._bounce;
	if (helpers::isInvalidData(_projectileCount))
		_projectileCount = _defaults._projectileCount;
}