#ifndef STAVALFI_CPP_EX2_MAP_MODIFIER_H
#define STAVALFI_CPP_EX2_MAP_MODIFIER_H

#include "Soldier.h"
#include "CollectableItem.h"
#include "SolidItem.h"

class MapModifier {
public:
    virtual void remove(const Soldier &soldier) = 0;

    virtual void remove(const Weapon &weapon) = 0;

    virtual void remove(const Armor &armor) = 0;

    virtual void remove(const SolidItem &solidItem) = 0;

    virtual bool tryAdd(std::shared_ptr<Soldier> soldier) = 0;

    virtual bool tryAdd(std::shared_ptr<Weapon> &weapon) = 0;

    virtual bool tryAdd(std::shared_ptr<Armor> &armor) = 0;

    virtual bool tryAdd(std::shared_ptr<const SolidItem> &soldier) = 0;

    virtual ~MapModifier() = 0;
};

#endif //STAVALFI_CPP_EX2_MODIFY_MAP_CELL_H
