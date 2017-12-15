#ifndef STAVALFI_CPP_EX2_DEFAULT_COLLECTING_ITEM_STRATEGY_H
#define STAVALFI_CPP_EX2_DEFAULT_COLLECTING_ITEM_STRATEGY_H


#include "MapReader.h"
#include "ChoosingWeaponStrategy.h"

class DefaultCollectingItemStrategy : public ChoosingWeaponStrategy {
public:
    DefaultCollectingItemStrategy(const MapReader &mapReader);

    const CollectableItem &chooseArmor(const Warrior &warrior) const override {

    }

    const CollectableItem &chooseArmor(const Healer &healer) const override {

    }

    const CollectableItem &chooseWeapon(const Warrior &warrior) const override {

    }

    const CollectableItem &chooseWeapon(const Healer &healer) const override {

    }
};


#endif //STAVALFI_CPP_EX2_DEFAULT_COLLECTING_ITEM_STRATEGY_H
