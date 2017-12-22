#ifndef STAVALFI_CPP_EX2_FILE_REPORTER_H
#define STAVALFI_CPP_EX2_FILE_REPORTER_H


#include "Reporter.h"
#include "CurrentGameState.h"

class FileReporter : public Reporter {
    const std::string filePathToReportInto;

    void reportPlayer(const Player &player) const;

public:
    FileReporter(const std::string &filePathToReportInto);

    void report(const CurrentGameState &gameState) const override;

    void report(const HumanPlayer &player) const override;

    void report(const ComputerPlayer &player) const override;

    void report(const Soldier &soldier) const override;

    void report(const Armor &armor) const override;

    void report(const Weapon &weapon) const override;

    void report(const SolidItem &solidItem) const override;

    ~FileReporter() override = default;

    const std::string &getFilePathToReportInto() const;
};


#endif //STAVALFI_CPP_EX2_FILE_REPORTER_H
