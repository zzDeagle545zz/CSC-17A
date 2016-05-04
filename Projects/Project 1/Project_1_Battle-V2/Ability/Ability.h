/* 
 * File:   Ability.h
 * Author: zzDeagle545zz
 *
 * Created on April 29, 2016, 3:46 PM
 */

#ifndef ABILITY_H
#define ABILITY_H

//User Libraries
#include <string>
#include <fstream>

using namespace std;

class Ability {
    friend class Creature;
private:
//Ability Info
    string name;
//Ability Stats
    unsigned short eCost;  //Energy Cost
    unsigned short Speed;  //Casting Speed
    unsigned short pDmg;
    unsigned short mDmg;
    
public:
    Ability();
    Ability(char[50]);
    void dDmg();
    
    
    
};



#endif	// ABILITY_H

