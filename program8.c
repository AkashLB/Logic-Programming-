#include<stdio.h>
///////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Description :  It is used to peroform os 2 float values
//  Input :      float , float
//  Output :     float 
//  Author:   Akash Yogsesh Kshatriya 
//  Date :    06/10/2024
// 
/////////////////////////////////////////////////////////////


float Addition(float fValue1 , float fValue2)    
{
   float fAdd = 0.0f;           //Local variables
  fAdd = fValue1 + fValue2;     //Business Logic 
  return fAdd;
}

///////////////////////////////////////////////////////////
//
//  This Application is used to perform Addition of 2 Numbers 
//
//////////////////////////////////////////////////////////
int main()
{
    float fNo1 = 0.0f , fNo2 = 0.0f , fAns = 0.0f ;        //Local Variables

    printf("Enter first number : \n");
    scanf("%f",&fNo1);

    printf("Enter Second  number : \n");
    scanf("%f",&fNo2);

     fAns = Addition(fNo1,fNo2);                          //Function Call

    printf("Addition is : %f\n",fAns);
    
    return 0;
}