#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <memory>
#include <FileConfigurationReader.h>
#include "Map.h"
#include <ConsoleReporter.h>
#include <FileReporter.h>


int main(int argc, char *argv[]) {
    FileReporter fileReporter("../report.txt");
    FileConfigurationReader f("../init.txt", "../player.txt");
    FileConfigurationReader::MapSize mapSize = f.getMapSize();
    std::shared_ptr<Map> map(new Map(mapSize.getMapHigh(), mapSize.getMapWidth()));
    auto weapons = f.getWeaponsInMap();
    for (auto weapon:weapons)
        weapon->report(fileReporter);

    return 0;
//    srand(time(NULL));
//    testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
}