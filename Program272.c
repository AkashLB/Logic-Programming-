#include<stdio.h>

void DisplayR(int iNo)
{
   static int iCnt = 1;

    
    if(iCnt <= iNo)
    {
           printf("*\n");
           iCnt++;
           DisplayR(iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Frequency :\n");
    scanf("%d",&iValue);
    DisplayR(iValue);
    return 0;
}