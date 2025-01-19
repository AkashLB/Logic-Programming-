#include<iostream>
using namespace std;

bool CheckBit(int iNo , int iPos)
{
    int iResult = 0;
    int iMask = 0x1;
    iMask = iMask << (iPos - 1);
    
    iResult = iNo & iMask;

    if(iResult == iMask)
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
    int iLocation = 0;
    bool bRet = false ;

    cout<<"Enter the Number :\n";
    cin>>iValue;

    cout<<"Enter the Position :\n";
    cin>>iLocation;

    bRet = CheckBit(iValue , iLocation);

    if(bRet == true)
    {
        cout<<"Bit is On\n";
    }

    else
    {
        cout<<"Bit is Off\n";
    }

    
    return 0;
}