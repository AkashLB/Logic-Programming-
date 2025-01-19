#include<stdio.h>

void DisplayDigits(int iValue)
{
    int iDigit = 0;
    while(iNo > 0)
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