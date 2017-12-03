#ifndef STAVALFI_CPP_EX2_ITEM_FACTORY_H
#define STAVALFI_CPP_EX2_ITEM_FACTORY_H


#include "item/armor/Armor.h"
#include "item/weapon/Weapon.h"
#include "item/SolidItem.h"

enum ArmorTypes {
    SHIELD_ARMOR,
    BODY_ARMOR
};

enum WeaponTypes {
    M16_RIFLE,
    UZI_RIFLE,
    MISSILE,
    HEALER_WEAPON
};
enum SolidItemTypes {
    REGULAR_SOLID_ITEM
};

class ItemFactory {
public:
    static Armor *create(enum ArmorTypes armorTypes, const Point2d &location, bool inUsed);

    static Weapon *create(enum WeaponTypes weaponTypes, const Point2d &location, bool inUsed);

    static SolidItem *create(enum SolidItemTypes solidItemTypes, const Point2d &location);
};


#endif //STAVALFI_CPP_EX2_ITEM_FACTORY_H
