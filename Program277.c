#include<stdio.h>

void DisplayR(int iNo)
{

    if(1 <= iNo)
    {
           printf("%d\n",iNo);
           iNo--;
           DisplayR(iNo);

    }
    printf("End of DisplayR\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the Frequency :\n");
    scanf("%d",&iValue);
    DisplayR(iValue);
    return 0;
}