#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <memory>
#include <FileConfigurationReader.h>
#include "Map.h"
#include <ConsoleReporter.h>


int main(int argc, char *argv[]) {
    ConsoleReporter consoleReporter;
    FileConfigurationReader f("../init.txt", "../player.txt");
    FileConfigurationReader::MapSize mapSize = f.getMapSize();
    std::shared_ptr<Map> map(new Map(mapSize.getMapHigh(), mapSize.getMapWidth()));
    std::list<std::shared_ptr<Player>> players = f.getPlayers(map);
    for (auto &player:players)
        player->report(consoleReporter);

    return 0;
//    srand(time(NULL));
//    testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
}