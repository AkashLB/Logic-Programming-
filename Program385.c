#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;

} NODE,*PNODE,**PPNODE;

void Insert(PPNODE head,int no)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
       temp = *head;
       while(1)
       {
          if(no > temp->data)
          {
              if(temp->rchild== NULL)
              {
                 temp ->rchild = newn;
                 break;
              }
              temp = temp->rchild;
          }
          else if(no < temp->data)
          {
             if(temp->lchild == NULL)
              {
                 temp ->lchild = newn;
                 break;
              }
              temp = temp->lchild;
          }
          else if(no == temp->data)
          {
            printf("unable to insert as element is duplicate\n");
            free(newn);
            break;
          }

       }
    }
}

void Inorder(PNODE head)
{
    if(head != NULL)
    {
        Inorder(head->lchild);
        printf("%d\n",head->data);
        Inorder(head->rchild);
    }
}

bool search(PNODE head,int no)
{
    bool bFlag = false;

    while(head != NULL)
    {
        if(no == head->data)
        {
            bFlag = true;
            break;
        }
        else if(no > head ->data)
        {
            head = head -> rchild;
        }
        else if(no < head-> lchild)
        {
            head = head ->lchild;
        }
    }
    return bFlag;
}
int CountNodes(PNODE head)
{
    static int iCount = 0;
    if(head != 0)
    {
        iCount++;
        CountNodes(head->lchild);
        CountNodes(head->rchild);
    }
    return iCount;
}
int CountParentNodes(PNODE head)
{
    static int iCount = 0;
    if(head != 0)
    {
        if(head->lchild != NULL || head -> rchild != NULL)
        {
            iCount++;
        }
        CountParentNodes(head->lchild);
        CountParentNodes(head->rchild);
    }
    return iCount;
}
int CountLeafNodes(PNODE head)
{
    static int iCount = 0;
    if(head != 0)
    {
        if(head->lchild == NULL && head -> rchild == NULL)
        {
            iCount++;
        }
        CountLeafNodes(head->lchild);
        CountLeafNodes(head->rchild);
    }
    return iCount;
}
int main()
{
    int iRet = 0;
   PNODE first = NULL;

   Insert(&first,21);
   Insert(&first,11);
   Insert(&first,51);
   Insert(&first,9);
   Insert(&first,18);
   Insert(&first,35);
   Insert(&first,75);

   iRet = CountNodes(first);
   printf("Count is %d\n",iRet);

   
   iRet = CountParentNodes(first);
   printf("Count ParentNodes %d\n",iRet);

   iRet = CountLeafNodes(first);
   printf("Number of LeafNodes %d\n",iRet);

   
    return 0;
}