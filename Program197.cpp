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

    void Reverse()
    {
        int iStart = 0;
        int iEnd = iNo -1 ;
        int temp = 0;

        while(iStart < iEnd )
        {
            temp = Arr[iStart];
            Arr[iStart] =Arr[iEnd];
            Arr[iEnd] = temp;

            iStart++;
            iEnd--;
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
     Aobj.Reverse();

     cout<<"Elements of array after Reversal :\n";
     Aobj.Display();
   
    return 0;
}