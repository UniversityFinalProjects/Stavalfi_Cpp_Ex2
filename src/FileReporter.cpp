#include "FileReporter.h"
#include <fstream>

FileReporter::FileReporter(const std::string &filePathToReportInto)
        : filePathToReportInto(filePathToReportInto) {}

void FileReporter::report(const CurrentGameState &gameState) const {
    std::ofstream writer;
    writer.open(this->getFilePathToReportInto(), std::ios::app);


    writer.close();
}

void FileReporter::report(const HumanPlayer &player) const {
    std::ofstream writer;
    writer.open(this->getFilePathToReportInto(), std::ios::app);

    writer << "playerType: " << "HumanPlayer" << std::endl;
    reportPlayer(player);

    writer.close();
}

void FileReporter::report(const ComputerPlayer &player) const {
    std::ofstream writer;
    writer.open(this->getFilePathToReportInto(), std::ios::app);

    writer << "playerType: " << "ComputerPlayer" << std::endl;
    reportPlayer(player);

    writer.close();
}

void FileReporter::reportPlayer(const Player &player) const {
    std::ofstream writer;
    writer.open(this->getFilePathToReportInto(), std::ios::app);

    writer << "playerId: " << player.getPlayerId() << std::endl;
    writer << "soldiers: " << player.getSoldiers().size() << std::endl;

    for (auto &soldier:player.getSoldiers())
        report(*soldier);

    writer.close();

    writer.close();
}

void FileReporter::report(const Soldier &soldier) const {
    std::ofstream writer;
    writer.open(this->getFilePathToReportInto(), std::ios::app);

    writer << "  soldierId: " << soldier.getId() << std::endl;
    writer << "  location (x y): " << soldier.getLocation().getX() << " " << soldier.getLocation().getY()
           << std::endl;
    writer << "  runningDistance: " << soldier.getRunningDistance() << std::endl;
    writer << "  currentDirection (x y): " << soldier.getPreDefinedCurrentDirection()->getX() << " "
           << soldier.getPreDefinedCurrentDirection()->getY() << std::endl;
    writer << "  lifePoints: " << soldier.getLifePoints() << std::endl;
    writer << "  runningDistanceLifePointsCost: " << soldier.getRunningDistanceLifePointsCost() << std::endl;
    writer << "  walkingDistance: " << soldier.getWalkingDistance() << std::endl;
    report(*soldier.getWeapon());
    writer << "  armors:" << soldier.getArmors().size() << std::endl;
    for (auto &armor:soldier.getArmors())
        report(*armor);
    writer << "  pre-defined directions:" << soldier.getPreDefinedDirections().size() << std::endl;
    for (auto &direction:soldier.getPreDefinedDirections()) {
        writer << "      pre-defined direction (x y): " << direction.getX() << " " << direction.getY()
               << std::endl;
    }

    writer.close();
}

void FileReporter::report(const Armor &armor) const {
    std::ofstream writer;
    writer.open(this->getFilePathToReportInto(), std::ios::app);

    writer << "      armorId: " << armor.getId() << std::endl;
    writer << "      location (x y): " << armor.getLocation().getX() << " "
           << armor.getLocation().getY() << std::endl;
    writer << "      armorStrength: " << armor.getArmorStrength() << std::endl;

    writer.close();
}

void FileReporter::report(const Weapon &weapon) const {
    std::ofstream writer;
    writer.open(this->getFilePathToReportInto(), std::ios::app);

    writer << "  weapon: " << std::endl;
    writer << "      weaponId:" << weapon.getId() << std::endl;
    writer << "      location (x y): " << weapon.getLocation().getX() << " "
           << weapon.getLocation().getY() << std::endl;
    writer << "      weaponStrength: " << weapon.getWeaponStrength() << std::endl;
    writer << "      bulletAmountAtOnce: " << weapon.getBulletAmountAtOnce() << std::endl;

    writer.close();
}

void FileReporter::report(const SolidItem &solidItem) const {
    std::ofstream writer;
    writer.open(this->getFilePathToReportInto(), std::ios::app);


    writer.close();
}

const std::string &FileReporter::getFilePathToReportInto() const {
    return filePathToReportInto;
}
