#include<stdio.h>

int CountDigits(int iValue)
{
    int iCnt = 0;
    int iDigit = 0;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    iCnt = 0;
    while(iValue > 0)
    {
        iDigit = iValue % 10;
        iCnt++;
        printf("%d\n",iDigit);
        iValue = iValue / 10;
    }
    return iCnt ;

}
int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("enter number :\n");
    scanf("%d\n",&iNo);

    iRet=CountDigits(iNo);

    printf("the count is %d\n",iRet);
    

    return 0;
}