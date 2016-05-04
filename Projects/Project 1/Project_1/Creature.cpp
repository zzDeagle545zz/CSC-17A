////////////////////////////////////////////////////////////////////////////////
//                          Creature Class
//Function-- Create Creatures
//
//
 
//System Libraries 

//User Libraries
#include "Creature.h"
#include "Ability.h"

//Namespace

Creature::Creature(){
    sethealth(100);
    setattack(10);
    setmagic(5);
    setdefense(50);
}
void Creature::takAdmg(int a){
//Declare Variables
    int tDmg;
    tDmg=a-getdefense();
    health-=tDmg;  
}
void Creature::takMdmg(int a){
    
}