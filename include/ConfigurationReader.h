#ifndef STAVALFI_CPP_EX2_CONFIGURATION_READER_H
#define STAVALFI_CPP_EX2_CONFIGURATION_READER_H


#include "Player.h"
#include <string.h>

class ConfigurationReader {

    const std::string fileGameConfigurationLocation;
    const std::string fileSoldierDirectionsLocation;

protected:
    const std::string &getFileGameConfigurationLocation() const;

    const std::string &getFileSoldierDirectionsLocation() const;

public:
    struct MapSize {
        const signed int mapWidth, mapHigh;

        MapSize(int mapWidth, int mapLength);

        const int getMapWidth() const;

        const int getMapHigh() const;
    };

    ConfigurationReader(const std::string &fileGameConfigurationLocation,
                        const std::string &fileSoldierDirectionsLocation);

    virtual MapSize getMapSize() const = 0;

    virtual std::list<std::shared_ptr<Player>> getPlayers(const std::shared_ptr<const MapReader> &map) const = 0;

    virtual std::list<std::shared_ptr<Armor>> getArmorsInMap() const = 0;

    virtual std::list<std::shared_ptr<Weapon>> getWeaponsInMap() const = 0;

    virtual std::list<std::shared_ptr<const SolidItem>> getSolidItemsInMap() const = 0;

    virtual ~ConfigurationReader() = 0;
};


#endif //STAVALFI_CPP_EX2_CONFIGURATION_READER_H
