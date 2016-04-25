
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on April 25, 2016, 9:20 AM
 * Function:
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();int getN();void def(int);//Menu Functions
void problem1();void problem2();     //Problems
void problem3();void problem4();
void problem5();void problem6();     //Mean Problem
int* Rvrse(int[],int);               //Problem 10 Chapter 9
int* xPndAry(int*,int);              //Problem 11 Chapter 9
int* eShft(int*,int);                //Problem 12 Chapter 9
int* ArryAlo(int);                   //Problem 14 Chapter 9 and 2
float Mean(int*,int);                //Mean Median and Mode
float Median(int*,int);
int* Mode(int*,int);
//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){                 //Chooses the Problem
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=6);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////
//****************************************************************************//
//                                 Menu
//Inputs--->
//Outputs<--
//Purpose---Displays a Menu to the User
//******************************************************************************
void Menu(){
    cout<<"Menu for the Midterm"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type anything else to exit"<<endl<<endl;
}
////////////////////////////////////////////////////////////////////////////////
//****************************************************************************//
//                          Get the Number
//Inputs--->
//Outputs<--The Users Numberr
//Purpose---Grabs a Number for the user
//******************************************************************************
int getN(){
        int inN;
        cin>>inN;
        return inN;
}
////////////////////////////////////////////////////////////////////////////////
//****************************************************************************//
//                                  Def
//Inputs--->The user number
//Outputs<--
//Purpose---Displays an exit Prompt
//******************************************************************************
void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
////////////////////////////////////////////////////////////////////////////////
//****************************************************************************//
//                     Gaddis Chapter 9 Problem 10    
//Inputs--->
//Outputs<--
//Purpose---Uses a Structure to track Banking information
//******************************************************************************
void problem1(){
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
////////////////////////////////////////////////////////////////////////////////
//****************************************************************************//
//                     Gaddis Chapter 9 Problem 11   
//Inputs--->
//Outputs<--
//Purpose---Uses a Structure to track Banking information
//******************************************************************************
void problem2(){
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
////////////////////////////////////////////////////////////////////////////////
//****************************************************************************//
//                     Gaddis Chapter 9 Problem 12   
//Inputs--->
//Outputs<--
//Purpose---Uses a Structure to track Banking information
//******************************************************************************
void problem3(){
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
////////////////////////////////////////////////////////////////////////////////
//****************************************************************************//
//                     Gaddis Chapter 9 Problem 14   
//Inputs--->
//Outputs<--
//Purpose---Uses a Structure to track Banking information
//******************************************************************************
void problem4(){
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
////////////////////////////////////////////////////////////////////////////////
//****************************************************************************//
//                     Gaddis Chapter 9 Problem 2  
//Inputs--->
//Outputs<--
//Purpose---Uses a Structure to track Banking information
//******************************************************************************
void problem5(){
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
}
//******************************************************************************
//******************************************************************************
//                            Mean Median And Mode
//
//Outputs
//      Pointer to thew new Array
////////////////////////////////////////////////////////////////////////////////
void problem6(){
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