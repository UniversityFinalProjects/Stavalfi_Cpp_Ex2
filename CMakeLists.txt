cmake_minimum_required(VERSION 3.9)
project(stavalfi_cpp_ex2)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)
include_directories(include)

file(GLOB MY_CPP_FILES src/*.cpp)
# add_executable(stavalfi_cpp_ex2 main.cpp tests/test1.cpp src/objects/soldier/Soldier.cpp include/Soldier.h src/objects/soldier/warrior/Warrior.cpp include/Warrior.h src/objects/soldier/healer/Healer.cpp include/Healer.h src/objects/soldier/warrior/RegularWarrior.cpp include/RegularWarrior.h src/objects/soldier/warrior/SniperWarrior.cpp include/SniperWarrior.h src/objects/item/CollectableItem.cpp include/CollectableItem.h src/objects/item/SolidItem.cpp include/SolidItem.h src/objects/item/weapon/Weapon.cpp include/Weapon.h src/objects/item/weapon/LightWeapon.cpp include/LightWeapon.h src/objects/item/weapon/HeavyWeapon.cpp include/HeavyWeapon.h src/objects/item/armor/Armor.cpp include/Armor.h src/objects/item/armor/BodyArmor.cpp include/BodyArmor.h src/objects/item/armor/ShieldArmor.cpp include/ShieldArmor.h src/objects/item/weapon/Missile.cpp include/Missile.h src/objects/item/weapon/M16Rifle.cpp include/M16Rifle.h src/objects/item/weapon/UziRifle.cpp include/UziRifle.h src/Point2d.cpp include/Point2d.h src/objects/MapObject.cpp include/MapObject.h src/objects/soldier/healer/RegularHealer.cpp include/RegularHealer.h src/objects/soldier/SoldierFactory.cpp include/SoldierFactory.h src/objects/item/Item.cpp include/Item.h src/objects/item/ItemFactory.cpp include/ItemFactory.h src/objects/item/solid/RegularSolidItem.cpp include/RegularSolidItem.h src/objects/item/weapon/HealerWeapon.cpp include/HealerWeapon.h src/Map.cpp include/Map.h src/Game.cpp include/Game.h)
add_executable(stavalfi_cpp_ex2 MY_CPP_FILES)
target_link_libraries(stavalfi_cpp_ex2 gtest gtest_main)



######
#
#set(CMAKE_CXX_STANDARD 11)
#add_subdirectory(lib/googletest-master)
#include_directories(lib/googletest-master/googletest/include)
#include_directories(lib/googletest-master/googlemock/include)
#
#
#set(SOURCE_FILES main.cpp src/FizzBuzz.cpp src/FizzBuzz.h Tests/FizzBuzzTest.cpp)
#add_executable(cpluspluskatas ${SOURCE_FILES})
#
#target_link_libraries(cpluspluskatas gtest gtest_main)