#ifndef STAVALFI_CPP_EX2_MAP_H
#define STAVALFI_CPP_EX2_MAP_H

#include "MapCell.h"
#include "MapReaderModifier.h"
#include <vector>

class Map : public MapReaderModifier {
    // why not <MapCell& or * or smart_ptr> - because
    // vector return MapCell& anyway.
    // Also each MapCell object is located in the heap also.
    std::vector<MapCell> map;
    const signed int w, h;

public:
    Map(int w, int h);

    ~Map() override = default;

    // void remove(Soldier &soldier) override;

    void remove(const CollectableItem &soldier) override;

    void remove(const SolidItem &soldier) override;

    bool tryAdd(Soldier &soldier) override;

    bool tryAdd(const CollectableItem &soldier);

    bool tryAdd(const SolidItem &soldier);

    std::shared_ptr<Soldier> getSoldier(int y, int x) const;

    std::shared_ptr<CollectableItem> getCollectableItem(int y, int x) const;

    std::shared_ptr<const SolidItem> getSolidItem(int y, int x) const;

    /**
     * @param soldier
     * @param distance
     * @return all the enemies of this soldier around him.
     */
    const std::list<std::shared_ptr<Soldier >>
    getEnemiesAround(const Soldier &soldier, int distance) const override;

    /**
     * @param soldier
     * @param distance
     * @return all the allies of this soldier around him
     * (without this soldier).
     */
    const std::list<std::shared_ptr<Soldier >>
    getAlliesAround(const Soldier &soldier, int distance) const override;

    /**
     * @param point2d
     * @param distance
     * @return all collectable items around this location
     * (without including anything from the given location).
     */
    const std::list<std::shared_ptr<CollectableItem >>
    getCollectableItemsAround(const Point2d &point2d, int distance) const override;

    /**
     * @param point2d
     * @param distance
     * @return all solid items around this location
     * (without including anything from the given location).
     */
    const std::list<std::shared_ptr<const SolidItem >>
    getSolidItemsAround(const Point2d &point2d, int distance) const override;

};


#endif //STAVALFI_CPP_EX2_MAP_H
