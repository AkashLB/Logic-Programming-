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
int main()
{
    float iNo1 = 0.0f , iNo2 = 0.0f , iAns = 0.0f ;

    printf("Enter first number : \n");
    scanf("%f",&iNo1);

    printf("ENter Second  number : \n");
    scanf("%f",&iNo2);

    iAns = iNo1 + iNo2;

    printf("Addition is : %f\n",iAns);
    
    return 0;
}