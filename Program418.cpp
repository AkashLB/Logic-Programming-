#include<iostream>
using namespace std;

template <class T>
 struct node
{
    int data;
    struct node *next;
};


template <class T>
class Queue
{
    public :
    struct node<T>* head;
    int iCount;

    Queue();
    void enqueue (T no);
    int dequeue();
    void Display();
    int Count();
};

template <class T>
Queue<T>::Queue()
    {
        head = NULL;
        iCount = 0;
    }

template <class T>
    void Queue<T>::enqueue (T no)
    {
        struct node<T>* temp = NULL;
        struct node<T>* newn = NULL;
        newn = new node<T>;
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

template <class T>
    int Queue<T>::dequeue()
    {
        int no = 0;
        struct node<T>* temp = NULL;
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

template <class T>
    void Queue<T>::Display()
    {
        struct node<T>* temp = head;
       while(temp -> next != NULL)
       { 
         cout<<" | "<<temp->data<<" | "<<"\n";
          temp = temp->next;
       }

    }

template <class T>
    int Queue<T>::Count()
    {
          return iCount;
    }


int main()
{
    Queue<int>qobj1;

qobj1.enqueue(5);
qobj1.enqueue(7);
qobj1.enqueue(10);

qobj1.enqueue(2);
qobj1.enqueue(15);

qobj1.enqueue(23);
qobj1.enqueue(67);
qobj1.enqueue(50);

qobj1.Display();


   return 0;
}