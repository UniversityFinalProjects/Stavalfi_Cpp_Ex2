#ifndef STAVALFI_CPP_EX2_DEFAULT_CHOOSING_ARMOR_STRATEGY_H
#define STAVALFI_CPP_EX2_DEFAULT_CHOOSING_ARMOR_STRATEGY_H


#include "ChoosingArmorStrategy.h"

class DefaultChoosingArmorStrategy : public ChoosingArmorStrategy {
public:

    DefaultChoosingArmorStrategy(const std::shared_ptr<const MapReader> &mapReader);

    std::shared_ptr<Armor> chooseArmor(const Warrior &warrior) const override;

    std::shared_ptr<Armor> chooseArmor(const Healer &healer) const override;

    ~DefaultChoosingArmorStrategy() override;
};


#endif //STAVALFI_CPP_EX2_DEFAULT_CHOOSING_ARMOR_STRATEGY_H
