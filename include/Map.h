#ifndef STAVALFI_CPP_EX2_MAP_H
#define STAVALFI_CPP_EX2_MAP_H

#include "MapCell.h"
#include "MapReaderModifier.h"
#include <vector>

class Map : public MapReaderModifier {
    // An abstract representation of 2d matrix.
    // Each cell in the matrix is representing
    // a small map from [x,y] to (x+1,y+1).
    std::vector<std::shared_ptr<MapReaderModifier>> map;
    const signed int width, high;

    const std::shared_ptr<MapReaderModifier> &getCellByLocation(double y, double x) const;

    const std::shared_ptr<MapReaderModifier> &getCellByLocation(const Point2d &location) const;

public:
    Map(signed int high, signed int width);

    ~Map() override = default;

    void remove(const Soldier &soldier) override;

    void remove(const Weapon &weapon) override;

    void remove(const Armor &armor) override;

    bool tryAdd(std::shared_ptr<Soldier> soldier) override;

    bool tryAdd(std::shared_ptr<Weapon> &weapon) override;

    bool tryAdd(std::shared_ptr<Armor> &armor) override;

    bool tryAdd(std::shared_ptr<const SolidItem> &solidItem) override;

    bool isFree(double y, double x) const override;

    std::shared_ptr<Soldier> getSoldier(double y, double x) const override;

    std::shared_ptr<Weapon> getWeapon(double y, double x) const override;

    std::shared_ptr<Armor> getArmor(double y, double x) const override;

    std::shared_ptr<const SolidItem> getSolidItem(double y, double x) const override;

    const std::list<std::shared_ptr<Soldier>> getEnemiesAround(const Soldier &soldier, double distance) const override;

    const std::list<std::shared_ptr<Soldier>> getAlliesAround(const Soldier &soldier, double distance) const override;

    const std::list<std::shared_ptr<Weapon>>
    getWeaponsAround(const Point2d &point2d, double distance) const override;

    const std::list<std::shared_ptr<Armor>>
    getArmorsAround(const Point2d &point2d, double distance) const override;

    const std::list<std::shared_ptr<const SolidItem>>
    getSolidItemsAround(const Point2d &point2d, double distance) const override;

    bool isLocationInsideThisMap(double y, double x) const override;

    bool isLocationInsideThisMap(const Point2d &location) const override;

    int getMapHigh() override;

    int getMapWidth() override;
};


#endif //STAVALFI_CPP_EX2_MAP_H
