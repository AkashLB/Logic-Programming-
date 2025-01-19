#include <stdio.h>

void Update(char *str )
{
    int iCnt = 0;

    while(*str != '\0')
    {
        
        if(*str == 'a')
        {
            *str = 'd';
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

   Update(Arr);

   printf("String After Updation is :%s\n",Arr);


    return 0;
}