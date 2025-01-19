#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("ENter the Number of Elements : \n");
    scanf("%d",&iLength);

    ptr = (int*) malloc(iLength * sizeof(int));
      
      printf("Enter the Elements : \n");

      for(iCnt = 0 ; iCnt<iLength ; iCnt++)
      {
        
          scanf("%d",&ptr[iCnt]);
      
      }

      printf("Elements of The Array are : \n");

      for(iCnt = 0 ; iCnt<iLength ; iCnt++)
      {
        
          printf("%d\n",ptr[iCnt]);
      
      }


    free(ptr);

    return 0;
}