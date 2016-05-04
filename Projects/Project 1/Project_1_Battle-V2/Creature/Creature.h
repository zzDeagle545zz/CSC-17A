/* 
 * File:   Creature.h
 * Author: zzDeagle545zz
 *
 * Created on April 29, 2016, 3:43 PM
 */

//Guard Block
#ifndef CREATURE_H
#define CREATURE_H

//System Libraries
//#include <string>
//#include <fstream>

//User Libraries
#include "../Ability/Ability.h"

using namespace std;

class Creature {
private:
    friend class Ability;
//Creature Info
    string name;    //Creature Name
    string type;    //Creature Type
    string element; //Creature Element Name
//Creature Stats
    unsigned short HP,cHP;          //Health
    unsigned short Armor,cArmor;    //Defense Against Physical Damage
    unsigned short Resist,cResist;  //Defense Against Magic Damage
    unsigned short Strgth,cStrgth;  //Physical Damage
    unsigned short Magic,cMagic;    //Elemental Damage
    char Elment;                    //Element Type
    unsigned short Speed,cSpeed;    //Quickness to react and or attack
    unsigned short Enrgy,cEnrgy;    //Amount of Energy to Attack/Abilities
//Creature Abilities
    Ability* Attack;
    Ability* slot1;
    Ability* slot2;
    Ability* slot3;
    Ability* slot4;
public:
    Creature();     //Constructor
    Creature(char[50]);  //Constructor
    ~Creature();    //Destructor
    void rsStat();  //Resets Stats
//Accessor Functions
    unsigned short gtHP() const {return cHP;}   //Get Current Health
    //Get the Health Bar
    unsigned short gtHbar() const {return (1.0f*cHP/HP)*20;}
    unsigned short gtEnrgy() const {return Enrgy;}
//Get Name of Creature
    string gtName() const {return name;}
    //Get Name of Attack Ability
    string gtAA() const {return Attack->name;}
    //Get Name of Ability 1
    string gtA1() const {return slot1->name;}
    //Get Name of Ability 2
    string gtA2() const {return slot2->name;}
    //Get Name of Ability 3
    string gtA3() const {return slot3->name;}
    //Get Name of Ability 4
    string gtA4() const {return slot4->name;}
//Ability Energy Costs
    short gtAAe() const {return Attack->eCost;}
    //Get Name of Ability 1
    short gtA1e() const {return slot1->eCost;}
    //Get Name of Ability 2
    short gtA2e() const {return slot2->eCost;}
    //Get Name of Ability 3
    short gtA3e() const {return slot3->eCost;}
    //Get Name of Ability 4
    short gtA4e() const {return slot4->eCost;}
};
#endif // CREATURE_H 




