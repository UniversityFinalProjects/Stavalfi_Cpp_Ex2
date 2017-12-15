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

    ChoosingArmorStrategy(const MapReader &mapReader);

    virtual const std::shared_ptr<Weapon> chooseArmor(const Warrior &warrior) const = 0;
    virtual const CollectableItem &chooseArmor(const Healer &healer) const = 0;

    virtual ~ChoosingArmorStrategy() = 0;
};


#endif //STAVALFI_CPP_EX2_CHOOSING_ARMOR_STRATEGY_H
