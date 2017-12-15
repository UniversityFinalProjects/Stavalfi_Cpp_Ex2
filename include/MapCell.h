#ifndef STAVALFI_CPP_EX2_MAP_CELL_H
#define STAVALFI_CPP_EX2_MAP_CELL_H

#include "CollectableItem.h"
#include "SolidItem.h"
#include "Soldier.h"
#include "MapModifier.h"
#include "MapReader.h"
#include <list>

class MapCell : public MapModifier, public MapReader {

    const signed int y, x;

    std::list<std::shared_ptr<Soldier>> soldiers;

    // represent a map = 2d matrix.
    std::list<std::shared_ptr<Soldier>> collectableItems;

    // represent a map = 2d matrix.
    std::list<std::shared_ptr<const SolidItem>> solidItems;

public:

    MapCell(signed int y, signed int x);

    void remove(const Soldier &soldier) override;

    void remove(const Weapon &weapon) override;

    void remove(const Armor &armor) override;

    void remove(const SolidItem &solidItem) override;

    bool tryAdd(std::shared_ptr<Soldier> soldier) override;

    bool tryAdd(std::shared_ptr<Weapon> &weapon) override;

    bool tryAdd(std::shared_ptr<Armor> &armor) override;

    bool tryAdd(std::shared_ptr<const SolidItem> &soldier) override;

    std::shared_ptr<Soldier> get(int y, int x) const override;

    std::shared_ptr<Soldier> getSoldier(int y, int x) const override;

    std::shared_ptr<Weapon> getWeapon(int y, int x) const override;

    std::shared_ptr<Weapon> getArmor(int y, int x) const override;

    std::shared_ptr<const SolidItem> getSolidItem(int y, int x) const override;

    const std::list<std::shared_ptr<Soldier>> getEnemiesAround(const Soldier &soldier, int distance) const override;

    const std::list<std::shared_ptr<Soldier>> getAlliesAround(const Soldier &soldier, int distance) const override;

    const std::list<std::shared_ptr<CollectableItem>>
    getWeaponsAround(const Point2d &point2d, int distance) const override;

    const std::list<std::shared_ptr<CollectableItem>>
    getArmorsAround(const Point2d &point2d, int distance) const override;

    const std::list<std::shared_ptr<const SolidItem>>
    getSolidItemsAround(const Point2d &point2d, int distance) const override;
};


#endif //STAVALFI_CPP_EX2_MAP_H
