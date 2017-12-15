#include "ApplySoldierStrategies.h"

void ApplySoldierStrategies::playWithSoldier(Warrior &warrior) {

}

void ApplySoldierStrategies::playWithSoldier(Soldier &soldier) {

}

void ApplySoldierStrategies::playWithSoldier(Healer &healer) {

}

void ApplySoldierStrategies::setAttackingStrategy(const std::shared_ptr<AttackingStrategy> &attackingStrategy) {
    ApplySoldierStrategies::attackingStrategy = attackingStrategy;
}

void ApplySoldierStrategies::setChoosingWeaponStrategy(
        const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy) {
    ApplySoldierStrategies::choosingWeaponStrategy = choosingWeaponStrategy;
}

void
ApplySoldierStrategies::setChoosingArmorStrategy(const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy) {
    ApplySoldierStrategies::choosingArmorStrategy = choosingArmorStrategy;
}

void ApplySoldierStrategies::setHealingStrategy(const std::shared_ptr<HealingStrategy> &healingStrategy) {
    ApplySoldierStrategies::healingStrategy = healingStrategy;
}

void
ApplySoldierStrategies::setMovingSoldierStrategy(const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy) {
    ApplySoldierStrategies::movingSoldierStrategy = movingSoldierStrategy;
}

ApplySoldierStrategies::ApplySoldierStrategies(const PlayerGame &playerGame, MapModifier &mapModifier,
                                               const std::shared_ptr<AttackingStrategy> &attackingStrategy,
                                               const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy,
                                               const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy,
                                               const std::shared_ptr<HealingStrategy> &healingStrategy,
                                               const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy)
        : playerGame(playerGame), mapModifier(mapModifier), attackingStrategy(attackingStrategy),
          choosingWeaponStrategy(choosingWeaponStrategy), choosingArmorStrategy(choosingArmorStrategy),
          healingStrategy(healingStrategy), movingSoldierStrategy(movingSoldierStrategy) {}
