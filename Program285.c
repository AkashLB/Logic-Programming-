#include<stdio.h>

int CountDigitsR(int iNo)
{
    int static iCnt = 0;
    int iDigit = 0;
    if(iNo > 0)
    {
        iDigit =( iNo % 10 );
        if(iDigit % 2 == 0)
        {
                
                iCnt++;

        }
        iNo = iNo / 10 ;
        CountDigitsR(iNo);
        
    }
    return iCnt;
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