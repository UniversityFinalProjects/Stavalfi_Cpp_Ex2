#include "AttackingStrategy.h"

AttackingStrategy::AttackingStrategy(const std::shared_ptr<const MapReader> &mapReader)
        : SoldierStrategy(mapReader) {}

AttackingStrategy::~AttackingStrategy() {

}
