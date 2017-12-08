#ifndef STAVALFI_CPP_EX2_MODIFY_MAP_H
#define STAVALFI_CPP_EX2_MODIFY_MAP_H

#include "Soldier.h"
#include "CollectableItem.h"
#include "SolidItem.h"

struct ModifyMap {
    virtual void removeSoldier(Soldier &soldier) = 0;

    virtual void removeCollectableItem(const CollectableItem &soldier) = 0;

    virtual void removeSolidItem(const SolidItem &soldier) = 0;

    virtual void addSoldier(Soldier &soldier) = 0;

    virtual void addCollectableItem(const CollectableItem &soldier) = 0;

    virtual void addSolidItem(const SolidItem &soldier) = 0;
};

#endif //STAVALFI_CPP_EX2_MODIFYMAPCELL_H
