#ifndef STAVALFI_CPP_EX2_DEFAULT_CHOOSING_WEAPON_STRATEGY_H
#define STAVALFI_CPP_EX2_DEFAULT_CHOOSING_WEAPON_STRATEGY_H


#include "ChoosingWeaponStrategy.h"

class DefaultChoosingWeaponStrategy: public ChoosingWeaponStrategy {
public:
    DefaultChoosingWeaponStrategy(const std::shared_ptr<const MapReader> &mapReader);

    std::shared_ptr<Weapon> chooseWeapon(const Warrior &warrior) const override;

    ~DefaultChoosingWeaponStrategy() override;
};


#endif //STAVALFI_CPP_EX2_DEFAULT_CHOOSING_WEAPON_STRATEGY_H
