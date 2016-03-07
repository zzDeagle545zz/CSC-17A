
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on March 6, 2016, 1:46 PM
 * Function: Currency Conversion
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    float USd;
    const float YEN=98.93,EUROS=.74;
//Prompt the user
    cout<<"Currency Conversion"<<endl;
    cout<<"Enter the amount of US Dollars for conversion"<<endl;
    cin>>USd;
//Calculation
    USd*=YEN;
//Output Results
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Your Amount in Yen is $"<<USd<<endl;
//Calculation
    USd/=YEN;
    USd*=EUROS; 
//Output Results
    cout<<"Your Amount in Euros is $"<<USd<<endl;
    
    return 0;
}

