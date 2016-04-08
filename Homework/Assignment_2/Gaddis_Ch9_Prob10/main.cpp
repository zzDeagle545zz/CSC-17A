
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on March 23, 2016, 3:19 PM
 * Function:Reverse The Array
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
int* Rvrse(int[],int);
//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    int Arry[10];
    int size=10;
    int* P;
    srand(static_cast<int>(time(0)));
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
    P=Rvrse(Arry,size);
//Print Arrays
    for(int c=0;c<size;c++){//First Array
       cout<<Arry[c]<<" ";  
    }
    cout<<endl;
    for(int c=0;c<size;c++){
       cout<<P[c]<<" ";  
    }
    cout<<endl;
    delete[] P;
    return 0;
}
//******************************************************************************
//******************************************************************************
//                             Reverse Array
//Function-Reverses the positions of an Array     
//Inputs
//      Array with its size
//Outputs
//      Pointer to thew new Array
////////////////////////////////////////////////////////////////////////////////
int* Rvrse(int a[],int n){
//Declare Variables
    int* p=new int[n];//Allocate Memory
//Fill the new Array with reverse sequence
    for(int c=0;c<n;c++){
        *(p+c)=a[n-c-1];  
    }
    return p;
}
