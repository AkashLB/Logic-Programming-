#include<stdio.h>

void Display(int iFrequency)
{
    int  iCnt = 0;
    for(iCnt =1 ; iCnt<=iFrequency; iCnt++)
    {
        printf("Jay Ganesh..\n");
    }


}
int main()
{
     int iCounter = 0;
    printf("Enter How Many times you Want to Print Jay Ganesh\n");
    scanf("%d",&iCounter);
    
    Display(iCounter);
    return 0;
}