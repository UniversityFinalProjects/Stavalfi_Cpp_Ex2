#include "DefaultChoosingArmorStrategy.h"

DefaultChoosingArmorStrategy::DefaultChoosingArmorStrategy(const std::shared_ptr<const MapReader> &mapReader)
        : ChoosingArmorStrategy(mapReader) {}

DefaultChoosingArmorStrategy::~DefaultChoosingArmorStrategy() {

}

std::shared_ptr<Armor> DefaultChoosingArmorStrategy::chooseArmor(const Warrior &warrior) const {
    return this->getMapReader()->getArmor(0, 1);
}

std::shared_ptr<Armor> DefaultChoosingArmorStrategy::chooseArmor(const Healer &healer) const {
    return this->getMapReader()->getArmor(0, 1);
}
