#include <stdio.h>

int CountSpace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        str++;

        if(*str == ' ')
        {
            iCnt++;
        }

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
    printf("Number of Spaces is : %d",iRet);

    return 0;
}