#include<iostream>
using namespace std;

int ToggleBit(int iNo , int iPos)
{
    
    int iMask = 0x1;
    int iResult = 0;
    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{

    int iValue = 0 , iMask = 0x1;
    int iResult = 0 , iLocation = 0;

    cout<<"Enter the Number :\n";
    cin>>iValue;

    cout<<"Enter the position\n";
    cin>>iLocation;

    iResult = ToggleBit(iValue , iLocation);

    cout<<"Number After bit Toggle :"<<iResult<<"\n";
   
    return 0;
}