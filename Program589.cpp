#include<stdio.h>
#include<stdlib.h>

struct node
{
     int data;
     struct node *next;
    

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head , int no)
{
   PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
          *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }

}

void InsertLast(PPNODE head , int no)
{
   PNODE newn = NULL;
   PNODE temp = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
          *head = newn;
    }
    else
    {
        temp = *head; 
        while(temp->next != NULL)
        {
            temp = temp->next;
        } 

        temp->next = newn;
    }

}

void Display(PNODE head)
{
   
   while(head != NULL)
   {
      printf("| %d | -> ",head->data);
      head = head->next;
   }
   printf("NULL\n");

}
int Count(PNODE head)
{
   int iCount = 0;
   while(head != NULL)
   {
      iCount++;
      head = head->next;
   }
   return iCount;

}
void DeleteFirst(PPNODE head)
{
    PNODE temp;
    if(*head == NULL)
    {
        return;
    }
    else if((*head) -> next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp =*head;
        *head =(*head)->next;
        free(temp);

    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp;
    if(*head == NULL)
    {
        return;
    }
    else if((*head) -> next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
          temp =*head;
          while(temp ->next ->next != NULL)
          {
             temp = temp ->next;
          }
          free(temp->next);
          temp->next = NULL;

    }
}

void InsertAtPos(PPNODE head , int no , int iPos)
{
    int CountNode = 0;
    int i = 0;

    CountNode = Count(*head);
    PNODE newn = NULL;
    PNODE temp = NULL;

    if((iPos < 1 )||(iPos >CountNode +1))
    {
        printf("Invalid Position\n");
        return;
    }

    else if(iPos == 1)
    {
        InsertFirst(head ,no);

    }
    else if( iPos == CountNode + 1)
    {
       InsertLast(head ,no); 
    }
    else
    {
       newn = (PNODE) malloc (sizeof(NODE));
       newn -> data = no;
       newn -> next = NULL;

       temp = *head;

       for(i = 1 ; i < iPos-1 ; i++)
       {
         temp = temp -> next;
       }
       newn-> next = temp->next;
       temp -> next = newn;

    }
}

void DeleteAtPos(PPNODE head , int iPos)
{
    int CountNode = 0;
    int i = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    CountNode = Count(*head);

    if((iPos < 1 )||(iPos > CountNode))
    {
        printf("Invalid Position\n");
        return;
    }

    else if(iPos == 1)
    {
        DeleteFirst(head);

    }
    else if( iPos == CountNode)
    {
       DeleteLast(head); 
    }
    else
    {
        temp = *head ;
        
        for(i = 1; i<iPos -1 ; i++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target ->next;
        free(target);

    }
}


int main()
{
    int iRet = 0 , iPos = 0, iValue = 0;
    PNODE first = NULL;
    int iOption =0;

    while(1)
    {
        printf("_____________________________________________");
        printf("1 : Insert new elemet at first position\n");
        printf("2 : Insert new elemet at last position\n");
        printf("1 : Insert new elemet at given position\n");
        printf("1 : Delete the elemet at first position\n");
        printf("1 : Delete the elemet at last position\n");
        printf("1 : Delete the elemet at given position\n");
        printf("1 : Display the elemets \n");
        printf("1 : Count the elemet\n");

        if(iOption == 1)
        {
            printf("Enter the element :\n");
            scanf("%d",&iValue);

            InsertFirst(&first,iValue);
        }

        else if(iOption == 2)
        {
            
            printf("Enter the element :\n");
            scanf("%d",&iValue);

            InsertLast(&first,iValue);
        }

        else if( iOption == 3)
        {
            
            printf("Enter the element :\n");
            scanf("%d",&iValue);

            
            printf("Enter the Position :\n");
            scanf("%d",&iPos);

            InsertAtPos(&first,iValue,iPos);
        }

        else if(iOption == 4)
        {
            DeleteFirst(&first);
            printf("First Element deleted succesfully :\n");
        }

        
        else if(iOption == 5)
        {
            DeleteLast(&first);
            printf("Last Element deleted succesfully :\n");
        }

        
        else if(iOption == 6)
        {
            printf("Enter the position that you want to Delete");
            scanf("%d",&iPos);

            DeleteAtPos(&first,iPos);
            printf(" Element deleted succesfully :\n");
        }
        else if(iOption == 7)
        {
            Display(first);
        }
        else if(iOption == 8)
        {
            Count(first);
        }
        else if(iOption == 9)
        {
            printf("Terminating the Shell\n");
            break;
        }
        else
        {
            printf("Invalid option is given\n");
        }
    }


   
    return 0;
}