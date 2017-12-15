#ifndef STAVALFI_CPP_EX2_DEFUALTHEALINGSTRATEGY_H
#define STAVALFI_CPP_EX2_DEFUALTHEALINGSTRATEGY_H


#include "HealingStrategy.h"
#include "MapReader.h"
#include "Healer.h"

class DefaultHealingStrategy : public HealingStrategy {
public:
    explicit DefaultHealingStrategy(const std::shared_ptr<const MapReader> &mapReader);

    std::shared_ptr<Soldier> chooseAllieToHeal(const Healer &healer) override;
};


#endif //STAVALFI_CPP_EX2_DEFUALTHEALINGSTRATEGY_H
