#include<stdio.h>

void DisplayR()
{
    static int iCnt = 1;


    if(iCnt <= 4)
    {
           printf(" %d*\n",iCnt);
           iCnt++;
           DisplayR();        //Recursive Call
    }
}
int main()
{
    printf("Inside main\n");
    DisplayR();

    printf("End of  main\n");
    return 0;
}