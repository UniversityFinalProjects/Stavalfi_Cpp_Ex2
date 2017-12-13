//
// Created by stava on 12/12/2017.
//

#ifndef STAVALFI_CPP_EX2_HEALING_STRATEGY_H
#define STAVALFI_CPP_EX2_HEALING_STRATEGY_H


#include "MapReader.h"

class HealingStrategy {
    const MapReader &mapReader;
protected:
    const MapReader &getMapReader() const;

public:
    HealingStrategy(const MapReader &mapReader);

    virtual Soldier &choose_allie_to_heal(const Soldier &soldier) = 0;

    virtual ~HealingStrategy() = default;
};


#endif //STAVALFI_CPP_EX2_HEALINGSTRATEGY_H
