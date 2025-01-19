#include<stdio.h>

int Reverse(int iNo)
{
  int iDigit = 0 , iSum = 0;
  int iRev = 0;
  
  if(iNo < 0)  // Updator
  {
    iNo = -iNo;
  }

  while(iNo > 0)
  {
    iDigit = iNo % 10;
    iSum = iSum + iDigit ;

    iRev = iRev *10 + iDigit;


    iNo = iNo / 10;
  }
   return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number :\n");
    scanf("%d\n",&iValue);

    iRet = Reverse(iValue);
    printf("The Reverse No: %d",iRet);

    return 0;
}