#include "DefaultAttackingStrategy.h"

DefaultAttackingStrategy::DefaultAttackingStrategy(const std::shared_ptr<const MapReader> &mapReader)
        : AttackingStrategy(mapReader) {}

std::shared_ptr<Soldier> DefaultAttackingStrategy::chooseEnemyToAttack(const Warrior &warrior) {
    return this->getMapReader()->getSoldier(0, 1);
}

std::shared_ptr<Soldier> DefaultAttackingStrategy::chooseEnemyToAttack(const Healer &healer) {
    return this->getMapReader()->getSoldier(0, 1);
}
