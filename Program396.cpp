#include<iostream>
using namespace std;

template <class T>

T AdditionD(T no1 , T no2)
{
    T Ans = 0.0;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;

    iRet = AdditionD(11,10);
    cout<<"Addition is :"<<iRet<<"\n";
   
    fRet = AdditionD(11.5f,10.0f);
    cout<<"Addition is :"<<fRet<<"\n";
    
    dRet = AdditionD(11.67,10.54);
    cout<<"Addition is :"<<dRet<<"\n";
    
    return 0;
}