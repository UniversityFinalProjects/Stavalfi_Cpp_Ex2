#ifndef STAVALFI_CPP_EX2_ITEM_FACTORY_H
#define STAVALFI_CPP_EX2_ITEM_FACTORY_H


#include "Armor.h"
#include "Weapon.h"
#include "SolidItem.h"
#include <memory>

enum ArmorType {
    SHIELD_ARMOR,
    BODY_ARMOR
};

enum WeaponType {
    M16_RIFLE,
    UZI_RIFLE,
    MISSILE,
    HEALER_WEAPON
};
enum SolidItemType {
    REGULAR_SOLID_ITEM
};

class ItemFactory {
public:
    static std::shared_ptr<Armor> create(enum ArmorType armorTypes, const Point2d &location, bool inUsed);

    static std::shared_ptr<Weapon> create(enum WeaponType weaponTypes, const Point2d &location, bool inUsed);

    static std::shared_ptr<const SolidItem> create(enum SolidItemType solidItemTypes, const Point2d &location);
};


#endif //STAVALFI_CPP_EX2_ITEM_FACTORY_H
