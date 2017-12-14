#ifndef STAVALFI_CPP_EX2_DEFAULT_COLLECTING_ITEM_STRATEGY_H
#define STAVALFI_CPP_EX2_DEFAULT_COLLECTING_ITEM_STRATEGY_H


#include "MapReader.h"
#include "CollectingItemStrategy.h"

class DefaultCollectingItemStrategy : public CollectingItemStrategy {
public:
    DefaultCollectingItemStrategy(const MapReader &mapReader);

    const CollectableItem &chooseItemToCollect(const Warrior &warrior) const override {
        return *this->get_map_reader().getCollectableItem(warrior.getLocation().getY(),
                                                          warrior.getLocation().getX());
    }

    const CollectableItem &chooseItemToCollect(const Healer &healer) const override {
        return *this->get_map_reader().getCollectableItem(healer.getLocation().getY(),
                                                          healer.getLocation().getX());
    }

};


#endif //STAVALFI_CPP_EX2_DEFAULT_COLLECTING_ITEM_STRATEGY_H
