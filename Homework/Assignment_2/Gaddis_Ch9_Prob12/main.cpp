
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on March 23, 2016, 3:19 PM
 * Function:Element Shifter
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
int* eShft(int*,int);
//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    int size;
    srand(static_cast<int>(time(0)));
//Prompt the User
    cout<<"What size would you like the Array to be?"<<endl;
    cin>>size;
//Allocate Memory to the Array
    int *Arry=new int[size];
//Fill Array
    for(int c=0;c<size;c++){
        Arry[c]=rand()%8+1;  
    }
//Print Array
    for(int c=0;c<size;c++){
       cout<<Arry[c]<<" ";  
    }
    cout<<endl;
//Reverse Array
    int *P=eShft(Arry,size);
//Print Arrays
    cout<<"First Array"<<endl;
    for(int c=0;c<size;c++){//First Array
       cout<<Arry[c]<<" ";  
    }
    cout<<endl<<"Second Array"<<endl;
    for(int c=0;c<size+1;c++){//Second Array
       cout<<P[c]<<" ";  
    }
    cout<<endl;
    delete[] P;delete[] Arry;
    return 0;
}
//******************************************************************************
//******************************************************************************
//                             Expand Array
//Function-Adds one to Array Size and shifts all the elements to the right one    
//Inputs
//      pointer of Array with its size
//Outputs
//      Pointer to thew new Array
////////////////////////////////////////////////////////////////////////////////
int* eShft(int* p,int n){
//Declare Variables
    int* p1=new int[n+2];//Allocate Memory
//Fill the new Array with reverse sequence
    for(int c=0;c<n+1;c++){
       *(p1+c+1)=p[c];
    }
    p1[0]=0;//Initialize the First element
    return p1;
}
