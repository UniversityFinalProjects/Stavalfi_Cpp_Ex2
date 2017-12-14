#ifndef STAVALFI_CPP_EX2_COLLECTING_ITEM_STRATEGY_H
#define STAVALFI_CPP_EX2_COLLECTING_ITEM_STRATEGY_H


#include "Warrior.h"
#include "Healer.h"

class MapReader;

class CollectableItem;

class Soldier;


class CollectingItemStrategy {
    const MapReader &map_reader;
protected:
    const MapReader &get_map_reader() const;

public:
    CollectingItemStrategy(const MapReader &mapReader);

    virtual const CollectableItem &chooseItemToCollect(const Warrior &warrior) const = 0;
    virtual const CollectableItem &chooseItemToCollect(const Healer &healer) const = 0;

    virtual ~CollectingItemStrategy() = default;
};


#endif //STAVALFI_CPP_EX2_COLLECTING_ITEM_STRATEGY_H
