#include<iostream>
using namespace std;


int AdditionD(int Arr[] ,int iSize)
{
    int iSum = 0;
    int i = 0;
    for(i = 0 ; i < iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    int iRet = 0;
    int Brr[]={10,20,30,40};

    iRet = AdditionD(Brr,4);
    cout<<"Additio is :"<<iRet<<"\n";
    
    return 0;
}