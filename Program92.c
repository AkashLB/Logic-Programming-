#include<stdio.h>
#include<stdlib.h>

float  Addition(int Arr[], int iSize)
{
    int iSum = 0 , iCnt = 0 ;
    float fAvg = 0.0;
    

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {

        iSum = iSum + Arr[iCnt];
    
    }

    fAvg = iSum / iSize;

    return fAvg;
}
int main()
{

    int *ptr = NULL;
    int iLength = 0 , iCnt = 0 ;
    float fRet = 0.0;

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
     fRet = Addition(ptr , iLength);
     printf("Addition is : %f",fRet);

    //Step 5 : Deallocate that Memory 
    free(ptr);

    return 0;
}