#include <stdio.h>

void StrtoggleX(char *str )
{
    int iCnt = 0;

    while(*str != '\0')
    {
        
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'B')
        {
            *str = *str + 32 ;   
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

   StrtoggleX(Arr);

   printf("String After Updation is :%s\n",Arr);


    return 0;
}