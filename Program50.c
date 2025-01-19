#include<stdio.h>
#include<stdbool.h>


bool CheckPerfect(int iNo)
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
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}   

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the value :\n");
    scanf("%d\n",&iValue);

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is a Perfect number \n",iValue);
    }
    else
    {
        printf("%d is not a Perfect number \n",iValue);
    }    

    return 0;
}