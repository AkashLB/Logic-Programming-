#include <stdio.h>

int Count(char *str ,char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        
        if(*str == ch)
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

    iRet =Count(Arr ,'m');
    printf("Number  is : %d",iRet);

    return 0;
}