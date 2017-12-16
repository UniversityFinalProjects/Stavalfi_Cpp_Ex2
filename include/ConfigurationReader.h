#ifndef STAVALFI_CPP_EX2_CONFIGURATION_READER_H
#define STAVALFI_CPP_EX2_CONFIGURATION_READER_H


#include "Player.h"
#include <string.h>

class ConfigurationReader {

    const std::string fileConfigurationLocation;
public:
    struct MapSize {
        signed int mapWidth, mapLength;

        MapSize(int mapWidth, int mapLength);
    };

    ConfigurationReader(const std::string &fileConfigurationLocation);

    virtual MapSize getMapSize() = 0;

    virtual std::list<std::shared_ptr<Player>> getPlayers() = 0;

    virtual std::list<std::shared_ptr<Armor>> getArmorsInMap() = 0;

    virtual std::list<std::shared_ptr<Weapon>> getWeaponsInMap() = 0;

    virtual std::list<std::shared_ptr<const SolidItem>> getSolidItemsInMap() = 0;

    virtual ~ConfigurationReader() = 0;
};


#endif //STAVALFI_CPP_EX2_CONFIGURATION_READER_H
