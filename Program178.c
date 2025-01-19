#include <stdio.h>

void StrlwrX(char *str )
{
    int iCnt = 0;

    while(*str != '\0')
    {
        
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;

    }
   
}
int main()
{

   char Arr[30];
   int iRet = 0;
   
   

   printf("Enter String: \n");
   scanf("%[^\n]s",Arr);

   StrlwrX(Arr);

   printf("String After Updation is :%s\n",Arr);


    return 0;
}