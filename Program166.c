#include <stdio.h>

int CountSpace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        
        if(*str >= 'a'  && *str <= 'z')
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
    printf("Number of Small letter is : %d",iRet);

    return 0;
}