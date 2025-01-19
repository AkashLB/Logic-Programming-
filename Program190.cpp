#include<iostream>
using namespace std;

int main()
{
    int iLength = 0 , iCnt = 0;
    int *Arr = NULL;

    cout<<"Enter number of Elements that you Want to Store : \n";
    cin>>iLength;

    Arr = new int[iLength];

    cout<<"Enter The Values : \n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>Arr[iCnt];
    }
     
     cout<<"Values Are : \n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }

    delete []Arr;


    return 0;
}