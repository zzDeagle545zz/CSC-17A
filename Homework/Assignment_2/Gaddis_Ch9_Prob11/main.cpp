
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on March 23, 2016, 3:19 PM
 * Function:Array Expander
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
int* xPndAry(int*,int);
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
    int *P=xPndAry(Arry,size);
//Print Arrays
    cout<<"First Array"<<endl;
    for(int c=0;c<size;c++){//First Array
       cout<<Arry[c]<<" ";  
    }
    cout<<endl<<"Second Array"<<endl;
    for(int c=0;c<size*2;c++){//Second Array
       cout<<P[c]<<" ";  
    }
    cout<<endl;
    delete[] P;delete[] Arry;
    return 0;
}
//******************************************************************************
//******************************************************************************
//                             Expand Array
//Function-Doubles the Size of the Array, Sets new spaces to zero     
//Inputs
//      pointer of Array with its size
//Outputs
//      Pointer to thew new Array
////////////////////////////////////////////////////////////////////////////////
int* xPndAry(int* p,int n){
//Declare Variables
    int* p1=new int[n*2];//Allocate Memory
//Fill the new Array with reverse sequence
    for(int c=0;c<n;c++){
       if(c<=n)*(p1+c)=p[c];
       else *(p1+c)=0;
    }
    return p1;
}
