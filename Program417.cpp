#include<iostream>
using namespace std;
 
template <class T>
struct node
{
    int data;
    struct node *next;
};

template <class T>
class stack
{
    public :
    struct node<T>* head;
    int iCount;

    stack();
    void push (T no);
    int pop();
    void Display();
    int Count();
};

template <class T>
stack<T>::stack()
    {
        head = NULL;
        iCount = 0;
    }
template <class T>
    void stack<T>::push (T no)
    {
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
            newn -> next = head;
            head = newn;
        }
        iCount++;
    };

template <class T>
    int stack<T>::pop()
    {
        int no = 0;
        struct node<T>* temp = NULL;
        if(head == NULL)
        {
            printf("Stack is Empty\n");
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
    void stack<T>::Display()
    {
        struct node<T>* temp = head;
       while(temp -> next != NULL)
       { 
         cout<<" | "<<temp->data<<" | "<<"\n";
          temp = temp->next;
       }

    }

template <class T>
    int stack<T>::Count()
    {
          return iCount;
    }

int main()
{
    int iRet = 0;
    stack<int> Sobj;
    Sobj.push(101);
    Sobj.push(51);
    Sobj.push(21);
    Sobj.push(11);
    Sobj.Display();

   iRet =  Sobj.pop();
   cout<<"Pop element is "<<iRet;

   return 0;
}