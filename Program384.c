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
int main()
{
    bool bRet = false;
   PNODE first = NULL;

   Insert(&first,51);
   Insert(&first,21);
   Insert(&first,101);

   Inorder(first);
 
 bRet = search(first,31);
 if(bRet == true)
 {
    printf("Element is present in BST");
 }
 else
 {
    printf("Element is not present in BST");
 }


    return 0;
}