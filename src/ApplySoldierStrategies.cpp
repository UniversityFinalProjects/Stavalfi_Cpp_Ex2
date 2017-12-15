#include "ApplySoldierStrategies.h"

void ApplySoldierStrategies::playWithSoldier(Warrior &warrior) {

}

void ApplySoldierStrategies::playWithSoldier(Soldier &soldier) {

}

void ApplySoldierStrategies::playWithSoldier(Healer &healer) {

}

ApplySoldierStrategies::ApplySoldierStrategies(const PlayerGame &playerGame, MapModifier &mapModifier,
                                               const std::shared_ptr<AttackingStrategy> &attackingStrategy,
                                               const std::shared_ptr<CollectingItemStrategy> &collectingItemStrategy,
                                               const std::shared_ptr<HealingStrategy> &healingStrategy,
                                               const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy)
        : playerGame(playerGame), mapModifier(mapModifier), attackingStrategy(attackingStrategy),
          collectingItemStrategy(collectingItemStrategy), healingStrategy(healingStrategy),
          movingSoldierStrategy(movingSoldierStrategy) {}

void ApplySoldierStrategies::setAttackingStrategy(const std::shared_ptr<AttackingStrategy> &attackingStrategy) {
    ApplySoldierStrategies::attackingStrategy = attackingStrategy;
}

void ApplySoldierStrategies::setCollectingItemStrategy(
        const std::shared_ptr<CollectingItemStrategy> &collectingItemStrategy) {
    ApplySoldierStrategies::collectingItemStrategy = collectingItemStrategy;
}

void ApplySoldierStrategies::setHealingStrategy(const std::shared_ptr<HealingStrategy> &healingStrategy) {
    ApplySoldierStrategies::healingStrategy = healingStrategy;
}

void
ApplySoldierStrategies::setMovingSoldierStrategy(const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy) {
    ApplySoldierStrategies::movingSoldierStrategy = movingSoldierStrategy;
}
