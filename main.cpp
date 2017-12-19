
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <memory>
#include <fstream>
#include <string.h>
#include <iostream>
#include <cassert>
#include <FileConfigurationReader.h>

using namespace std;

int main(int argc, char *argv[]) {
    FileConfigurationReader fileConfigurationReader("../player.txt");
    ConfigurationReader::MapSize mapSize = fileConfigurationReader.getMapSize();
    std::cout << mapSize.mapWidth << " " << mapSize.mapHigh << std::endl;
    return 0;
//    srand(time(NULL));
//    testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
}