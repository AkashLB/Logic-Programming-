#include<iostream>

using namespace std;

void swap(int *p , int *q)
{
  int temp = 0;
  temp = *p;
  *p = *q;
  *q = temp;

}

int main()
{
    int iNo1 = 0 , iNo2 = 0;

    cout<<"enter first number :";
    cin>>iNo1;

    cout<<"enter Second number :";
    cin>>iNo2;

    swap(iNo1 , iNo2);

    cout<<"value After Swap iNo1 is : "<<iNo1<<"\n";
     cout<<"value After Swap iNo2 is : "<<iNo2<<"\n";
}