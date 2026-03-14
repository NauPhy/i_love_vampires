#include "Combatant.h"
#include <functional>
#include "MyGameplayStatics.h"
#include "PaperFlipbookComponent.h"
#include "Active.h"
#include "StatusEffect.h"
#include "MyCombatantAttributeSet.h"
#include "SpriteManager.h"
#include "AssetRefs.h"
#include "Definitions.h"
#include "StatusEffect_Damage.h"
#include "Engine/AssetManager.h"


ACombatant::ACombatant()
{
	{
		PrimaryActorTick.bCanEverTick = true;
	}

	//Flipbook init
	{
		_combatantFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("CombatantFlipbook"));
		_combatantFlipbook->SetupAttachment(RootComponent);
		_combatantFlipbook->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
		_combatantFlipbook->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
	}
}

void ACombatant::burnTick() { _attributeSet->burnTick(); }

void ACombatant::initialise_ACombatant() {
	// attribute set
	{
		_attributeSet = NewObject<UMyCombatantAttributeSet>(this);
		_attributeSet->initialise_UMyCombatantAttributeSet(_attributes);
		//callbacks
		std::function <void(CombatantAttribute::MyEnum, float, float)> callback = std::bind(&ACombatant::onCurrentHPChanged, this, std::placeholders::_1, std::placeholders::_2);
		size_t offset = UMyAttributeSet::calculateOffset(_attributes, _attributes->_currentHP);
		_attributeSet->addCallback(offset, callback);
	}
	// weapons
	for (const auto& data : _config._startingWeapons) {
		UActive* active = NewObject<UActive>(this);
		active->initialise_UActive(this, data, _attributes);
		_activeAbilities.Add(active);
	}
	//sprite
	ESprite spriteName = _config->_sprite;
	USpriteManager* spriteManager = nullptr;
	if (!MyGameplayStatics::getSpriteManager(this, spriteManager)) {
		return;
	}
	UPaperFlipbook* tempSprite = nullptr;
	if (!spriteManager->getSprite(spriteName, tempSprite))
		return;
	if (tempSprite == nullptr) {
		LOGERROR("ACombatant::initialise_ACombatant - sprite is null");
		return;
	}
	_combatantFlipbook->SetFlipbook(tempSprite);
	_isInitialised = true;
}

void ACombatant::initialise_ACombatant(const UCombatantTemplate* rawData)
{
	_config = DuplicateObject(rawData->_config, this);
	_attributes = DuplicateObject(rawData->_attributes, this);
	initialise_ACombatant();
}
void ACombatant::initialise_ACombatant(const UCombatantConfig* config, const UCombatantAttributes* attributes)
{
	_config = DuplicateObject(config, this);
	_attributes = DuplicateObject(attributes, this);
	initialise_ACombatant();
}
void ACombatant::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	_attributeSet->clearCallback();
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
}
void ACombatant::inflictStatus(UStatusEffect* newStatus) {
	if (newStatus->getDuration() <= EPSILON) {
		_attributeSet->inflictInstantStatus(newStatus);
	}
	else {
		_attributeSet->inflictStatus(newStatus);
	}
}

void ACombatant::exchangeContactDamage(ACombatant* left, ACombatant* right) {
	const float leftThreat = left->_attributes->_contactDamage;
	const float rightThreat = right->_attributes->_contactDamage;

	UStatusEffect_Damage* leftDamage = NewObject<UStatusEffect_Damage>(this);
	leftDamage->initialise_UStatusEffect_Damage(rightThreat);
	UStatusEffect_Damage* rightDamage = NewObject<UStatusEffect_Damage>(this);
	rightDamage->initialise_UStatusEffect_Damage(leftThreat);

	left->inflictStatus(rightThreat);
	right->inflictStatus(leftThreat);
}