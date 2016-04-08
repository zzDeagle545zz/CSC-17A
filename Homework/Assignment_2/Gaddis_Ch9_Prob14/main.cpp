
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on March 23, 2016, 3:19 PM
 * Function:Array Allocator
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
int* ArryAlo(int);
//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    int size;
    srand(static_cast<int>(time(0)));
//Prompt the User
    cout<<"What size would you like the Array to be?"<<endl;
    cin>>size;
//Allocate Memory
    int *P=ArryAlo(size);
//Print Array
    cout<<"Array"<<endl;
    for(int c=0;c<size;c++){//First Array
       cout<<P[c]<<" ";  
    }
    cout<<endl;
    delete[] P;
    return 0;
}
//******************************************************************************
//******************************************************************************
//                            Allocate Array
//Function-Allocates Memory to an Array
//      Array size
//Outputs
//      Pointer to thew new Array
////////////////////////////////////////////////////////////////////////////////
int* ArryAlo(int n){
//Declare Variables
    int* p1=new int[n+2];//Allocate Memory
//Fill the new Array with reverse sequence
    for(int c=0;c<n+1;c++){
       *(p1+c+1)=rand()%8+1;
    }
    return p1;
}
