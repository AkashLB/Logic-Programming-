#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE;

class Queue
{
    public :
    PNODE head;
    int iCount;

    Queue()
    {
        head = NULL;
        iCount = 0;
    }
    void enqueue (int no)
    {
        PNODE temp = NULL;
        PNODE newn = NULL;
        newn = new NODE;
        newn -> data = no;
        newn -> next = NULL;
        if(head == NULL)
        {
            head = newn;

        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp ->next;
            }
            temp->next = newn;
        }
        iCount++;
    }
    int dequeue()
    {
        int no = 0;
        PNODE temp = NULL;
        if(head == NULL)
        {
           cout<<"Stack is Empty\n";
            return -1;
        }
        else if(head->next == NULL)
        {
            no = head->data;
            free(head);
            head = NULL;

        }
        else
        {
            no = head->data;
            temp = head;
            head = head ->next;
            free(temp);
        }
        iCount--;
        return no;

    }
    void Display()
    {
        PNODE temp = head;
       while(temp -> next != NULL)
       { 
         cout<<"element is "<<temp->data;
          temp = temp->next;
       }

    }
    int Count()
    {
          return iCount;
    }
};

int main()
{
    Queue qobj1;
    Queue qobj2;
    Queue qobj3;

qobj1.enqueue(5);
qobj1.enqueue(7);
qobj1.enqueue(10);


qobj1.enqueue(2);
qobj1.enqueue(15);

qobj1.enqueue(23);
qobj1.enqueue(67);
qobj1.enqueue(50);


   return 0;
}