#include "DefaultChoosingArmorStrategy.h"

DefaultChoosingArmorStrategy::DefaultChoosingArmorStrategy(const std::shared_ptr<const MapReader> &mapReader)
        : ChoosingArmorStrategy(mapReader) {}

DefaultChoosingArmorStrategy::~DefaultChoosingArmorStrategy() {

}

std::shared_ptr<Armor> DefaultChoosingArmorStrategy::chooseArmor(const Warrior &warrior) const {
    return std::shared_ptr<Armor>();
}

std::shared_ptr<Armor> DefaultChoosingArmorStrategy::chooseArmor(const Healer &healer) const {
    return std::shared_ptr<Armor>();
}
