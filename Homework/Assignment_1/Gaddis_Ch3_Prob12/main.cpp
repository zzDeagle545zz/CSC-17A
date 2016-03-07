
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on March 6, 2016, 1:11 PM
 * Function:Temperature Convert
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    short temp;
//Prompt the user
    cout<<"What is the temperature you are converting to Celsius?"<<endl;
    cin>>temp;
//Conversion
    temp=temp*9/5+32;
//Output results
    cout<<"Your temp is "<<temp<<"F."<<endl;
    return 0;
}

