#include<stdio.h>

int main()
{
    
    
    int Arr[4];
    int iCnt = 0;

    printf("Please Enter the Values : \n");

    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);

    printf("The OutPut is : \n");

    for(iCnt ; iCnt<4 ; iCnt++)
   {

    printf("%d\n",Arr[iCnt]);

   }
    
    return 0;
}