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
void ACombatantAttributeSet::burnTick() { 
	for (auto& status : _statusEffects) {
		UStatusEffect_Burn* burnStatus = Cast<UStatusEffect_Burn>(status);
		if (burnStatus != nullptr)
			burnStatus->burnTick();
	}
}

void ACombatant::initialise_ACombatant(const UCombatantTemplate* rawData) {
	const UCombatantConfig* config = rawData->_config;
	const UCombatantAttributes* attributes = rawData->_attributes;
	// attribute set
	{
		_attributeSet = NewObject<ACombatantAttributeSet>(this);
		_attributeSet->initialise_ACombatantAttributeSet(attributes);
		//callbacks
		std::function <void(float, float)> callback = std::bind(&ACombatant::onCurrentHPChanged, this, std::placeholders::_1, std::placeholders::_2);
		float UCombatantAttributes::* member = &UCombatantAttributes::_currentHP;
		_attributeSet->addCallback<UCombatantComponent, UCombatantAttributes>(member, callback);
	}
	// weapons
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

void ACombatant::initialise_ACombatant(const FPrimaryAssetId& id)
{
	UAssetManager& assetManager = UAssetManager::Get();
	UObject* temp = assetManager.GetPrimaryAssetObject(id);
	if (temp == nullptr) {

		auto handle = assetManager.LoadPrimaryAsset(id);
		handle->WaitUntilComplete();
		temp = assetManager.GetPrimaryAssetObject(id);
	}
	if (temp == nullptr) {
		LOGERROR("ACombatant::initialise_ACombatant - asset not found ");
		return;
	}
	UCombatantTemplate* templateData = Cast<UCombatantTemplate>(temp);
	if (templateData == nullptr) {
		LOGERROR("ACombatant::initialise_ACombatant - asset is not a UCombatantTemplate");
		return;
	}
	initialise_ACombatant(templateData);
}
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
}
void ACombatant::inflictStatus(UStatusEffect* newStatus) {
	_attributeSet->inflictStatus(newStatus);
}
void ACombatant::inflictStatus(const FEffectStruct& effectStruct) {
	inflictStatus(StatusFactory::createStatusEffect(effectStruct));
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