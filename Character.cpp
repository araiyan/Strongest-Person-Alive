#include "Header Files/Character.h"

Character::Character()
{
    hp = maxHp = 10;
    strength = dexterity = 1;
    this->name = "Unknown";
}

Character::Character(std::string name, int maxHp, int strength, int dexterity)
{
    hp = this->maxHp = maxHp;
    this->strength = strength;
    this->dexterity = dexterity;
    this->name = name;
}

int Character::getHp() const
{
    return hp;
}

int Character::getMaxHp() const
{
    return maxHp;
}

int Character::getStrength() const
{
    return strength;
}

int Character::getDexterity() const
{
    return dexterity;
}

bool Character::changeHp(int damage)
{
    hp -= damage;
    if (hp < 0)
        return DEAD;
    return ALIVE;
}



