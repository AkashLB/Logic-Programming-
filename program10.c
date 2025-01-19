#include<stdio.h>
///////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Description :  It is used to peroform as 2 float values
//  Input :      float , float
//  Output :     float 
//  Author:   Akash Yogesh Kshatriya 
//  Date :    06/10/2024
// 
/////////////////////////////////////////////////////////////


float Addition(float fValue1 , float fValue2)    
{
   float fAdd = 0.0f;           //Local variables
    
    if (fValue1 < 0.0f)
    {

            fValue1 = -fValue1;

    }

    if (fValue2 <0.0f)
    {

           fValue2 = -fValue2;
           
    }
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

/*     
  Testcase1:
 Enter first number :
-10.0
Enter Second  number :
-30.345
Addition is : 40.345001

  
Testcase2:
Enter first number :
-12
Enter Second  number :
23
Addition is : 35.000000

Testcase3:
Enter first number :
12.23
Enter Second  number :
-123.34
Addition is : 135.569992
*/