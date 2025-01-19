#include<stdio.h>

void DisplayTimetable(int iStd)
{
    switch(iStd)
    {
        case 8 :
        printf("Your Exam is At 9.30Am\n");
        break;

        case 9 :
        printf("Your Exam is At 9.30Am\n");
        break;

        case 10 :
        printf("Your Exam is At 9.30Am\n");
        break;
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