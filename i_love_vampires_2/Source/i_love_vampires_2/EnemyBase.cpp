#include "EnemyBase.h"
#include "CombatantManager.h"
#include "Definitions.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "MyGameplayStatics.h"
#include "ExperienceShard.h"
#include "unrealHelpers.h"
#include "SpriteSorter.h"

AEnemyBase::AEnemyBase() : ACombatant() {};

void AEnemyBase::BeginPlay() {
	Super::BeginPlay();
	UCombatantManager* combatantManager = nullptr;
	if (!MyGameplayStatics::getCombatantManager(this, combatantManager))
		return;
	_registerKey = combatantManager->registerEnemy(this);
	USpriteSorter* sorter = nullptr;
	if (!MyGameplayStatics::getSpriteSorter(this, sorter)) {
		LOGERROR("AMyPlayer::AMyPlayer - failed to get sprite sorter");
		return;
	}
	sorter->sortSprite(this, _combatantFlipbook);
}

void AEnemyBase::onKilled() {
	auto end = [this]() {
		Super::onKilled();
		return;
		};
	UCombatantManager* subsystem = nullptr;
	if (!MyGameplayStatics::getCombatantManager(this, subsystem)) {
		LOGERROR("EnemyBase::onKilled - failed to get combatant manager");
		end();
	}
	subsystem->removeFromRegister(_registerKey);
	AExperienceShard* shard = nullptr;
	if (!unrealHelpers::spawnActorOnTopOfMeDeferred<AExperienceShard>(this, shard)) {
		LOGERROR("EnemyBase::EndPlay - failed to spawn experience shard");
		end();
	}
	shard->initialise_AExperienceShard(_experienceValue);
	if (!unrealHelpers::finishDeferredSpawn<AExperienceShard>(this, shard)) {
		LOGERROR("EnemyBase::EndPlay - failed to finish spawning experience shard");
		end();
	}
	end();
}

void AEnemyBase::persuePlayer(float delta) {
	const FVector direction = getMoveDirection();
	FHitResult* unused = nullptr;
	AddActorWorldOffset(direction * delta * getMoveSpeed(), false, unused, ETeleportType::TeleportPhysics);
}

FVector AEnemyBase::getMoveDirection() const {
	APawn* player = UGameplayStatics::GetPlayerPawn(this, 0);
	if (!IsValid(player)) {
		LOGERROR("AEnemyBase::persuePlayer - player is invalid");
		return FVector(1, 0, 0);
	}
	const FVector diff = player->GetActorLocation() - GetActorLocation();
	return diff.GetSafeNormal();
}

float AEnemyBase::getMoveSpeed() const {
	return _MOVEMENT_SPEED * getAttributeMember(&CombatantAttributes::_movementSpeed);
}

void AEnemyBase::Tick(float delta) {
	persuePlayer(delta);
	ACombatant::Tick(delta);
}