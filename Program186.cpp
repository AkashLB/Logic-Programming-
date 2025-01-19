#include<iostream>
using namespace std;

class Arithmatic
{
    public : 
      int iValue1 ;
      int iValue2 ;
     

      Arithmatic(int A , int B)
      {
        iValue1 = A;
        iValue2 = B;
      }

      int Addition()
      {
        int iResult = 0;
        iResult = iValue1 + iValue2;

        return iResult;
      }
};
int main()
{
  
  int iNo1 = 0 , iNo2 = 0, iRet = 0;
  
  cout<<"Enter First Number :\n";
  cin>>iNo1;

  cout<<"Enter Second Number :\n";
  cin>>iNo2;

  Arithmatic aobj(iNo1,iNo2);
  cout<<sizeof(aobj)<<"\n";
  
  iRet = aobj.Addition();
  cout<<"Addition is : "<<iRet;

 return 0;

}