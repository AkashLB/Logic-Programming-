#include<stdio.h>

int SumDigits(int iNo)
{
  int iDigit = 0 , iSum = 0;
  
  if(iNo < 0)  // Updator
  {
    iNo = -iNo;
  }

  while(iNo > 0)
  {
    iDigit = iNo % 10;
    iSum = iSum + iDigit ;

    iNo = iNo / 10;
  }
   return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number :\n");
    scanf("%d\n",&iValue);

    iRet = SumDigits(iValue);
    printf("The Sum of All the Digits is : %d",iRet);

    return 0;
}