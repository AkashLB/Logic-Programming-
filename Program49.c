#include<stdio.h>

int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    for (iCnt = 1;iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iCnt + iSum;
        }
    }
    return iSum;
}   

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value :\n");
    scanf("%d\n",&iValue);

    iRet = SumFactor(iValue); 
    printf("the Addition is : %d",iRet);

    return 0;
}