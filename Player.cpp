#include "Header Files/Player.h"

Player::Player(std::string name)
{
    this->name = name;
    level = strength = dexterity = 1;
    armor = fatigue = experience= 0;
    

    srand((int)time(NULL));

    hiddenStat = rand() % 5 + 1;
}

int Player::getFatigue() const
{
    return fatigue;
}

bool Player::changeHp(int damage)
{
    if ((damage - armor) > 0)
        hp -= (damage - armor);

    if (hp < 0)
        return DEAD;
    return ALIVE;
}

void Player::changeMaxHp(int maxHp)
{
    this->maxHp += maxHp;
}

void Player::changeStrength(int strength)
{
    this->strength += strength;
}

void Player::changeDexterity(int dexterity)
{
    this->dexterity += dexterity;
}

void Player::changeFatigue(int fatigue)
{
    this->fatigue += fatigue;
}

void Player::wearArmor(int armorEquipment)
{
    armor = armorEquipment;
}

bool Player::isFatigued()
{
    if (fatigue > 100)
        return true;
    return false;
}

void Player::rest()
{
    hp = maxHp;
    fatigue = 0;
}

void Player::levelUp()
{
    srand((int)time(NULL));

    strength += rand() % level + 1;
    dexterity += rand() % level + 1;
    maxHp += ((rand() % level) * 2) + 4;
    hp = maxHp;

    fatigue = experience = 0;

    level++;
}