
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on March 6, 2016, 1:46 PM
 * Function: Weather Report
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables 
    char data[3][30];
    srand(static_cast<int>(time(0)));
    ofstream oPut;
    ifstream iPut;
//Fill the Data Folder
    oPut.open("RainOrShine.txt");
    for(int c=0;c<3;c++){
         for(int c1=0;c1<30;c1++){
             int temp=rand()%3;
            (temp==0?oPut<<'R':
             temp==1?oPut<<'C':
                  oPut<<'S');
         }
    }oPut.close();
//Read in Random Data
    iPut.open("RainOrShine.txt");
    for(int c=0;c<3;c++){
         for(int c1=0;c1<30;c1++){
             char temp;
             iPut>>temp;
            data[c][c1]=temp; 
         }
    }iPut.close();
//Print Table
    cout<<"Weather Report"<<endl;
    cout<<"Days     1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  "
          "16  17  18  19  20  21  22  23  24  25  26  27  28  29  30";
    for(int c=0;c<3;c++){
        cout<<endl;
        (c==0?cout<<"June  ":
         c==1?cout<<"July  ":
              cout<<"August");
         for(int c1=0;c1<30;c1++){
            cout<<setw(4)<<data[c][c1]; 
         }
    }
    
    return 0;
}
