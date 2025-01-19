#include<stdio.h>

void DisplayR(int iNo)
{

    if(1 <= iNo)
    {
           printf("%d\t",iNo);
           iNo--;
           DisplayR(iNo);

    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Frequency :\n");
    scanf("%d",&iValue);
    DisplayR(iValue);
    return 0;
}