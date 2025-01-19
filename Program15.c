/*
    Start 
         Accept the percentage from user 
         if percentage are less than 40 then display fail
         And if percentage is greter than or equal to 40 then display pass 
    Stop
*/
#include<stdio.h>

void DisplayResult(float fPercentage)
{
      if(fPercentage>=40.00f)
      {
        printf("you Are Pass\n");

      }
      else
      {
        printf("you Are Fail\n");
      }
}

int main()
{
    float fValue = 0.0f;

    printf("enter the percentage :\n");
    scanf("%f",&fValue);

    DisplayResult(fValue);

    return 0;
}