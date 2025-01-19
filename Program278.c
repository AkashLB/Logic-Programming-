#include<stdio.h>

int Addition(int iNo)
{
    int iSum = 0 , iCnt = 1 ;
    while(iCnt <= iNo)
    {
        iSum = iSum + iCnt;
        iCnt++;
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