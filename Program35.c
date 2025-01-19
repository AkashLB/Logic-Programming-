#include<stdio.h>

void Display(int iValue)
{
   int  iCnt = 0;

    iCnt =1;
    while(iCnt <= iValue)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}

int main()
{
    int iNo1 = 0;
    printf("how mny times you want to print \n");
    scanf("%d\n",&iNo1);

    Display(iNo1);

    return 0;
}