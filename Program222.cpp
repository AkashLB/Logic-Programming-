#include<iostream>
using namespace std;

int ToggleBit(int iNo)
{
    int iMask = 0x10;
    int iResult = 0;
    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{

    int iValue = 0 , iMask = 0x10;
    int iResult = 0;

    cout<<"Enter the Number :\n";
    cin>>iValue;

    iResult = ToggleBit(iValue);

    cout<<"Number After bit Toggle :"<<iResult<<"\n";
   
    return 0;
}