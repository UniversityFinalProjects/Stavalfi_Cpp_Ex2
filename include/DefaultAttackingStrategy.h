#ifndef STAVALFI_CPP_EX2_DEFAULT_ATTACK_SOLDIER_STRATEGY_H
#define STAVALFI_CPP_EX2_DEFAULT_ATTACK_SOLDIER_STRATEGY_H


#include "MapReader.h"
#include "AttackingStrategy.h"
#include <memory>

class DefaultAttackingStrategy : public AttackingStrategy {
public:
    explicit DefaultAttackingStrategy(const std::shared_ptr<const MapReader> &mapReader);

    std::shared_ptr<Soldier> chooseEnemyToAttack(const Warrior &warrior) override;

    std::shared_ptr<Soldier> chooseEnemyToAttack(const Healer &healer) override;
};


#endif //STAVALFI_CPP_EX2_DEFAULT_ATTACK_SOLDIER_STRATEGY_H
