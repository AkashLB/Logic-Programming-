#include<stdio.h>

void Reverse(char *str)
{
     char *Start = str;
     char *end = str;

     char temp ='\0';

     while(*end !='\0')
     {
          end++;
     }

     end--;

    while(end > Start)
    {
        temp = *Start;
        *Start = *end;
        *end = temp;


         Start++;
         end--;
    }
}
int main()
{
    char Arr [30];

    printf("Enter String :\n");
    scanf("%[^\n]s",Arr);

    Reverse(Arr);

   printf("String After Reversal : %s\n",Arr);


    return 0;
}