#include "ConsoleReporter.h"
#include <iostream>

void ConsoleReporter::report(const HumanPlayer &player) const {
    std::cout << "playerType: " << "HumanPlayer" << std::endl;
    reportPlayer(player);
}

void ConsoleReporter::report(const ComputerPlayer &player) const {
    std::cout << "playerType: " << "ComputerPlayer" << std::endl;
    reportPlayer(player);
}

void ConsoleReporter::reportPlayer(const Player &player) const {
    std::cout << "playerId: " << player.getPlayerId() << std::endl;
    std::cout << "soldiers: " << player.getSoldiers().size() << std::endl;

    for (auto &soldier:player.getSoldiers())
        report(*soldier);
}

void ConsoleReporter::report(const Soldier &soldier) const {
    std::cout << "  soldierId: " << soldier.getId() << std::endl;
    std::cout << "  location (x y): " << soldier.getLocation().getX() << " " << soldier.getLocation().getY()
              << std::endl;
    std::cout << "  runningDistance: " << soldier.getRunningDistance() << std::endl;
    std::cout << "  lifePoints: " << soldier.getLifePoints() << std::endl;
    std::cout << "  runningDistanceLifePointsCost: " << soldier.getRunningDistanceLifePointsCost() << std::endl;
    std::cout << "  walkingDistance: " << soldier.getWalkingDistance() << std::endl;
    report(*soldier.getWeapon());
    std::cout << "  armors:" << soldier.getArmors().size() << std::endl;
    for (auto &armor:soldier.getArmors())
        report(*armor);
    if (soldier.getSoldierDirections().isEnabled())
        if (soldier.getSoldierDirections().anyLeft())
            std::cout << "          next pre-defined direction (x y): "
                      << soldier.getSoldierDirections().getCurrent().getX()
                      << " "
                      << soldier.getSoldierDirections().getCurrent().getY() << std::endl;
        else
            std::cout << "          next pre-defined direction (x y): no more" << std::endl;
    for (auto &direction:soldier.getSoldierDirections().getDirections()) {
        std::cout << "      pre-defined direction (x y): " << direction.getX() << " " << direction.getY()
                  << std::endl;
    }
}

void ConsoleReporter::report(const Armor &armor) const {
    std::cout << "      armorId: " << armor.getId() << std::endl;
    std::cout << "      location (x y): " << armor.getLocation().getX() << " "
              << armor.getLocation().getY() << std::endl;
    std::cout << "      armorStrength: " << armor.getArmorStrength() << std::endl;
}

void ConsoleReporter::report(const Weapon &weapon) const {
    std::cout << "  weapon: " << std::endl;
    std::cout << "      weaponId:" << weapon.getId() << std::endl;
    std::cout << "      location (x y): " << weapon.getLocation().getX() << " "
              << weapon.getLocation().getY() << std::endl;
    std::cout << "      weaponStrength: " << weapon.getWeaponStrength() << std::endl;
    std::cout << "      bulletAmountAtOnce: " << weapon.getBulletAmountAtOnce() << std::endl;
}

void ConsoleReporter::report(const SolidItem &solidItem) const {

}

void ConsoleReporter::report(const CurrentGameState &gameState) const {

}
