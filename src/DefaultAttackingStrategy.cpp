#include "DefaultAttackingStrategy.h"

DefaultAttackingStrategy::DefaultAttackingStrategy(const std::shared_ptr<const MapReader> &mapReader) : AttackingStrategy(mapReader) {}

std::shared_ptr<Soldier> DefaultAttackingStrategy::chooseEnemyToAttack(const Warrior &warrior) {
    return this->getMapReader()->getAlliesAround(warrior, 1).front();
}

std::shared_ptr<Soldier> DefaultAttackingStrategy::chooseEnemyToAttack(const Healer &healer) {
    return this->getMapReader()->getAlliesAround(healer, 1).front();
}
