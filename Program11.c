#include<stdio.h>

int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the Radius of Circle \n");
    scanf("%f",&fRadius);

    fArea = 3.14f * fRadius * fRadius ;

    printf("Area of Circle is : %f\n",fArea);

    return 0;
}
