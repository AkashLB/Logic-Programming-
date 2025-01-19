#include<stdio.h>

void Display(int *iPtr)
{
    printf("Values in Array Are :\n");
    s
        printf( "%d\n",iPtr[0] );
        printf( "%d\n",iPtr[1] );
        printf( "%d\n",iPtr[2] );
        printf( "%d\n",iPtr[3] );
}

int main()
{
    
    int Arr[4];
    int iCnt = 0;

    printf("Please Enter the Values : \n");
    for(iCnt = 0; iCnt<4 ; iCnt++)
    {

          scanf("%d",&Arr[iCnt]);

    }

    Display(Arr);
   
  return 0;
}