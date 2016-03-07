
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on March 6, 2016, 1:46 PM
 * Function: Weather Report
 */

//System Libraries
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global Constants
const int COL=5,ROW=5;
//Function Prototypes
void BinScrh(char[ROW][COL]);
//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables 
    srand(static_cast<int>(time(0)));
    char Arry[ROW][COL];
//Fill Array
    for(int c=0;c<COL;c++){
        for(int c1=0;c1<ROW;c1++){
            char temp=rand()%25+65;
            Arry[c][c1]=temp;
        }
    }
    //Print Sorted Array
    for(int c=0;c<ROW;c++){
        cout<<endl;
        for(int c1=0;c1<COL;c1++)
          cout<<Arry[c][c1];
    }
    cout<<endl;
//Sort the Array
    for(int c=0;c<ROW;c++){
        for(int c1=0;c1<COL-1;c1++){
            if(Arry[c][c1]>Arry[c][c1+1]){
                int temp =Arry[c][c1];
                Arry[c][c1]=Arry[c][c1+1];
                Arry[c][c1+1]=temp;
            }
        }
    }
//Print Sorted Array
    for(int c=0;c<ROW;c++){
        cout<<endl;
        for(int c1=0;c1<COL;c1++)
          cout<<Arry[c][c1];
    }
    return 0;
}
void BinScrh(char a[ROW][COL]){
//Declare Variables
    
}