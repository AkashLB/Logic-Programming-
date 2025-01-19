#include<iostream>
using namespace std;

int Addition (int iValue1 , int iValue2)
{
    int iResult = 0;
    iResult = iValue1 + iValue2;

    return iResult;
}
int main()
{
  
  int iNo1 = 0 , iNo2 = 0, iRet = 0;
  
  cout<<"Enter First Number :\n";
  cin>>iNo1;

  cout<<"Enter Second Number :\n";
  cin>>iNo2;

  iRet = Addition(iNo1,iNo2);
  cout<<"Addition is : "<<iRet;

 return 0;

}