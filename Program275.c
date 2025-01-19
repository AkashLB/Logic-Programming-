#include<stdio.h>

void DisplayI(int iNo)
{
    while(0 < iNo)
    {
           printf("%d\t",iNo);
           iNo--;
        
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Frequency :\n");
    scanf("%d",&iValue);
    DisplayI(iValue);
    return 0;
}