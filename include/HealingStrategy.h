#ifndef STAVALFI_CPP_EX2_HEALING_STRATEGY_H
#define STAVALFI_CPP_EX2_HEALING_STRATEGY_H


#include "MapReader.h"

class HealingStrategy {
    const MapReader &mapReader;
protected:
    const MapReader &getMapReader() const;

public:
    HealingStrategy(const MapReader &mapReader);

    virtual Soldier &chooseAllieToHeal(const Warrior &warrior) = 0;
    virtual Soldier &chooseAllieToHeal(const Healer &healer) = 0;
    virtual ~HealingStrategy() = default;
};


#endif //STAVALFI_CPP_EX2_HEALINGSTRATEGY_H
