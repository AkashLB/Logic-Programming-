#include<stdio.h>

void Display(int *iPtr)
{
    int iCnt = 0;
    printf("Values in Array Are :\n");
    
    for(iCnt = 0; iCnt < 4 ; iCnt++)
    {
        printf("%d\n",*iPtr);
        iPtr++;
    }
}

int main()
{
    
    int Arr[4];
    int iCnt = 0;

    printf("Please Enter the Values : \n");
    for(iCnt = 0; iCnt<4 ; iCnt++)
    {

          scanf("%d",&Arr[iCnt]);

    }

    Display(Arr);
   
  return 0;
}