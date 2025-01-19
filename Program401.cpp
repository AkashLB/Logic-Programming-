#include<iostream>
using namespace std;

template<class T>
T AdditionD(T Arr[] ,int iSize)
{
    T iSum = 0.0;
    int i = 0;
    for(i = 0 ; i < iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    double dRet = 0.0;
    int iRet = 0;
    float fRet = 0.0f;
     int Brr[]={10,20,30,40,50};

    dRet = AdditionD(Brr,4);
    cout<<"Addition is :"<<dRet<<"\n";   
  //  iRet = AdditionD(Brr,4);
   // cout<<"Addition is :"<<iRet<<"\n";

   // fRet = AdditionD(Brr,4);
   // cout<<"Addition is :"<<fRet<<"\n";
    
    
    return 0;
}