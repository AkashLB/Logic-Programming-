#include<stdio.h>

int Addition(int iNo)
{
    int static iSum = 0 ;
    int static iCnt = 1 ;
    if(iCnt <= iNo)
    {
        iSum = iSum + iCnt;
        iCnt++;
        Addition(iNo);
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Frequency :\n");
    scanf("%d",&iValue);
    iRet = Addition(iValue);

    printf("Addition is : %d",iRet);
    return 0;
}