#ifndef STAVALFI_CPP_EX2_CONFIGURATION_READER_H
#define STAVALFI_CPP_EX2_CONFIGURATION_READER_H


#include "Player.h"
#include <string.h>

class ConfigurationReader {

    const std::string fileConfigurationLocation;
public:
    struct MapSize {
        const signed int mapWidth, mapHigh;

        MapSize(int mapWidth, int mapLength);

        const int getMapWidth() const;

        const int getMapHigh() const;
    };

    ConfigurationReader(const std::string &fileConfigurationLocation);

    virtual MapSize getMapSize() const = 0;

    virtual std::list<std::shared_ptr<Player>> getPlayers() const = 0;

    virtual std::list<std::shared_ptr<Armor>> getArmorsInMap() const = 0;

    virtual std::list<std::shared_ptr<Weapon>> getWeaponsInMap() const = 0;

    virtual std::list<std::shared_ptr<const SolidItem>> getSolidItemsInMap() const = 0;

    virtual ~ConfigurationReader() = 0;
};


#endif //STAVALFI_CPP_EX2_CONFIGURATION_READER_H
