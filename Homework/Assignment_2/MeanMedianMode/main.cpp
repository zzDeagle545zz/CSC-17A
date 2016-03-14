/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 14, 2016, 11:08 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
//User Libraries

//Global Variables

//Function Prototypes
float Mean(int*,int);
float Median(int*,int);
int* Mode(int*,int);
//Execution Begins
int main(int argc, char** argv) {
//Declare Variables
    int size;
    srand(static_cast<int>(time(0)));
//Prompt the User
    cout<<"How many numbers in the set?"<<endl;
    cin>>size;
//Allocate Memory for Array
    int* a=new int[size];
//Fill Array with random Numbers
    for(int c=0;c<size;c++)
        *(a+c)=rand()%9+1;
//Print Array
    cout<<"Unsorted Number Set"<<endl;
    for(int c=0;c<size;){
        cout<<*(a+c)<<" ";
        if(!(++c%10))cout<<endl;
    }cout<<endl;
//Sort the Array
    for(int c=0;c<size;c++){
        for(int c1=0;c1<size-1;c1++){
            if(a[c1]>a[c1+1]){
               a[c1]=a[c1]^a[c1+1]; 
               a[c1+1]=a[c1]^a[c1+1];
               a[c1]=a[c1]^a[c1+1];         
            }  
        }
    }
//Print Array
    cout<<"Sorted Number Set"<<endl;
    for(int c=0;c<size;){
        cout<<*(a+c)<<" ";
        if(!(++c%10))cout<<endl;
    }cout<<endl;
//Calculate Mean
    cout<<"The mean of the set is "<<Mean(a,size)<<"."<<endl;
//Calculate Median
    cout<<"The median of the set is ";
    cout<<Median(a,size)<<"."<<endl;
//Calculate Mode'n'Stuff
    int *p=Mode(a,size);
//Print Mode Array
    cout<<"Mode Set"<<endl;
    for(int c=0;!(p[c]==0);){
        cout<<*(p+c)<<" ";
        if(!(++c%10))cout<<endl;
    }cout<<endl;
    
    
    delete[] a;
    delete[] p;
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
//****************************************************************************//
//                                  Mean
//Inputs--->Pointer pointing to Array
//          User's Array Size
//Outputs<--The average of the set
//Purpose---To calculate the average of the numbers in the set.
//******************************************************************************
float Mean(int* a,int n){
//Declare Variables
    float sum=0;
//Add Numbers to the sum
    for(int c=0;c<n;c++)
        sum+=a[c];
//Calculate Mean
    sum/=n;
    return sum;
}
////////////////////////////////////////////////////////////////////////////////
//****************************************************************************//
//                                  Median
//Inputs--->Pointer pointing to Array
//          User's Array Size
//Outputs<--The average of the set
//Purpose---To calculate the average of the numbers in the set.
//******************************************************************************
float Median(int* a,int n){
//Declare variables
//Find the middle
    if(!(n%2))
        cout<<a[n/2-1]<<" and ";    
    return a[n/2];
}
////////////////////////////////////////////////////////////////////////////////
//****************************************************************************//
//                                  Mode
//Inputs--->Pointer pointing to Array
//          User's Array Size
//Outputs<--The pointer pointing to the array
//Purpose---To calculate the the number of modes, max frequency, 
//and the mode of the set
//******************************************************************************
int* Mode(int* a,int n){
//Declare Variables
    int mFrq=0,nMds=0;
//Find max Frequency
    for(int temp=1,c=0;c<n-1;c++){
        if(*(a+c)==a[c+1])
            temp+=1;
        else temp=1;
        if(temp>mFrq)
            mFrq=temp;
    }
    cout<<mFrq<<endl;
    for(int temp=1,c=0;c<n-1;c++){
        if(*(a+c)==a[c+1])
            temp+=1;
        else temp=1;
        if(temp==mFrq)
            nMds++;
    }
    cout<<nMds<<endl;
//Allocate Dynamic Memory 
    int* p=new int[nMds+2];
//Fill Array
    p[0]=nMds;p[1]=mFrq;p[nMds+2]=0;
    for(int pos=2,temp=1,c=0;c<n;c++){
        if(*(a+c)==a[c+1])
            temp+=1;
        else temp=1;
        if(temp==mFrq)
            *(p+pos++)=a[c];
    }
    return p;
}