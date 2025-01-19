#include<iostream>
using namespace std;

class Array
{
   public :
    int iNo ;
    int *Arr ;

    Array(int A)
    {
        iNo = A;
        Arr = new int[iNo];

    }
    ~Array()
    {
        delete []Arr;
    }
    void Accept()
    {
        int iCnt = 0;
         cout<<"Enter The Values : \n";

    for(iCnt = 0 ; iCnt < iNo ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    }

    void Display()
    {
        cout<<"values Are :\n";

        int iCnt = 0;

         for(iCnt = 0 ; iCnt < iNo ; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
    }
   

};
int main()
{
    int iLength = 0 ;

    cout<<"Enter number of Elements that you Want to Store : \n";
    cin>>iLength;

     Array Aobj(iLength);
     Aobj.Accept();
     Aobj.Display();
   
    

    return 0;
}