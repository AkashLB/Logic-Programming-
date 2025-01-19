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
    while(Teacher != NULL)
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }
    printf("Middle element is %d",Student->data);
}

int main()
{
    PNODE first = NULL;
    int iRet = 0, iValue = 0, iPos = 0;
    int iOption = 0;

    InsertFirst(&first,111);
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    iRet = Count(first);
    printf("%d",iRet);
    MiddleElement(first);

    MiddleElementX(first);

    return 0;
}