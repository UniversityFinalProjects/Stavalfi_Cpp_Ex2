#ifndef STAVALFI_CPP_EX2_MAP_READER_H
#define STAVALFI_CPP_EX2_MAP_READER_H


#include "Soldier.h"
#include "SolidItem.h"
#include <memory>

struct MapReader {
    virtual std::shared_ptr<Soldier> getSoldier(int y, int x) const = 0;

    virtual std::shared_ptr<CollectableItem> getCollectableItem(int y, int x) const = 0;

    virtual std::shared_ptr<const SolidItem> getSolidItem(int y, int x) const = 0;

    /**
     * @param soldier
     * @param distance
     * @return all the enemies of this soldier around him.
     */
    virtual const std::list<std::shared_ptr<Soldier>>
    getEnemiesAround(const Soldier &soldier, int distance) const = 0;

    /**
     * @param soldier
     * @param distance
     * @return all the allies of this soldier around him
     * (without this soldier).
     */
    virtual const std::list<std::shared_ptr<Soldier>>
    getAlliesAround(const Soldier &soldier, int distance) const = 0;

    /**
     * @param point2d
     * @param distance
     * @return all collectable items around this location
     * (without including anything from the given location).
     */
    virtual const std::list<std::shared_ptr<CollectableItem>>
    getCollectableItemsAround(const Point2d &point2d, int distance) const = 0;

    /**
     * @param point2d
     * @param distance
     * @return all solid items around this location
     * (without including anything from the given location).
     */
    virtual const std::list<std::shared_ptr<const SolidItem>> getSolidItemsAround(const Point2d &point2d, int distance) const = 0;
};

#endif //STAVALFI_CPP_EX2_MAP_READER_H
