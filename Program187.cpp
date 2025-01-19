#include<iostream>
using namespace std;

void Display(int iNo)
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

int main()
{
   int iValue = 0;

   cout<<"Enter Number \n";
   cin>>iValue;

   Display(iValue);

 return 0;

}