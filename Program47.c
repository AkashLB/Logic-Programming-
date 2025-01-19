#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    printf("factors of %d Are :\n",iNo);
    
    for (iCnt = 1;iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}   

int main()
{
    int iValue = 0;
    printf("Enter the value :\n");
    scanf("%d\n",&iValue);

    DisplayFactor(iValue); 

    return 0;
}