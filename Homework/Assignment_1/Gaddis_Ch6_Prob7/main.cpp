
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on March 6, 2016, 1:46 PM
 * Function: Celsius table
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
short Celsius(short);
//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables 
    float fTemp;
//Setup Table
    cout<<" C | F "<<endl;
//Loop for a table
    for(int c=1;c<=20;c++){
        fTemp=c;
        cout<<" "<<Celsius(fTemp)<<"| "<<c<<endl;
    }
    return 0;
}
short Celsius(short f){
//Conversion
    f=5.0f/9*(f-32);
    return f;
}
