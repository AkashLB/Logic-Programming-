#include<stdio.h>

void DisplayTimetable(int iStd)
{
    if(iStd==8)
    {
       printf("Your Exam is At 9.30Am\n");
    }
    else if (iStd == 9)
    {
       printf("Your Exam is At 10.30Am\n");
    }
    else if (iStd == 10)
    {
       printf("Your Exam is At 11.30Am\n");  
    }
    
}

int main()
{
    int iValue = 0;
    printf("Please Enter your Statnderd\n");
    scanf("%d\n",&iValue);

    DisplayTimetable(iValue);

    return 0;
}