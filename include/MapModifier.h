#ifndef STAVALFI_CPP_EX2_MAP_MODIFIER_H
#define STAVALFI_CPP_EX2_MAP_MODIFIER_H

#include "Soldier.h"
#include "CollectableItem.h"
#include "SolidItem.h"

struct MapModifier {
    virtual void removeSoldier(const Soldier &soldier) = 0;

    virtual void removeCollectableItem(const CollectableItem &soldier) = 0;

    virtual void removeSolidItem(const SolidItem &soldier) = 0;

    virtual void addSoldier(Soldier &soldier) = 0;

    virtual void addCollectableItem(CollectableItem &soldier) = 0;

    virtual void addSolidItem(SolidItem &soldier) = 0;
};

#endif //STAVALFI_CPP_EX2_MODIFY_MAP_CELL_H
