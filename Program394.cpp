#include<iostream>
using namespace std;

float Additionf(float no1 , float no2)
{
    float Ans = 0.0f;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    float iRet = 0.0f;
    iRet = Additionf(11,10);

    cout<<"Addition is :"<<iRet<<"\n";
    return 0;
}