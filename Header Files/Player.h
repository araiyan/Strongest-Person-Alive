#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include <random>
#include <time.h>

enum ArmorType {LIGHT = 2, MEDIUM = 4, HEAVY = 6};

class Player : public Character
{
private:
    int hiddenStat, fatigue, armor, level, experience;

public:
    Player(std::string name);

    int getFatigue() const;

    bool changeHp(int hp);
    void changeMaxHp(int maxHp);
    void changeStrength(int strength);
    void changeDexterity(int dexterity);
    void changeFatigue(int fatigue);
    void wearArmor(int armorEquipment);

    bool isFatigued();

    void rest();

    void levelUp();
};

#endif