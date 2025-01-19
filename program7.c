/*
problem statement :
Wirte a program whuch is used to perform ADDITION of two numbers._
*/
/*
 step1: understand the problem statement 
 user is going to entr the data in decimal format 
 if entered data is negative we have to convert it to positive value.
*/

/*
   START
    Accept first input 
    Accept Second input 
    if any of the input is negative then convert it into Positve 
    perform the addition of that accepted values
     Display the addition
   STOP
*/
/*
     Step3: Decide the programming Language
     According to the problem Statement We select C programming    
*/
/*
    Write the program
*/
#include<stdio.h>

float Addition(float fValue1 , float fValue2)
{
   float fAdd = 0.0f;
  fAdd = fValue1 + fValue2;
  return fAdd;
}
int main()
{
    float fNo1 = 0.0f , fNo2 = 0.0f , fAns = 0.0f ;

    printf("Enter first number : \n");
    scanf("%f",&fNo1);

    printf("Enter Second  number : \n");
    scanf("%f",&fNo2);

     fAns = Addition(fNo1,fNo2);

    printf("Addition is : %f\n",fAns);
    
    return 0;
}