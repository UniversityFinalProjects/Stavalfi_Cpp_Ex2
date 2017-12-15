#ifndef STAVALFI_CPP_EX2_MAP_MODIFIER_H
#define STAVALFI_CPP_EX2_MAP_MODIFIER_H

#include "Soldier.h"
#include "CollectableItem.h"
#include "SolidItem.h"

class MapModifier {
public:
    virtual void remove(const Soldier &soldier) = 0;

    virtual void remove(const CollectableItem &soldier) = 0;

    virtual void remove(const SolidItem &soldier) = 0;

    virtual bool tryAdd(Soldier &soldier) = 0;

    virtual bool tryAdd(CollectableItem &soldier) = 0;

    virtual bool tryAdd(const SolidItem &soldier) = 0;

    virtual ~MapModifier() = 0;
};

#endif //STAVALFI_CPP_EX2_MODIFY_MAP_CELL_H
