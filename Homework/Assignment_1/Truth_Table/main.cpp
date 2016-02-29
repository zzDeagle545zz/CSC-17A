
/* 
 * File:   main.cpp
 * Author: zzDeagle545zz
 *
 * Created on January 14, 2016, 12:50 PM
 * Function: Truth Table
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Test table
    cout<<"Test Table"<<endl;
    cout<<"x | y | !x | !y | x&&y | x||y | x^y | x^y^y | x^y^x | !(x&&y) | !x||!y  | !(x||y) | !x&&!y |"<<endl;
    cout<<"T | T |  F |  F |   T  |   T  |  F  |   T   |   T   |    F    |    F    |    F    |    F   |"<<endl;
    cout<<"T | F |  F |  T |   F  |   T  |  T  |   T   |   F   |    T    |    T    |    F    |    F   |"<<endl;
    cout<<"F | T |  T |  F |   F  |   T  |  T  |   F   |   T   |    T    |    T    |    F    |    F   |"<<endl;
    cout<<"F | F |  T |  T |   F  |   F  |  F  |   F   |   F   |    T    |    T    |    T    |    T   |"<<endl;
    
    bool x=true;
    bool y=true;
    
    //Create Heading
    cout<<" "<<endl<<"Truth Table"<<endl;
    cout<<"x | y | !x | !y | x&&y | x||y | x^y | x^y^y | x^y^x | !(x&&y) | !x||!y  | !(x||y) | !x&&!y |"<<endl;
    
    //First Row
    cout<<(x?'T':'F')<<" | ";
    cout<<(y?'T':'F')<<" | ";
    //!x !y
    cout<<(!x?'T':'F')<<"  | ";
    cout<<(!y?'T':'F')<<"  |  ";
    //x&&y
    cout<<(x&&y?'T':'F')<<"   |  ";
    //x||y
    cout<<(x||y?'T':'F')<<"   |  ";
    //x^y
    cout<<(x^y?'T':'F')<<"  |   ";
    //x^y^y
    cout<<(x^y^y?'T':'F')<<"   |   ";
    //x^y^x
    cout<<(x^y^x?'T':'F')<<"   |    ";
    //!(x&&y)
    cout<<(!(x&&y)?'T':'F')<<"    |    ";
    //!x||!y
    cout<<(!x||!y?'T':'F')<<"    |    ";
    //!(x||y)
    cout<<(!(x||y)?'T':'F')<<"    |   ";
    //!x&&!y
    cout<<(!x&&!y?'T':'F')<<"    |   "<<endl;
    
    
    //Second Row
    x=true;y=false;
     cout<<(x?'T':'F')<<" | ";
    cout<<(y?'T':'F')<<" | ";
    //!x !y
    cout<<(!x?'T':'F')<<"  | ";
    cout<<(!y?'T':'F')<<"  |  ";
    //x&&y
    cout<<(x&&y?'T':'F')<<"   |  ";
    //x||y
    cout<<(x||y?'T':'F')<<"   |  ";
    //x^y
    cout<<(x^y?'T':'F')<<"  |   ";
    //x^y^y
    cout<<(x^y^y?'T':'F')<<"   |   ";
    //x^y^x
    cout<<(x^y^x?'T':'F')<<"   |    ";
    //!(x&&y)
    cout<<(!(x&&y)?'T':'F')<<"    |    ";
    //!x||!y
    cout<<(!x||!y?'T':'F')<<"    |    ";
    //!(x||y)
    cout<<(!(x||y)?'T':'F')<<"    |   ";
    //!x&&!y
    cout<<(!x&&!y?'T':'F')<<"    |   "<<endl;
    
    //Third Row
    x=false;y=true;
     cout<<(x?'T':'F')<<" | ";
    cout<<(y?'T':'F')<<" | ";
    //!x !y
    cout<<(!x?'T':'F')<<"  | ";
    cout<<(!y?'T':'F')<<"  |  ";
    //x&&y
    cout<<(x&&y?'T':'F')<<"   |  ";
    //x||y
    cout<<(x||y?'T':'F')<<"   |  ";
    //x^y
    cout<<(x^y?'T':'F')<<"  |   ";
    //x^y^y
    cout<<(x^y^y?'T':'F')<<"   |   ";
    //x^y^x
    cout<<(x^y^x?'T':'F')<<"   |    ";
    //!(x&&y)
    cout<<(!(x&&y)?'T':'F')<<"    |    ";
    //!x||!y
    cout<<(!x||!y?'T':'F')<<"    |    ";
    //!(x||y)
    cout<<(!(x||y)?'T':'F')<<"    |   ";
    //!x&&!y
    cout<<(!x&&!y?'T':'F')<<"    |   "<<endl;
    
    //Fourth Row
    x=false;y=false;
     cout<<(x?'T':'F')<<" | ";
    cout<<(y?'T':'F')<<" | ";
    //!x !y
    cout<<(!x?'T':'F')<<"  | ";
    cout<<(!y?'T':'F')<<"  |  ";
    //x&&y
    cout<<(x&&y?'T':'F')<<"   |  ";
    //x||y
    cout<<(x||y?'T':'F')<<"   |  ";
    //x^y
    cout<<(x^y?'T':'F')<<"  |   ";
    //x^y^y
    cout<<(x^y^y?'T':'F')<<"   |   ";
    //x^y^x
    cout<<(x^y^x?'T':'F')<<"   |    ";
    //!(x&&y)
    cout<<(!(x&&y)?'T':'F')<<"    |    ";
    //!x||!y
    cout<<(!x||!y?'T':'F')<<"    |    ";
    //!(x||y)
    cout<<(!(x||y)?'T':'F')<<"    |   ";
    //!x&&!y
    cout<<(!x&&!y?'T':'F')<<"    |   "<<endl;
    return 0;
}

