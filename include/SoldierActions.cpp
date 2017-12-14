#include "SoldierActions.h"

void SoldierActions::play(Soldier &soldier) {

}

SoldierActions::SoldierActions(MapModifier &mapModifier, const std::shared_ptr<AttackingStrategy> &attackingStrategy,
                               const std::shared_ptr<CollectingItemStrategy> &collectingItemStrategy,
                               const std::shared_ptr<HealingStrategy> &healingStrategy,
                               const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy)
        : mapModifier(mapModifier),
          attackingStrategy(attackingStrategy),
          collectingItemStrategy(collectingItemStrategy),
          healingStrategy(healingStrategy),
          movingSoldierStrategy(movingSoldierStrategy) {}

void SoldierActions::play(Warrior &warrior) {

}

void SoldierActions::play(Healer &healer) {

}

void SoldierActions::setAttackingStrategy(const std::shared_ptr<AttackingStrategy> &attackingStrategy) {
    SoldierActions::attackingStrategy = attackingStrategy;
}

void SoldierActions::setCollectingItemStrategy(const std::shared_ptr<CollectingItemStrategy> &collectingItemStrategy) {
    SoldierActions::collectingItemStrategy = collectingItemStrategy;
}

void SoldierActions::setHealingStrategy(const std::shared_ptr<HealingStrategy> &healingStrategy) {
    SoldierActions::healingStrategy = healingStrategy;
}

void SoldierActions::setMovingSoldierStrategy(const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy) {
    SoldierActions::movingSoldierStrategy = movingSoldierStrategy;
}
