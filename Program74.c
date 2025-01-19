#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
    int *ptr = NULL;

    printf("ENter the Number of Elements : \n");
    scanf("%d",&iLength);

    ptr = (int*) malloc(iLength * sizeof(int));
      
    free(ptr);

    return 0;
}