#include<iostream>
using namespace std;


float AdditionD(float Arr[] ,int iSize)
{
    float iSum = 0.0f;
    int i = 0;
    for(i = 0 ; i < iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    float iRet = 0.0f;
    float Brr[]={10.34567f,20.43f,30.435f,40.23f};

    iRet = AdditionD(Brr,4);
    cout<<"Addition is :"<<iRet<<"\n";
    
    return 0;
}