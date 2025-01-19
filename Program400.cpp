#include<iostream>
using namespace std;


double AdditionD(double Arr[] ,int iSize)
{
    double iSum = 0.0;
    int i = 0;
    for(i = 0 ; i < iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    double iRet = 0.0;
    double Brr[]={10.34567,20.43,30.435,40.23};

    iRet = AdditionD(Brr,4);
    cout<<"Addition is :"<<iRet<<"\n";
    
    return 0;
}