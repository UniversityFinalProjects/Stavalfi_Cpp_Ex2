#ifndef STAVALFI_CPP_EX2_HEALING_STRATEGY_H
#define STAVALFI_CPP_EX2_HEALING_STRATEGY_H


#include "MapReader.h"
#include "Warrior.h"
#include "Healer.h"
#include "SoldierStrategy.h"

class HealingStrategy : public SoldierStrategy {
public:

    HealingStrategy(const std::shared_ptr<const MapReader> &mapReader);

    virtual std::shared_ptr<Soldier> chooseAllieToHeal(const Healer &healer) = 0;

    virtual ~HealingStrategy() = default;
};


#endif //STAVALFI_CPP_EX2_HEALING_STRATEGY_H
