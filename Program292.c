#include<stdio.h>

void Display(int *Arr , int iSize)
{
    for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}
int main()
{
    int brr [] = {10,20,30,40,50};

    Display(brr,5);
}