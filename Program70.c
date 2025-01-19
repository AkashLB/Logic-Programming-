#include<stdio.h>

void Display(int *iPtr,int iNo)
{
    int iCnt = 0;
    printf("Values in Array Are :\n");
    
    for(iCnt = 0; iCnt < iNo ; iCnt++)
    {
        printf("%d\n",*iPtr);
        iPtr++;
    }
}

int main()
{
    
    int Arr[4];
    int iCnt = 0;
    int iValue = 0;
    printf("Enter the value:\n")
    scanf("%d",&iValue);

    printf("Please Enter the Values : \n");
    for(iCnt = 0; iCnt<4 ; iCnt++)
    {

          scanf("%d",&Arr[iCnt]);

    }

    Display(Arr,iValue);
   
  return 0;
}