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

void ACombatant::initialise_ACombatant(const UCombatantConfig* config, const UCombatantAttributes* attributes) {
	// attribute set
	{
		_attributeSet = NewObject<ACombatantAttributeSet>(this);
		_attributeSet->initialise_ACombatantAttributeSet(attributes);
		//callbacks
		std::function <void(CombatantAttribute::MyEnum, float, float)> callback = std::bind(&ACombatant::onCurrentHPChanged, this, std::placeholders::_1, std::placeholders::_2);
		UCombatantAttributes::* member = &UCombatantAttributes::_currentHP;
		_attributeSet->addCallback<UCombatantAttributes>(UCombatantComponent::StaticClass, member, callback);
	}
	// weapons
	for (const auto& data : _config._startingWeapons) {
		UActive* active = NewObject<UActive>(this);
		UCombatantComponent* comp = _attributeSet->FindComponentByClass<UCombatantComponent>();
		if (comp == nullptr) {
			LOGERROR("ACombatant::initialise_ACombatant - combatant component not found");
			continue;
		}
		active->initialise_UActive(this, data, comp->getFinal());
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

void ACombatant::initialise_ACombatant(const FPrimaryAssetId id)
{
	UAssetManager& assetManager = UAssetManager::Get();
	UObject* temp = assetManager.GetPrimaryAssetObject(id);
	if (temp == nullptr) {
		temp = assetManager.LoadPrimaryAsset(id);
	}
	if (temp == nullptr) {
		LOGERROR("ACombatant::initialise_ACombatant - asset not found: " + id.ToString());
		return;
	}
	UCombatantTemplate* templateData = Cast<UCombatantTemplate>(temp);
	if (templateData == nullptr) {
		LOGERROR("ACombatant::initialise_ACombatant - asset is not a UCombatantTemplate: " + id.ToString());
		return;
	}
	initialise_ACombatant(templateData->_config, templateData->_attributes);
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

	UStatusEffect_Damage* leftDamage = NewObject<UStatusEffect_Damage>(this);
	leftDamage->initialise_UStatusEffect_Damage(rightThreat);
	UStatusEffect_Damage* rightDamage = NewObject<UStatusEffect_Damage>(this);
	rightDamage->initialise_UStatusEffect_Damage(leftThreat);

	left->inflictStatus(rightThreat);
	right->inflictStatus(leftThreat);
}

bool ACombatant::getAttributes(UCombatantAttributes*& ret) {
	UCombatantComponent = _attributeSet->FindComponentByClass<UCombatantComponent>();
	if (comp == nullptr) {
		LOGERROR("ACombatant::getAttributes - combatant component not found");
		return false;
	}
	ret = comp->getFinal();
	if (ret == nullptr)
		return false;
	return true;
}