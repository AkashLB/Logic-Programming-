#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
     int iMask = 0x10;
    bool bResult = false;

    bResult = iNo & iMask;

    if(bResult == 0)
    {
        return false;
    }

    else
    {
        return true;
    }
}

int main()
{

    int iValue = 0;

    bool bResult = false;


    cout<<"Enter Number : \n";
    cin>>iValue;

    bResult = CheckBit(iValue);

    if(bResult == false)
    {
        cout<<"Fifth bit is OFF\n";
    }
    else
    {
        cout<<"Fifth bit is ON\n";

    }


    return 0;
}