#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
     int iMask = 0x44;
    bool bResult = false;

    bResult = iNo & iMask;

    if(bResult == iMask)
    {
        return true;
    }

    else
    {
        return false;
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
        cout<<"3rd and 7th bit are off\n";
    }
    else
    {
        cout<<"3rd and 7th bit are on\n";

    }


    return 0;
}