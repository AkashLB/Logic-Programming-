#include<stdio.h>

void DisplayDigits(int iValue)
{
    if(iValue < 0)
    {
        iValue = -(iValue);
    }
    int iDigit = 0;
    while(iValue > 0)
    {
        iDigit = iValue % 10;
        printf("%d\n",iDigit);
        
        iValue = iValue / 10;
    }

}
int main()
{
    int iNo = 0;

    printf("enter number :\n");
    scanf("%d\n",&iNo);

    DisplayDigits(iNo);
    

    return 0;
}