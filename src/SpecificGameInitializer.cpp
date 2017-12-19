#include "SpecificGameInitializer.h"
#include <Game.h>

std::shared_ptr<const GameController>
SpecificGameInitializer::initializeGame(const ConfigurationReader &configurationReader,
                                const std::shared_ptr<const Reporter> &reporter) {

    ConfigurationReader::MapSize mapSize = configurationReader.getMapSize();

    std::list<std::shared_ptr<Player>> players = configurationReader.getPlayers();
    const std::string &beginnerPlayerId = (*players.begin())->getPlayerId();

    return std::shared_ptr<const GameController>(new Game(
            mapSize.getMapHigh(),
            mapSize.getMapWidth(),
            players,
            configurationReader.getArmorsInMap(),
            configurationReader.getWeaponsInMap(),
            configurationReader.getSolidItemsInMap(),
            reporter));
}

SpecificGameInitializer &SpecificGameInitializer::getInstance() {
    static SpecificGameInitializer gameInitializer;
    return gameInitializer;
}
