#include<iostream>
using namespace std;


int main()
{

    int iValue = 0 , iMask = 0x10;
    int iResult = 0;

    cout<<"Enter the Number :\n";
    cin>>iValue;

    iResult = iValue ^ iMask;

    cout<<"Number After bit Toggle :"<<iResult<<"\n";
   
    return 0;
}