#include<stdio.h>
#include<string.h>

int StrlenX(char *ptr )
{   
    int iCount = 0;
    while(*ptr !='\0')
  {
    if(*ptr == 'a')
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

   iRet = StrlenX(Arr);
   printf("Count of a is : %d\n",iRet);

    return 0;
}