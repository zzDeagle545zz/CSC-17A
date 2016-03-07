
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on March 6, 2016, 1:46 PM
 * Function: Days in a Month Calculation
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    unsigned short mnth,yr,dys;
    const short MDAYS[12]= {31,28,31,30,31,30,
                   31,30,30,31,30,31};
//Prompt the User
    cout<<"Enter a Month(1-12)"<<endl;
    cin>>mnth;
    cout<<"Enter a Year"<<endl;
    cin>>yr;
//Check days
    dys=MDAYS[mnth-1];
//Check for leap year
    if(mnth==2){
        if(yr%100==0&&yr%400==0)
            dys=29;
        else if(yr%100!=0&&yr%4==0)
            dys=29;
    }
//Output the results
    cout<<"The month has "<<dys<<" days."<<endl;
    return 0;
}

