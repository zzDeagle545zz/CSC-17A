
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on March 6, 2016, 1:46 PM
 * Function: Population prediction
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    unsigned int sOrg,dys;
    float pcnt;
//Prompt the user
    do{//Input Validation
        cout<<"How many organism to start?(2+)"<<endl;
        cin>>sOrg;
        if(sOrg<2)cout<<"Invalid Input"<<endl;
    }while(sOrg<2);
    do{//Input Validation
        cout<<"How many days of reproduction?(1+)"<<endl;
        cin>>dys;
        if(dys<2)cout<<"Invalid Input"<<endl;
    }while(dys<2);
    
    do{//Input Validation
        cout<<"What is the percentage of reproduction(0+)"<<endl;
        cin>>pcnt;
        if(pcnt<1)cout<<"Invalid Input"<<endl;
    }while(pcnt<1);
//Loop the Calculation
    for(int c=1;c<=dys;c++){
        sOrg=sOrg+(sOrg*pcnt/100);
        cout<<"The Population at day "<<c<<" is "<<sOrg<<"."<<endl;
    }
    
    
    
    return 0;
}

