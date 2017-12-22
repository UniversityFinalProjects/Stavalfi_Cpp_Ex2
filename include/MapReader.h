#ifndef STAVALFI_CPP_EX2_MAP_READER_H
#define STAVALFI_CPP_EX2_MAP_READER_H

#include "SolidItem.h"
#include "Soldier.h"
#include <memory>
#include <list>

class MapReader {
public:

    virtual signed int getMapHigh() = 0;

    virtual signed int getMapWidth() = 0;

    virtual bool isFree(double y, double x) const = 0;

    virtual std::shared_ptr<Soldier> getSoldier(double y, double x) const = 0;

    virtual std::shared_ptr<Weapon> getWeapon(double y, double x) const = 0;

    virtual std::shared_ptr<Armor> getArmor(double y, double x) const = 0;

    virtual std::shared_ptr<const SolidItem> getSolidItem(double y, double x) const = 0;

    /**
     * @param soldier
     * @param distance
     * @return all the enemies of this soldier around him.
     */
    virtual const std::list<std::shared_ptr<Soldier>>
    getEnemiesAround(const Soldier &soldier, double distance) const = 0;

    /**
     * @param soldier
     * @param distance
     * @return all the allies of this soldier around him
     * (without this soldier).
     */
    virtual const std::list<std::shared_ptr<Soldier>>
    getAlliesAround(const Soldier &soldier, double distance) const = 0;

    /**
     * @param point2d
     * @param distance
     * @return all collectable items around this location
     * (without including anything from the given location).
     */
    virtual const std::list<std::shared_ptr<Weapon>>
    getWeaponsAround(const Point2d &point2d, double distance) const = 0;

    /**
     * @param point2d
     * @param distance
     * @return all collectable items around this location
     * (without including anything from the given location).
     */
    virtual const std::list<std::shared_ptr<Armor>>
    getArmorsAround(const Point2d &point2d, double distance) const = 0;

    /**
     * @param point2d
     * @param distance
     * @return all solid items around this location
     * (without including anything from the given location).
     */
    virtual const std::list<std::shared_ptr<const SolidItem>>
    getSolidItemsAround(const Point2d &point2d, double distance) const = 0;

    virtual bool isLocationInsideThisMap(double y, double x) const = 0;

    virtual bool isLocationInsideThisMap(const Point2d &location) const = 0;

    virtual ~MapReader() = 0;
};

#endif //STAVALFI_CPP_EX2_MAP_READER_H
