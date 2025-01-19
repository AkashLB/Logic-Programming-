#include<stdio.h>
///////////////////////////////////////////////////////////
//
//  Function Name : CircleArea 
//  Description :  It is used to peroform as 1 float values
//  Input :      float 
//  Output :     float 
//  Author:   Akash Yogesh Kshatriya 
//  Date :    12/10/2024
// 
/////////////////////////////////////////////////////////////


int CircleArea(float fValue)
{
    float fAns = 0.0f;
    fAns = 3.14f * fValue * fValue;
    return fAns;
}
///////////////////////////////////////////////////////////
//
//  This Application is used to perform Calculate Area of Circle 
//
//////////////////////////////////////////////////////////

int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the Radius of Circle \n");
    scanf("%f",&fRadius);

     fArea = CircleArea(fRadius);
     printf("Area of Circle is : %f\n",fArea);

    return 0;
}