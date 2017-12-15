#ifndef STAVALFI_CPP_EX2_SOLDIER_STRATEGY_H
#define STAVALFI_CPP_EX2_SOLDIER_STRATEGY_H


#include "MapReader.h"

class SoldierStrategy {
    const std::shared_ptr<const MapReader> mapReader;
protected:
    const std::shared_ptr<const MapReader> &getMapReader() const;

public:
    SoldierStrategy(const std::shared_ptr<const MapReader> &mapReader);

    virtual ~SoldierStrategy() = 0;
};


#endif //STAVALFI_CPP_EX2_SOLDIER_STRATEGY_H
