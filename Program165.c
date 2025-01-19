#include <stdio.h>

int CountSpace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        
        if(*str >= 'A'  && *str <= 'Z')
        {
            iCnt++;
        }
        str++;

    }
    return iCnt;
}
int main()
{

   char Arr[30];
   int iRet = 0;
   

   printf("Enter String: \n");
   scanf("%[^\n]s",Arr);     

    iRet =CountSpace(Arr);
    printf("Number of UpperCase letter is : %d",iRet);

    return 0;
}