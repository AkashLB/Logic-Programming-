#include<stdio.h>
#include<stdlib.h>

void ReverseDisplay(int Arr[], int iSize)
{
    int iCnt = 0 ;

    for(iCnt = iSize -1 ; iCnt >=0  ; iCnt--)
    {
            printf("%d\n",Arr[iCnt]);
    }
}
int main()
{

    int *ptr = NULL;
    int iLength = 0 , iCnt = 0 ;
    int iRet = 0;

    //Step 1: Accept the Number of Elements from User
    printf("enter Number of Elements : \n");
    scanf("%d",&iLength);
    
    //Step 2 : Allocate That Memory Dynamically
    ptr = (int*) malloc (iLength * sizeof(int));
    
    //Step 3 : Accept the Values And Store into Dynamic memory
    printf("enter the Elements:\n");
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {

        scanf("%d",&ptr[iCnt]);

    }
    //Step 4 : Perform Operations 
     ReverseDisplay(ptr , iLength);


    //Step 5 : Deallocate that Memory 
    free(ptr);

    return 0;
}