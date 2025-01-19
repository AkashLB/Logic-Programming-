#include <stdio.h>
#include<stdbool.h>

bool Count(char *str ,char ch)
{
    int iCnt = 0;
    bool bFlag = false;

    while(*str != '\0')
    {
        
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
       
        
        str++;

    }
    return bFlag;
}
int main()
{

   char Arr[30];
   bool bRet = false;
   char cValue ='\0';
   

   printf("Enter String: \n");
   scanf("%[^\n]s",Arr);

   printf("Enter the Charecter :\n");
   scanf(" %c",&cValue);     

    bRet =Count(Arr , cValue);
    if(bRet == true)
    {
        printf("The Charecter is available \n");
    }
    else
    {
       printf("The Charecter  is not available \n"); 
    }

    

    return 0;
}