#ifndef STAVALFI_CPP_EX2_DEFUALTHEALINGSTRATEGY_H
#define STAVALFI_CPP_EX2_DEFUALTHEALINGSTRATEGY_H


#include "HealingStrategy.h"
#include "MapReader.h"
#include "Healer.h"

class DefaultHealingStrategy : public HealingStrategy {
public:
    DefaultHealingStrategy(const MapReader &mapReader);

    Soldier &chooseAllieToHeal(const Warrior &warrior) override {
        return *this->getMapReader().getAlliesAround(warrior, 1).front();
    }

    Soldier &chooseAllieToHeal(const Healer &healer) override {
        return *this->getMapReader().getAlliesAround(healer, 1).front();
    }
};


#endif //STAVALFI_CPP_EX2_DEFUALTHEALINGSTRATEGY_H
