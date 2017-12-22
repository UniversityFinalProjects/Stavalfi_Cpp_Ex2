#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <FileConfigurationReader.h>
#include <GameController.h>
#include <Map.h>
#include <GameInitializer.h>
#include <FileReporter.h>


TEST(FizzBuzzTest, shouldReturn1for1) {
    remove("../report.txt");

    // initialize configuration file reader object
    FileConfigurationReader fileConfigurationReader("../init.txt", "../player.txt");
    // initialize report object
    std::shared_ptr<Reporter> fileReporter = std::make_shared<FileReporter>("../report.txt");

    std::shared_ptr<const GameController> gameController = GameInitializer::getInstance()
            .initializeGame<Map>(fileConfigurationReader, fileReporter);

    gameController->start();
}