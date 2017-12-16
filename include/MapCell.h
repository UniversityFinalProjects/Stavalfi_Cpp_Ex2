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

    std::list<std::shared_ptr<Weapon>> weapons;

    std::list<std::shared_ptr<Armor>> armors;

    std::list<std::shared_ptr<const SolidItem>> solidItems;

    /**
     * @param y
     * @param x
     * @return the address of the
     * std::shared_ptr<Soldier>
     * which contain a soldier in (y,x)
     */
    std::shared_ptr<Soldier> *getSoldier_ptr(double y, double x) const;

    /**
     * @param y
     * @param x
     * @return the address of the
     * std::shared_ptr<Soldier>
     * which contain a soldier in (y,x)
     */
    std::shared_ptr<Weapon> *getWeapon_ptr(double y, double x) const;

    /**
     * @param y
     * @param x
     * @return the address of the
     * std::shared_ptr<Armor>
     * which contain a soldier in (y,x)
     */
    std::shared_ptr<Armor> *getArmor_ptr(double y, double x) const;

    /**
     * @param y
     * @param x
     * @return the address of the
     * std::shared_ptr<const SolidItem>
     * which contain a soldier in (y,x)
     */
    std::shared_ptr<const SolidItem> *getSolidItem_ptr(double y, double x) const;

public:

    MapCell(signed int y, signed int x);

    void remove(const Soldier &soldier) override;

    void remove(const Weapon &weapon) override;

    void remove(const Armor &armor) override;

    bool tryAdd(std::shared_ptr<Soldier> soldier) override;

    bool tryAdd(std::shared_ptr<Weapon> &weapon) override;

    bool tryAdd(std::shared_ptr<Armor> &armor) override;

    bool tryAdd(std::shared_ptr<const SolidItem> &soldier) override;

    bool isFree(double y, double x) const override;

    std::shared_ptr<Soldier> getSoldier(double y, double x) const override;

    std::shared_ptr<Weapon> getWeapon(double y, double x) const override;

    std::shared_ptr<Armor> getArmor(double y, double x) const override;

    std::shared_ptr<const SolidItem> getSolidItem(double y, double x) const override;

    const std::list<std::shared_ptr<Soldier>>
    getEnemiesAround(const Soldier &soldier, double distance) const override;

    const std::list<std::shared_ptr<Soldier>>
    getAlliesAround(const Soldier &soldier, double distance) const override;

    const std::list<std::shared_ptr<Weapon>>
    getWeaponsAround(const Point2d &point2d, double distance) const override;

    const std::list<std::shared_ptr<Armor>>
    getArmorsAround(const Point2d &point2d, double distance) const override;

    const std::list<std::shared_ptr<const SolidItem>>
    getSolidItemsAround(const Point2d &point2d, double distance) const override;
};


#endif //STAVALFI_CPP_EX2_MAP_H
