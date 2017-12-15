#ifndef STAVALFI_CPP_EX2_CHOOSING_ARMOR_STRATEGY_H
#define STAVALFI_CPP_EX2_CHOOSING_ARMOR_STRATEGY_H


#include <memory>
#include "Weapon.h"
#include "MapReader.h"
#include "Warrior.h"
#include "Healer.h"
#include "SoldierStrategy.h"

class ChoosingArmorStrategy:public SoldierStrategy {
public:

    explicit ChoosingArmorStrategy(const std::shared_ptr<const MapReader> &mapReader);

    virtual std::shared_ptr<Armor> chooseArmor(const Warrior &warrior) const = 0;
    virtual std::shared_ptr<Armor> chooseArmor(const Healer &healer) const = 0;

    virtual ~ChoosingArmorStrategy() = 0;
};


#endif //STAVALFI_CPP_EX2_CHOOSING_ARMOR_STRATEGY_H
