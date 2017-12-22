
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <memory>
#include <fstream>
#include <FileConfigurationReader.h>
#include "Map.h"
#include <iostream>


int main(int argc, char *argv[]) {
    FileConfigurationReader f("init.txt","player.txt");
    FileConfigurationReader::MapSize mapSize=f.getMapSize();
    std::shared_ptr<Map> map(new Map(mapSize.getMapHigh(),mapSize.getMapWidth()));
    std::list<std::shared_ptr<Player>> players = f.getPlayers(map);
    for(auto& player:players)
        std::cout<<player.get()->getPlayerId()<<std::endl;

    return 0;
//    srand(time(NULL));
//    testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
}