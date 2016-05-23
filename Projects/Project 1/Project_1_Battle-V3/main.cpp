
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on April 29, 2016, 3:38 PM
 * Function:
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

//User Libraries
#include "../Project_1_Battle-V2/Creature/Creature.h"
#include "../Project_1_Battle-V2/Ability/Ability.h"

using namespace std;

//Global Constants

//Function Prototypes
void gEngine();void Rules();void Optns();  //Menu Functions


//******************************************************************************
//******************************************************************************
//                                   Main
//Function- Execution Begins Here
//Inputs
//      
//Outputs
//      
////////////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv) {
//Declare Variables 
    char menu;
    bool n=true;
    srand(static_cast<int>(time(0)));
//Menu
    do{
    cout<<"Press 1 to Start Playing the Game"<<endl;
    cout<<"Press 2 to read the Rules of the Game"<<endl;
    cout<<"Press 3 for Options"<<endl;
    cout<<"Press anything else to Quit"<<endl;
    cin>>menu;
        switch(menu){
                case 49:gEngine();break;
                case 50:Rules();break;
                case 51:Optns();break;
                default:return 0;
        }
    }
    while(n);
    return 0;
}

//******************************************************************************
//******************************************************************************
//                                 Rules
//Function- Reads the rules of the game
//Inputs
//    -->
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
void Rules(){
//Declare Variables
    fstream rules;
    string line;
//Output Rules
    rules.open("Rules.txt",ios::in);
    for(int c=1;c<+5;c++){
        getline(rules,line);
        cout<<line<<endl;
    }
    cout<<endl;
//Close File
    rules.close();
}
//******************************************************************************
//******************************************************************************
//                                 Options
//Function- Displays the options
//Inputs
//    -->
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
void Optns(){
    
    

    
    
    
}
//******************************************************************************
//******************************************************************************
//                                 Game
//Function- The Driving engine for the Game
//Inputs
//    -->
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
void gEngine(){
//Declare Variables
    
}