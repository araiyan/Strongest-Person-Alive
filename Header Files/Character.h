#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

#define DEAD true
#define ALIVE false

class Character
{
protected:
    int hp, maxHp, strength, dexterity;
    std::string name;

public:
    Character();
    Character(std::string name, int maxHp, int strength, int dexterity);
    
    int getHp() const;
    int getMaxHp() const;
    int getStrength() const;
    int getDexterity() const;

    virtual bool changeHp(int damage);
    virtual void changeMaxHp(int maxHp) = 0;
    virtual void changeStrength(int strength) = 0;
    virtual void changeDexterity(int dexterity) = 0;
};

#endif 

