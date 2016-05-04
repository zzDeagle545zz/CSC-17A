
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
#include "Creature/Creature.h"
#include "Ability/Ability.h"

using namespace std;

//Global Constants

//Function Prototypes
void Game();void Rules();void Optns();  //Menu Functions
void dScreen(Creature*,Creature*);      //Displays the Screen
void cScrn();                           //Clear Screen  
bool ckMove(string,Creature*);                    //Input Validation

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
    do{
    cout<<"Press 1 to Start Playing the Game"<<endl;
    cout<<"Press 2 to read the Rules of the Game"<<endl;
    cout<<"Press 3 for Options"<<endl;
    cout<<"Press anything else to Quit"<<endl;
    cin>>menu;
        switch(menu){
                case 49:Game();break;
                case 50:Rules();break;
                case 51:Game();break;
                default:return 0;
        }
    }
    while(n);
    return 0;
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
void Game(){
//Declare Variables
    int num;
//Choose the User's Creature
    cout<<endl<<"Welcome to the Battlefield!"<<endl;
    cout<<"Choose your Creature for Battle is Gigatary!"<<endl;
    cout<<"Description!"<<endl;
    cout<<"Press 1 to continue"<<endl;
    cin>>num;
//Create the Creatures
    Creature* Gigatary=new Creature("Creatures/Gigatary/Gigatary.dat");
    Creature* Teradon=new Creature;
//Display The Screen
    cScrn();                            //Clears the Screen
    dScreen(Gigatary,Teradon);
    
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
//                            Display Screen
//Function- Displays the the Screen for battle
//Inputs
//    -->The two creatures fighting
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
void dScreen(Creature* A,Creature* B){
//Declare Variables
    string aOdr;                        //Ability Order
    bool cont=true;                     //For turn Completion
//Display the Screen
    cout<<B->gtName()<<endl;            //The AI Creature Display
    cout<<"HP";
//Health Bar
    for(short c=1;c<=B->gtHbar();c++)
        cout<<"*";
    cout<<endl<<endl;    
//User Creature
    cout<<A->gtName()<<endl;            //The User Creature Display w/ Abilities
    cout<<"HP";
//Health Bar
    for(short c=1;c<=A->gtHbar();c++)
        cout<<"*";
    cout<<endl;
//Ability Layout
    cout<<"1."<<A->gtAA()<<endl;
    cout<<"2."<<A->gtA1()<<endl;
    cout<<"3."<<A->gtA2()<<endl;
    cout<<"4."<<A->gtA3()<<endl;
    cout<<"5."<<A->gtA4()<<endl;
//Input Validation
    do{
        cin>>aOdr;  
    }while(ckMove(aOdr,A));
   
    
    
}
//******************************************************************************
//******************************************************************************
//                            Clear Screen
//Function-Clears the screen
//Inputs
//    -->
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
void cScrn(){
//Clear the Screen
    for(int c;c<=100;c++)
    cout<<endl;
}
//******************************************************************************
//******************************************************************************
//                               Check Move
//Function-Input validation for the user's move
//Inputs
//    -->
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
bool ckMove(string A,Creature* B){
//Declare Variables
    short temp=0;
//Checks the string for Valid Number
    for(int c=0;A[c]!='\0';c++){
        if(A[c]<49||A[c]>53){
            cout<<"Invalid Input. Try Again"<<endl;
            return true;
        }  
    }
//Check for Energy Use
    for(int c=0;A[c]!='\0';c++){
        switch(A[c]){
            case 49:temp+=B->gtAAe();break;
            case 50:temp+=B->gtA1e();break;
            case 51:temp+=B->gtA2e();break;
            case 52:temp+=B->gtA3e();break;
            case 53:temp+=B->gtA4e();break;
        }
    }
        if(temp>B->gtEnrgy()){
            cout<<"Not enough Energy. Try Again"<<endl;
            return true;  
        }
    return false;
}