#include<stdio.h>

void Displayi()
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= 4)
    {
           printf("*\n");
           iCnt++;
    }
}
int main()
{
    Displayi();
    return 0;
}