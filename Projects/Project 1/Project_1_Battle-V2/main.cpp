
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
void Game();void Rules();void Optns();  //Menu Functions
void dScreen(Creature*,Creature*);      //Displays the Screen
void cScrn();                           //Clear Screen  
bool ckMove(string,Creature*);          //Input Validation
void AIMove(string&,Creature*);         //AI Move
void Fight(Creature*,Creature*,string,string);        //Creature Fight

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
    do{
    cout<<"Press 1 to Start Playing the Game"<<endl;
    cout<<"Press 2 to read the Rules of the Game"<<endl;
    //cout<<"Press 3 for Options"<<endl;        //coming soon
    cout<<"Press anything else to Quit"<<endl;
    cin>>menu;
        switch(menu){
                case 49:Game();break;
                case 50:Rules();break;
                //case 51:Game();break;
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
    char cont;
    string sggst;
    fstream sGgest;
//Choose the User's Creature
    cout<<endl<<"Welcome to the Battlefield!"<<endl;
    cout<<"Your Creature for Battle is the Thunder Dragon, Gigatary!"<<endl;
    cout<<"Your Enemy is the Lightning Serpent, Teradon."<<endl;
    cout<<"Press 1 to continue"<<endl;
    cin>>num;
//Create the Creatures
    Creature* Gigatary=new Creature("Creatures/Gigatary/Gigatary.dat");
    Creature* Teradon=new Creature;
//Display The Screen
    cScrn();                            //Clears the Screen
//Loop The Battle
    do{
    dScreen(Gigatary,Teradon);
    }while(Gigatary->gtcHP() > 0&&Teradon->gtcHP()>0);
//Who Won?
    if(Gigatary->gtcHP()>0)
        cout<<"Gigatary Won!"<<endl;
    else
        cout<<"Teradon Won..."<<endl;
//Deallocate Memory
    delete Gigatary;delete Teradon;
//Ask the User if they would like to play again
    cout<<"Would you like to play again?(Y/N?)"<<endl;
    cin>>cont;
    if(cont=='Y'||cont=='y')
        Game();
    else{
        cout<<"Thanks for Playing!"<<endl<<endl;
//The Suggestions Box
        cout<<"Please input any suggestions here!"<<endl<<endl;
        cin.ignore();
        getline(cin,sggst);
        sGgest.open("Suggestions.bin",ios::binary|ios::app|ios::out);
        sGgest<<sggst;
        sGgest.close();
        return;
    }
    
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
    string AIOdr;
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
    cout<<"1."<<"("<<A->gtAAe()<<")"<<A->gtAA()<<endl;
    cout<<"2."<<"("<<A->gtA1e()<<")"<<A->gtA1()<<endl;
    cout<<"3."<<"("<<A->gtA2e()<<")"<<A->gtA2()<<endl;
    cout<<"4."<<"("<<A->gtA3e()<<")"<<A->gtA3()<<endl;
    cout<<"5."<<"("<<A->gtA4e()<<")"<<A->gtA4()<<endl;
//Input Validation
    do{
        cin>>aOdr;  
    }while(ckMove(aOdr,A));
//AI Move
    AIMove(AIOdr,B);
//Fight Creatures
    Fight(A,B,aOdr,AIOdr);

    
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
    for(int c;c<10;c++)
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
//******************************************************************************
//******************************************************************************
//                               AI Move
//Function-The AI makes his move(Random Play style)
//Inputs
//    -->AI's String
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
void AIMove(string& AIMove,Creature* A){
//Declare Variables
    int Enrgy=A->gtEnrgy();
//Randomly chooses moves
    for(int c=0;c<20;c++){
        switch(rand()%5+1){
            case 1:
                if(A->gtAAe()<Enrgy){
                    AIMove.append("1");
                    Enrgy-=A->gtAAe();
                }break;
            case 2:if(A->gtA1e()<Enrgy){
                    AIMove.append("2");
                    Enrgy-=A->gtA1e();
                }
            case 3:break;
                if(A->gtA2e()<Enrgy){
                    AIMove.append("3");
                    Enrgy-=A->gtA2e();
                }break;
            case 4:
                if(A->gtA3e()<Enrgy){
                    AIMove.append("4");
                    Enrgy-=A->gtA3e();
                }break;
            case 5:
                if(A->gtA4e()<Enrgy){
                    AIMove.append("5");
                    Enrgy-=A->gtA4e();
                }break;
        } 
    }
}
//******************************************************************************
//******************************************************************************
//                                    Fight
//Function-
//Inputs
//    -->The Creatures
//Outputs
//    <--
////////////////////////////////////////////////////////////////////////////////
void Fight(Creature* A,Creature* B,string a,string b){
//Declare Variables
    short temp;
//Fight the Creature
    for(int c=0;a[c]!='\0';c++){
        switch(a[c]){
            case 49:
                B->tkDmg(A->Attack->dDmg(A->gtStrgth(),A->gtMagic()));break;
            case 50:
                B->tkDmg(A->slot1->dDmg(A->gtStrgth(),A->gtMagic()));break;
            case 51:
                B->tkDmg(A->slot2->dDmg(A->gtStrgth(),A->gtMagic()));break;
            case 52:
                B->tkDmg(A->slot3->dDmg(A->gtStrgth(),A->gtMagic()));break;
            case 53:
                B->tkDmg(A->slot4->dDmg(A->gtStrgth(),A->gtMagic()));break;
            } 
    }
//Test to see if he was killed
    if(B->gtcHP()<=0)
        return;
//Fight the AI Creature
    for(int c=0;b[c]!='\0';c++){
        switch(b[c]){
            case 49:
                A->tkDmg(B->Attack->dDmg(B->gtStrgth(),A->gtMagic()));break;
            case 50:
                A->tkDmg(B->slot1->dDmg(B->gtStrgth(),A->gtMagic()));break;
            case 51:
                A->tkDmg(B->slot2->dDmg(B->gtStrgth(),A->gtMagic()));break;
            case 52:
                A->tkDmg(B->slot3->dDmg(B->gtStrgth(),A->gtMagic()));break;
            case 53:
                A->tkDmg(B->slot4->dDmg(B->gtStrgth(),A->gtMagic()));break;
            } 
    }
}