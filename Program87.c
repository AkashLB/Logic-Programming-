#include<stdio.h>
#include<stdlib.h>

void AdditionEvenOdd(int Arr[], int iSize)
{
    int  iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)  
        {      
            
             iSumEven = iSumEven + Arr[iCnt];
            
        } 

        else  
        {

           iSumOdd = iSumOdd + Arr[iCnt];

        }  
    
    }

    printf("Addition of Even Elements : %d\n",iSumEven);
    printf("Addition of Even Elements : %d\n",iSumOdd);
}
int main()
{

    int *ptr = NULL;
    int iLength = 0 , iCnt = 0 , iRet = 0;

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
    
     AdditionEvenOdd(ptr , iLength);


    //Step 5 : Deallocate that Memory 
    free(ptr);

    return 0;
}