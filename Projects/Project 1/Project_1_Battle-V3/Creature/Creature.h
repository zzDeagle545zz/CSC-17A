/* 
 * File:   Creature.h
 * Author: zzDeagle545zz
 *
 * Created on April 29, 2016, 3:43 PM
 */

//Guard Block
#ifndef CREATURE_H
#define CREATURE_H

//User Libraries
#include <string>
#include <fstream>
#include "../Ability/Ability.h"

using namespace std;

class Creature {
private:
    enum{GIGATARY,TERADON};
//Creature Info
    string name;        //Creature Name
    string type;        //Creature Type
    string element;     //Creature Element Name
//Creature Stats
    short HP,cHP;          //Health
    short Armor,cArmor;    //Defense Against Physical Damage
    short Resist,cResist;  //Defense Against Magic Damage
    short Strgth,cStrgth;  //Physical Damage
    short Magic,cMagic;    //Elemental Damage
    char Elment;           //Element Type
    short Speed,cSpeed;    //Quickness to react and or attack
    short Enrgy,cEnrgy;    //Amount of Energy to Attack/Abilities

public:
    Creature(int);      //Constructor
    ~Creature();        //Destructor
    virtual void tkDmg()=0;
};

#endif // CREATURE_H 




