#include <stdio.h>

void Display(char *str)
{
    printf("Entered String is :%s\n",str);
}
int main()
{

   char Arr[30];
   int iRet = 0;
   

   printf("Enter String: \n");
   scanf("%[^\n]s",Arr);     

   Display(Arr);
    return 0;
}