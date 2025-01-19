#include<iostream>
using namespace std;

class Number
{
    public :
     int iNo;

     Number(int A)
     {
        iNo = A;
     }
  void Display()
  {
    int iCnt = 0;
    cout<<"The factor of "<<iNo<<" is : \n";
    
    for(iCnt = 1 ; iCnt <=iNo/2 ; iCnt++)   
     {
        
        if((iNo % iCnt == 0))
        {
            cout<<iCnt<<"\n";
        }

    }
  }
};

int main()
{
   int iValue = 0;

   cout<<"Enter Number \n";
   cin>>iValue;
   
    Number Nobj(iValue);
    Nobj.Display();

 return 0;

}