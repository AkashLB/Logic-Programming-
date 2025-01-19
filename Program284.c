#include<stdio.h>

int CountEvenDigitsI(int iNo)
{
    int iCnt = 0 , iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }   
        iNo = iNo / 10 ;
        
    }
    return iCnt;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Frequency :\n");
    scanf("%d",&iValue);
    iRet = CountEvenDigitsI(iValue);

    printf("Number of digits is : %d",iRet);
    return 0;
}