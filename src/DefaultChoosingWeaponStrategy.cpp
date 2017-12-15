#include "DefaultChoosingWeaponStrategy.h"

DefaultChoosingWeaponStrategy::DefaultChoosingWeaponStrategy(const std::shared_ptr<const MapReader> &mapReader)
        : ChoosingWeaponStrategy(mapReader) {}


DefaultChoosingWeaponStrategy::~DefaultChoosingWeaponStrategy() {

}

std::shared_ptr<Weapon> DefaultChoosingWeaponStrategy::chooseWeapon(const Warrior &warrior) const {
    return std::shared_ptr<Weapon>();
}
