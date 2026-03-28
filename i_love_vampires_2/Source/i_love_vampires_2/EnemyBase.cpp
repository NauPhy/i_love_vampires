#include "EnemyBase.h"
#include "CombatantManager.h"
#include "Definitions.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "MyGameplayStatics.h"
#include "ExperienceShard.h"
#include "unrealHelpers.h"

AEnemyBase::AEnemyBase() : ACombatant() {};

void AEnemyBase::BeginPlay() {
	Super::BeginPlay();
	UCombatantManager* combatantManager = nullptr;
	if (!MyGameplayStatics::getCombatantManager(this, combatantManager))
		return;
	_registerKey = combatantManager->registerEnemy(this);
}

void AEnemyBase::EndPlay(EEndPlayReason::Type EndPlayReason) {
	auto end = [this, EndPlayReason]() {
		Super::EndPlay(EndPlayReason);
		return;
		};
	UWorld* world = GetWorld();
	if (!world) {
		LOGERROR("EnemyBase::EndPlay - failed to get world");
		end();
	}
	UCombatantManager* subsystem = world->GetSubsystem<UCombatantManager>();
	if (!subsystem) {
		LOGERROR("EnemyBase::EndPlay - failed to get CombatantManager subsystem");
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
	APawn* player = UGameplayStatics::GetPlayerPawn(this, 0);
	if (!IsValid(player)) {
		LOGERROR("AEnemyBase::persuePlayer - player is invalid");
		return;
	}
	const FVector playerPos = player->K2_GetActorLocation();
	const FVector myPos = K2_GetActorLocation();
	const FVector direction = UKismetMathLibrary::Normal(playerPos - myPos, 0.0001);
	{
		FHitResult* unused = nullptr;
		AddActorWorldOffset(direction * delta * _MOVEMENT_SPEED, false, unused, ETeleportType::TeleportPhysics);
	}
}

void AEnemyBase::Tick(float delta) {
	ACombatant::Tick(delta);
	persuePlayer(delta);
}