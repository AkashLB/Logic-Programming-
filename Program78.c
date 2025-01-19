#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[] , int iSize)
{
    int iSum = 0;
    int iCounter = 0;

    for(iCounter = 0 ; iCounter < iSize ;iCounter++)
    {
        iSum = iSum + Arr[iCounter];
    } 
    return iSum;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("ENter the Number of Elements : \n");
    scanf("%d",&iLength);

    ptr = (int*) malloc(iLength * sizeof(int));
      
      printf("Enter the Elements : \n");

      for(iCnt = 0 ; iCnt<iLength ; iCnt++)
      {
        
          scanf("%d",&ptr[iCnt]);
      
      }

      printf("Elements of The Array are : \n");

     iRet = Addition(ptr , iLength);
     printf("The Addition is %d ",iRet);

     free(ptr);

    return 0;
}