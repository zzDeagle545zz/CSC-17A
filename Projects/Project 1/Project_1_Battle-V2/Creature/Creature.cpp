/* 
 * File:   Creature.cpp
 * Author: zzDeagle545zz
 * 
 * Created on April 29, 2016, 3:43 PM
 */

//System Libraries

//User Libraries
#include "Creature.h"
#include "../Ability/Ability.h"
#include <iostream>

//******************************************************************************
//******************************************************************************
//                 (DEAFULT) Creature Constructor
//Function- Default Constructor just to set Stats to Standard
//Inputs
//    -->
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
Creature::Creature(){
//Declare Variables
    fstream cFile;
//Read input from a file
    cFile.open("Creatures/Teradon/Teradon.dat",ios::in);
    cFile.ignore(256,':');                  //Ignores Non-Data Elements
//Name
    getline(cFile,name);
//Type
    cFile.ignore(256,':'); 
    getline(cFile,type);
//Element
    cFile.ignore(256,':'); 
    getline(cFile,element);   
//Health
    cFile.ignore(256,':'); 
    cFile>>HP;
//Armor
    cFile.ignore(256,':'); 
    cFile>>Armor;
//Resist
    cFile.ignore(256,':'); 
    cFile>>Resist;
//Strength
    cFile.ignore(256,':'); 
    cFile>>Strgth;
//Magic
    cFile.ignore(256,':'); 
    cFile>>Magic;
//Element
    cFile.ignore(256,':'); 
    cFile>>Elment;
//Speed
    cFile.ignore(256,':'); 
    cFile>>Speed;
//Energy
    cFile.ignore(256,':'); 
    cFile>>Enrgy;
//Abilities
    //Attack Ability
    Attack=new Ability("Creatures/Teradon/Attack.dat");
    //Attack Ability
    slot1=new Ability("Creatures/Teradon/Ability1.dat");
    //Attack Ability
    slot2=new Ability("Creatures/Teradon/Ability2.dat");
    //Attack Ability
    slot3=new Ability("Creatures/Teradon/Ability3.dat");
    //Attack Ability
    slot4=new Ability("Creatures/Teradon/Ability4.dat");
//Set the Temp Stats
    rsStat();
    cFile.close();                          //Close Operation
}
//******************************************************************************
//******************************************************************************
//                       Creature Constructor(1)
//Function-Constructor to load from a fine
//Inputs
//    -->fstream file
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
Creature::Creature(char Name[50]){
//Declare Variables
    fstream cFile;
//Read input from a file
    cFile.open(Name,ios::in);
    cFile.ignore(256,':');                  //Ignores Non-Data Elements
//Name
    getline(cFile,name);
//Type
    cFile.ignore(256,':'); 
    getline(cFile,type);
//Element
    cFile.ignore(256,':'); 
    getline(cFile,element);   
//Health
    cFile.ignore(256,':'); 
    cFile>>HP;
//Armor
    cFile.ignore(256,':'); 
    cFile>>Armor;
//Resist
    cFile.ignore(256,':'); 
    cFile>>Resist;
//Strength
    cFile.ignore(256,':'); 
    cFile>>Strgth;
//Magic
    cFile.ignore(256,':'); 
    cFile>>Magic;
//Element
    cFile.ignore(256,':'); 
    cFile>>Elment;
//Speed
    cFile.ignore(256,':'); 
    cFile>>Speed;
//Energy
    cFile.ignore(256,':'); 
    cFile>>Enrgy;
//Abilities
    //Attack Ability
    Attack=new Ability("Creatures/Gigatary/Attack.dat");
    //Attack Ability
    slot1=new Ability("Creatures/Gigatary/Ability1.dat");
    //Attack Ability
    slot2=new Ability("Creatures/Gigatary/Ability2.dat");
    //Attack Ability
    slot3=new Ability("Creatures/Gigatary/Ability3.dat");
    //Attack Ability
    slot4=new Ability("Creatures/Gigatary/Ability4.dat");
//Set the Temp Stats
    rsStat();
    cFile.close();                          //Close Operation
}

//******************************************************************************
//******************************************************************************
//                       Creature Destructor
//Function-Deletes the Creature and frees Memory
//Inputs
//    -->fstream file
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
Creature::~Creature(){
//Free up Memory
    delete Attack;delete slot1;delete slot2;delete slot3;delete slot4;
}
//******************************************************************************
//******************************************************************************
//                            Reset Stats
//Function-Returns Stats to the Starting values
//Inputs
//    -->
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
void Creature::rsStat(){
//Declare Variables
    
//Reset Values
    cHP=HP;
    cArmor=Armor;
    cResist=Resist;
    cStrgth=Strgth;
    cMagic=Magic;
    cSpeed=Speed;
    cEnrgy=Enrgy;
}
//******************************************************************************
//******************************************************************************
//                              Take Damage
//Function- Takes the damage from the ability
//
//Inputs
//    -->The total damage delt from the creature
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
void Creature::tkDmg(short A){
//Declare Variables
    short TolDmg;
//Damage Calculation
    TolDmg=A-(cResist+(.65f*cArmor));
    if(TolDmg<0)
        TolDmg=0;
//Deal Damage
    this->cHP-=TolDmg;
//Output the Damage
    cout<<endl<<name<<endl;
    cout<<"--->took "<<TolDmg<<" Damage!"<<endl;
}