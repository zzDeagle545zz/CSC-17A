/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 6, 2016, 11:03 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Client.h"
using namespace std;

Client* FllStct();

int main(int argc, char** argv) {
//Declare Variables
    Client *p;//Pointer to new Client
//Fills out the Client's Information=
    p=FllStct();
//Asses the Balance
    (*p).Blnc+=(p->dTol-p->wTol);//Deposits - Withdraws
    if(p->Blnc<0){
        cout<<"The account has been overdrawn and a $15 fee will be charged"
            <<endl;
        p->Blnc-=15;//Overdrawn Fee
        cout<<"Your current balance is $"<<p->Blnc<<"."<<endl;
    }
    else
        cout<<"Your current balance is $"<<p->Blnc<<"."<<endl;
//Output The Clients Info
    cout<<"The Account Holder's Name is "<<p->name<<"."<<endl;
    cout<<"The Account Holder's Address is "<<p->adrs<<"."<<endl;
    cout<<"The Account number is "<<p->aNum<<"."<<endl;
    cout<<"The withdraws for the month was "<<p->wTol<<"."<<endl;
    cout<<"The deposits for the month was "<<p->dTol<<"."<<endl;
    cout<<"The accounts current balance "<<p->Blnc<<"."<<endl;
    return 0;
}
Client* FllStct(){
//Declare Variables
  Client *a=new Client;//Dynamic Allocation
//Prompt the User
    cout<<"What is the Account holder's name?"<<endl;//Input Name
    getline(cin,a->name);
    cout<<"What is the Account holder's address?"<<endl;//Input Address
    getline(cin,a->adrs);
    cout<<"What is the Account Number?"<<endl;//Input Account Number
    cin>>a->aNum;
    cout<<"What is the balance for the month?"<<endl;//Input Starting Balance
    cin>>a->Blnc;
    cout<<"Input all Check written this month?"<<endl;//Input The Withdraws
    a->wTol=0;//Initialize the amount
    for(int c=0;c==-1;c++){
        int b;
        char d='n';
        cout<<"Input Check "<<c<<"'s amount."<<endl;
        cin>>b;
        a->wTol+=a;
    //To continue
        cout<<"Would you like to continue inputting checks?(Y/N)"<<endl;
        cin>>d;
        if(d=='n'||d=='N')c=-1;
    }
    cout<<"Input all deposits this month?"<<endl;//Input The Deposits
    a->dTol=0;//Initialize the amount
    for(int c=0;c==-1;c++){
        int b;
        char d='n';
        cout<<"Input deposit "<<c<<"'s amount."<<endl;
        cin>>b;
        a->dTol+=a;
    //To continue
        cout<<"Would you like to continue inputting deposits?(Y/N)"<<endl;
        cin>>d;
        if(d=='n'||d=='N')c=-1;
    }
}
