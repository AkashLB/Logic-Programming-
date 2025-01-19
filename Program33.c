#include<stdio.h>

void Display(int iNo){

    int iCnt = 0;

for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    
    int iFrequency = 0;

    printf("Enter the Frequency\n");
    scanf("%d\n",&iFrequency);

    Display(I=iFrequency);

    return 0;
}