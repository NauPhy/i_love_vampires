#include "Combatant.h"
#include <functional>
#include "MyGameplayStatics.h"
#include "PaperFlipbookComponent.h"
#include "Active.h"
#include "StatusEffect.h"
#include "SpriteManager.h"
#include "AssetRefs.h"
#include "Definitions.h"
#include "StatusEffect_Damage.h"
#include "Engine/AssetManager.h"
#include "StatusEffect_Burn.h"
#include "StatusFactory.h"
#include "Kismet/KismetMathLibrary.h"
#include "unrealHelpers.h"


ACombatant::ACombatant()
{
	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	}
	PrimaryActorTick.bCanEverTick = true;
	unrealHelpers::constructFlipbook(this, RootComponent, _combatantFlipbook);
	_combatantFlipbook->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	_combatantFlipbook->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
}

void ACombatant::burnTick() { _attributeSet->burnTick(); }
void ACombatantAttributeSet::burnTick() { 
	for (auto& status : _statusEffects) {
		UStatusEffect_Burn* burnStatus = Cast<UStatusEffect_Burn>(status);
		if (burnStatus != nullptr)
			burnStatus->burnTick();
	}
}

void ACombatant::initialise_ACombatant(const UCombatantTemplate* rawData) {
	if (rawData == nullptr || rawData->_config == nullptr || rawData->_attributes == nullptr) {
		LOGERROR("ACombatant::initialise_ACombatant - invalid parameter");
		return;
	}
	_config = rawData->_config;
	const UCombatantAttributes* attributes = rawData->_attributes;
	// attribute set
	{
		_attributeSet = unrealHelpers::spawnActorOnTopOfMe<ACombatantAttributeSet>(this);
		if (!IsValid(_attributeSet)) {
			LOGERROR("ACombatant::initialise_ACombatant - _attributeSet creation failed");
			return;
		}
		_attributeSet->initialise_ACombatantAttributeSet(this, attributes);
		//callbacks
		std::function <void(float, float)> callback = std::bind(&ACombatant::onCurrentHPChanged, this, std::placeholders::_1, std::placeholders::_2);
		float UCombatantAttributes::* member = &UCombatantAttributes::_currentHP;
		_attributeSet->addCallback<UCombatantComponent, UCombatantAttributes>(member, callback);
	}
	// weapons
	// data used to be of type FPrimaryAssetId
	// It is now of type TSoftObjectPtr<UWeaponTemplate>
	// The code here doesn't need to change tho
	for (const auto& data : _config->_startingWeapons) {
		UActive* active = NewObject<UActive>(this);
		UCombatantComponent* comp = _attributeSet->FindComponentByClass<UCombatantComponent>();
		if (comp == nullptr) {
			LOGERROR("ACombatant::initialise_ACombatant - combatant component not found");
			continue;
		}
		active->initialise_UActive(this, data, comp->getFinal<UCombatantAttributes>());
		_activeAbilities.Add(active);
	}
	unrealHelpers::initFlipbook(this, _config->_sprite, _combatantFlipbook);
	_myForwardVector = GetActorForwardVector();
	_isInitialised = true;
}

//void ACombatant::initialise_ACombatant(const FPrimaryAssetId& id)
//{
//	UAssetManager& assetManager = UAssetManager::Get();
//	UObject* temp = assetManager.GetPrimaryAssetObject(id);
//	if (temp == nullptr) {
//
//		auto handle = assetManager.LoadPrimaryAsset(id);
//		handle->WaitUntilComplete();
//		temp = assetManager.GetPrimaryAssetObject(id);
//	}
//	if (temp == nullptr) {
//		LOGERROR("ACombatant::initialise_ACombatant - asset not found ");
//		return;
//	}
//	UCombatantTemplate* templateData = Cast<UCombatantTemplate>(temp);
//	if (templateData == nullptr) {
//		LOGERROR("ACombatant::initialise_ACombatant - asset is not a UCombatantTemplate");
//		return;
//	}
//	initialise_ACombatant(templateData);
//}
void ACombatant::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}
void ACombatant::onCurrentHPChanged(float oldVal, float newVal)
{
	if (newVal <= 0.0f) {
		Destroy();
	}
}
void ACombatant::Tick(float DeltaTime) {
	if (!_isInitialised)
		return;
	Super::Tick(DeltaTime);
	_attributeSet->tick(DeltaTime);
	for (auto& active : _activeAbilities) {
		active->tick(DeltaTime);
	}

	{
		if (!IsValid(_combatantFlipbook) || !IsValid(_attributeSet)) {
			LOGERROR("ACombatant::Tick - variable not valid");
			return;
		}
		UCombatantAttributes* attr = _attributeSet->getFinal<UCombatantComponent, UCombatantAttributes>();
		if (attr == nullptr)
			return;
		FVector currentScale = GetActorScale3D();
		SetActorScale3D(currentScale * attr->_selfSize);
	}

}
void ACombatant::inflictStatus(UStatusEffect* newStatus) {
	_attributeSet->inflictStatus(newStatus);
}
void ACombatant::inflictStatus(const FEffectStruct& effectStruct) {
	inflictStatus(StatusFactory::createStatusEffect(effectStruct));
}

void ACombatant::lookAtDirection(float X, float Z) {
	const FRotator rotation = UKismetMathLibrary::FindLookAtRotation(FVector(0, 0, 0), FVector(X, 0, Z));
	_myForwardVector = rotation.RotateVector(FVector(1, 0, 0));
	for (auto& tempActive : _activeAbilities) {
		tempActive->setForwardVector(_myForwardVector);
	}
}

void ACombatant::exchangeContactDamage(ACombatant* left, ACombatant* right) {
	UCombatantAttributes* leftAttr = nullptr;
	if (!left->getAttributes(leftAttr))
		return;
	UCombatantAttributes* rightAttr = nullptr;
	if (!right->getAttributes(rightAttr))
		return;
	const float leftThreat = leftAttr->_contactDamage;
	const float rightThreat = rightAttr->_contactDamage;

	UStatusEffect_Damage* leftDamage = NewObject<UStatusEffect_Damage>(left);
	leftDamage->initialise_UStatusEffect_Damage(rightThreat);
	UStatusEffect_Damage* rightDamage = NewObject<UStatusEffect_Damage>(right);
	rightDamage->initialise_UStatusEffect_Damage(leftThreat);

	left->inflictStatus(leftDamage);
	right->inflictStatus(rightDamage);
}

bool ACombatant::getAttributes(UCombatantAttributes*& ret) {
	UCombatantComponent* comp = _attributeSet->getComponent<UCombatantComponent>();
	if (comp == nullptr) {
		LOGERROR("ACombatant::getAttributes - combatant component not found");
		return false;
	}
	ret = comp->getFinal<UCombatantAttributes>();
	if (ret == nullptr)
		return false;
	return true;
}

UCombatantAttributes* UCombatantAttributes::getDiscretizedCopy(UObject* outer) const {
	LOGERROR("I'm not sure if there's ever a reason to call this");
	return DuplicateObject<UCombatantAttributes>(this, outer, FName());
}