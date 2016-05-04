/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 25, 2016, 11:25 AM
 */

#include <cstdlib>
#include <iostream>

#include "Creature.h"
#include "Ability.h"

using namespace std;

int main(int argc, char** argv) {
//Declare Variables
    int attk;
    Creature A;
    for(int c=1;c<=10;c++){
    cout<<"A's Heatlth is "<<A.gethealth()<<endl;
    cout<<"How much attack?"<<endl;
    cin>>attk;
//Attack
    cout<<"Attacking A..."<<endl;
    A.takAdmg(attk);
    cout<<"A's Heatlth is "<<A.gethealth()<<endl;
    
    }
    
    return 0;
}

