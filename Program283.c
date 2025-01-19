#include<stdio.h>

int CountDigitsR(int iNo)
{
    int static iSum = 0;
    if(iNo > 0)
    {
        
        iSum = iSum + (iNo %10);
        iNo = iNo / 10 ;
        CountDigitsR(iNo);
        
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Frequency :\n");
    scanf("%d",&iValue);
    iRet = CountDigitsR(iValue);

    printf("Number of digits is : %d",iRet);
    return 0;
}