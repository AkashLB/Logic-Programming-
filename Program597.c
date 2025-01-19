#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
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

void Display(PNODE head)
{
    printf("Elements of LinkedList are : \n");

    while(head != NULL)
    {
        printf("| %d |->",head->data);
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
        head = head -> next;
    }

    return iCount;
}

void MiddleElement(PNODE head)
{
    PNODE temp = head;
    int i = 0; 
    int CountNode = Count(head);
    int MiddleNode = 0;
    MiddleNode = (CountNode /2);
     for(i = 1 ; i <= MiddleNode ; i++)
     {
        temp = temp -> next;
     }

     printf("%d",temp->data);
}

void MiddleElementX(PNODE head)
{
    PNODE Teacher = head;
    PNODE Student = head;
    while((Teacher != NULL) && Teacher->next != NULL)
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }
    printf("Middle element is %d",Student->data);
}

bool LoopCheck(PNODE head)
{
    PNODE Teacher = head;
    PNODE Student = head;

        bool bFlag = false;
    while((Teacher != NULL) && (Teacher -> next != NULL))
    {
        Teacher = Teacher->next->next;
        Student = Student->next;

        if(Teacher == Student)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    PNODE first = NULL;
    PNODE temp1 = NULL , temp2 = NULL;
    bool bRet = false;

    InsertFirst(&first,121);    
    InsertFirst(&first,111);
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);
      
      temp1 = first;
      temp2 = first;

      temp1 = temp1-> next->next;
      temp2 = temp2->next->next->next->next->next;

      temp2->next = temp1;

      bRet = LoopCheck(first);

      if(bRet == true)
      {
        printf("Loop Detected\n");
      }
      else
      {
        printf("There is no loop");
      }

    return 0;
}