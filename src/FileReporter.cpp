#include "FileReporter.h"
#include <iostream>

FileReporter::FileReporter(const std::string &filePathToReportInto)
        : filePathToReportInto(filePathToReportInto) {}

void FileReporter::report(const CurrentGameState &gameState) const {

}

void FileReporter::reportPlayer(const Player &player) const {

}

void FileReporter::report(const HumanPlayer &player) const {

}

void FileReporter::report(const ComputerPlayer &player) const {

}

void FileReporter::report(const Soldier &soldier) const {

}

void FileReporter::report(const Armor &armor) const {

}

void FileReporter::report(const Weapon &weapon) const {

}

void FileReporter::report(const SolidItem &solidItem) const {

}
