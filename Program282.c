#include<stdio.h>

int CountDigitsI(int iNo)
{
    int iSum = 0;
    while(iNo > 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10 ;
        
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Frequency :\n");
    scanf("%d",&iValue);
    iRet = CountDigitsI(iValue);

    printf("Number of digits is : %d",iRet);
    return 0;
}