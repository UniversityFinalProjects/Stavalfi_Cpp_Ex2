#ifndef STAVALFI_CPP_EX2_COLLECTING_ITEM_STRATEGY_H
#define STAVALFI_CPP_EX2_COLLECTING_ITEM_STRATEGY_H


#include "Warrior.h"
#include "Healer.h"
#include "SoldierStrategy.h"

class ChoosingWeaponStrategy : public SoldierStrategy {
public:

    explicit ChoosingWeaponStrategy(const std::shared_ptr<const MapReader> &mapReader);

    virtual std::shared_ptr<Weapon> chooseWeapon(const Warrior &warrior) const = 0;

    virtual ~ChoosingWeaponStrategy() = 0;
};

#endif //STAVALFI_CPP_EX2_COLLECTING_ITEM_STRATEGY_H
