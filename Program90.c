#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Search(int Arr[], int iSize , int iNo)
{
    int  iCnt = 0;
    
    
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
           break; 
        }
       
    }
     if(iCnt == iSize)
    {
            return false;
    }

    else
    {
            return true;
    }

}
int main()
{

    int *ptr = NULL;
    int iLength = 0 , iCnt = 0 , iValue = 0;
    bool bRet = false;

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
    printf("Enter the Value that you want to Search\n");
    scanf("%d",&iValue);
    //Step 4 : Perform Operations 
    
     bRet = Search(ptr , iLength , iValue);

      if(bRet == true)
     {
       
        printf("the element is Present \n");

     }
     else
     {
        
        printf("the element is Not Present \n");

     }
     


    //Step 5 : Deallocate that Memory 
    free(ptr);

    return 0;
}