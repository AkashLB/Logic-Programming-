#include<stdio.h>
#include<string.h>

int Count(char *ptr )
{   
    int iCount = 0;
    while(*ptr !='\0')
  {
    if(*ptr >= 'a' && *ptr<='z')
    {
        iCount++;
    }
     ptr++;

  }
  return iCount;
}
int main()
{

   char Arr[30];
   int iRet = 0;
   

   printf("Enter String: \n");
   scanf("%[^\n]s",Arr);     

   iRet = Count(Arr);
   printf("Count of Smallcase is : %d\n",iRet);

    return 0;
}