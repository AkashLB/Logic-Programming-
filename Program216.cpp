#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
     int iMask = 67536;
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
        cout<<"17th bit is OFF\n";
    }
    else
    {
        cout<<"17th bit is ON\n";

    }


    return 0;
}