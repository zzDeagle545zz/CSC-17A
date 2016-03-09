
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
void BinScrh(char[ROW][COL],char c);
//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables 
    srand(static_cast<int>(time(0)));
    char Arry[ROW][COL];
    char val;
//Fill Array
    for(int c=0;c<COL;c++){
        for(int c1=0;c1<ROW;c1++){
            char temp=rand()%25+65;
            Arry[c][c1]=temp;
        }
    }
//Print Array
    for(int c=0;c<ROW;c++){
        cout<<endl;
        for(int c1=0;c1<COL;c1++)
          cout<<Arry[c][c1];
    }
    cout<<endl;
//Sort the Array
    for(int c=0;c<ROW;c++){
        for(int c2=0;c2<COL-1;c2++){
            for(int c1=0;c1<COL-1;c1++){
                if(Arry[c][c1]>Arry[c][c1+1]){
                    int temp =Arry[c][c1];
                    Arry[c][c1]=Arry[c][c1+1];
                    Arry[c][c1+1]=temp;
                }
            }
        }
    }
//Print Sorted Array
    for(int c=0;c<ROW;c++){
        cout<<endl;
        for(int c1=0;c1<COL;c1++)
          cout<<Arry[c][c1];
    }cout<<endl;
//BinSearch Call and Display position
    cout<<"What letter are you searching for?"<<endl;
    cin>>val;
    BinScrh(Arry,toupper(val));
    return 0;
}
void BinScrh(char a[ROW][COL],char val){
//Declare Variables
    int rBg=0,eBg=COL-1;//Range declaration
    int c;
    do{
        int middle=(eBg+rBg)/2;
        for(c=0;c<COL;c++){
            rBg=0;eBg=COL-1;
            for(int c1=0;c1<COL&&rBg<=eBg;c1++){
               middle=(eBg+rBg)/2;
               if(a[c][middle]==val){
                   cout<<"The Position of "<<val<<" is ("
                       <<c<<","<<middle<<")"<<endl;break;} 
               else if(a[c][middle]>val){eBg=middle-1;}
               else if(a[c][middle]<val){rBg=middle+1;}
            }
        }
    }while(c<1);
    
}