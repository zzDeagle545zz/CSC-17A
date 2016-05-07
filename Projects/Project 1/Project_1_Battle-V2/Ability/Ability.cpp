/* 
 * File:   Ability.cpp
 * Author: zzDeagle545zz
 * 
 * Created on April 29, 2016, 3:46 PM
 */

//User Libraries
#include "../Ability/Ability.h"
#include "../Creature/Creature.h"

//******************************************************************************
//******************************************************************************
//                 (DEAFULT) Ability Constructor
//Function- Default Constructor just to set Stats to Standard
//Inputs
//    -->
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
Ability::Ability(){


    
    
}
//******************************************************************************
//******************************************************************************
//                       Ability Constructor
//Function-Constructor to load from a file
//Inputs
//    -->fstream file
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
Ability::Ability(char Name[50]){
//Declare Variables
    fstream cFile;
//Read input from a file
    cFile.open(Name,ios::in);
    cFile.ignore(256,':');                  //Ignores Non-Data Elements
//Name
    getline(cFile,name);   
//Energy Cost
    cFile.ignore(256,':'); 
    cFile>>eCost;
//Speed
    cFile.ignore(256,':'); 
    cFile>>Speed;
//Physical Damage
    cFile.ignore(256,':'); 
    cFile>>pDmg;
//Magic Damage
    cFile.ignore(256,':'); 
    cFile>>mDmg;
    cFile.close();                          //Close Operations
}
//******************************************************************************
//******************************************************************************
//                                  Deal Damage
//Function- Returns the Damage of the Ability 
//
//Inputs
//    -->The Creature
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
short Ability::dDmg(short A,short m){
//Declare Variables
    short DmgDlt;
//Damage Calculation
    DmgDlt=(A*.7f)+(m*.5f)+mDmg+pDmg;
//Return Total Damage
    return DmgDlt; 
}