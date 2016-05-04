/* 
 * File:   Ability.cpp
 * Author: zzDeagle545zz
 * 
 * Created on April 29, 2016, 3:46 PM
 */

//User Libraries
#include "Ability.h"
//#include <fstream>

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
//                          Status Effect
//Function- Decides what the ability does and how it acts with the creatures
//
//Inputs
//    -->
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
void Ability::dDmg(){
//Declare Variables
    
//Status Effects
    

    
    
}