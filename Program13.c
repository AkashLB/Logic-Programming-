/*
     Start 
          Accept the total Marks
          Accept the obtaines Marks
          Calculate the percentage As (obtained / total)*100
          Display the Calculated Percentage
    Stop
*/
#include <stdio.h>

float CalculatePercentage(int iValue1 , int iValue2)
{     
     float fAns = 0.0f;
     fAns = ((float)iValue1 / (float)iValue2)*100;
     return fAns;

}

int main()
{
    int iTotalMarks = 0;
    int iObtainedMark = 0;
    float fPercentage =0.0f;
    
    printf("enter total marks");
    scanf("%d",&iTotalMarks);

    printf("enter Obtained marks \n");
    scanf("%d",&iObtainedMark);
    
    fPercentage = CalculatePercentage( iObtainedMark,iTotalMarks);
    printf("Percentage is :%f\n" ,fPercentage);
    return 0;
}