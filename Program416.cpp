#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};


template <class T>
class SinglyCL
{
    public:
    struct node<T>* head;
    struct node<T>* tail;
    int iCount;

SinglyCL();
void Insertfirst(T no);
void Insertlast(T no);
void InsertAtPos(T no,int iPos);
void Deletefirst();
void Deletelast();
void DeleteAtPos(int iPos);
void Display();
int Count();
};

template <class T> 
   SinglyCL<T>::SinglyCL()
     {
        head = NULL;
        tail = NULL;
        iCount = 0;
     }

template <class T>
void SinglyCL<T>::Insertfirst(T no)
{
     struct node<T>* newn = NULL;
     newn = new node<T>;
     newn-> data = no;
     newn-> next = NULL;

     if((head == NULL) && (tail == NULL))
     {
         head = newn;
         tail = newn;
     }
     else 
     {
         newn -> next = head;
         head = newn;

     }
     tail->next = head;
     iCount++;
}

template <class T>
void SinglyCL<T>::Insertlast(T no)
{
    
     struct node<T>* newn = NULL;
     newn = new node<T>;
     newn-> data = no;
     newn-> next = NULL;

     if((head == NULL) && (tail == NULL))
     {
         head = newn;
         tail = newn;
     }
     else 
     {
        tail->next = newn;
        tail = newn;

     }
     tail->next = head;
     iCount++;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T no, int iPos)
{
    
    int i = 0;
     struct node<T>* temp = NULL;
     struct node<T>* newn = NULL;

     if((iPos < 1)||(iPos > iCount+1))
     {
        cout<<"Invalid Position\n";
        return;
     }
     else if(iPos == 1)
     {
        Insertfirst(no);
     }
     else if(iPos == iCount+1)
     {
        Insertlast(no);
     }
     else
     {
        newn = new node<T>;
        newn-> data = no;
        newn-> next = NULL;
        temp = head;
        for(i = 1; i < iPos -1 ; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCount++;
     }
     tail->next = head;

}

template <class T>
void SinglyCL<T>:: Deletefirst()
{
    struct node<T>* temp;
    if(head == NULL && tail ==NULL)
    {
        cout<<"Linklist is Empty\n";
        return;
    }
    else if(head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        temp = head;
        head = head ->next;
        delete temp;

    }
    tail->next = head;
    iCount--;
}

template <class T>
void SinglyCL<T>::Deletelast()
{
    struct node<T>* temp = NULL;
    if((head == NULL) && (tail ==NULL))
    {
        cout<<"Linklist is Empty\n";
        return;
    }
    else if(head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        temp = head;
        while(temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail;
        tail = temp;

    }
    tail->next = head;
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    
    int i = 0;
     struct node<T>* temp = NULL;
     struct node<T>* target = NULL;

     if((iPos < 1)||(iPos > iCount))
     {
        cout<<"Invalid Position\n";
        return;
     }
     else if(iPos == 1)
     {
        Deletefirst();
     }
     else if(iPos == iCount)
     {
        Deletelast();
     }
     else
     {
        temp = head;
        for(i = 1; i< iPos-1;i++)
        {
            temp = temp ->next;
        }
        target = temp ->next;

        temp ->next = target->next;

        delete target;
        iCount--;
     }
        tail->next = head;
}

template <class T>
void SinglyCL<T>::Display()
{
    if(head == NULL && tail == NULL)
    {
        cout<<"Linklist is empty\n";
        return ;
    }
    cout<<"Elements of Linklist is :\n";
    do
    {
       cout<<" | "<<head->data<<" | ";
       head = head->next;

    }while(head != tail->next);
    cout<<"\n";
}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}
     

int main()
{
    int iRet = 0;

   SinglyCL<int> dobj;
   dobj.Insertfirst(10);
   dobj.Insertlast(20);
   dobj.InsertAtPos(15,2);
   dobj.InsertAtPos(25,4);
   dobj.DeleteAtPos(2);

    dobj.Display();
   iRet = dobj.Count();
   cout<<"Count is :"<<iRet;

   dobj.Deletefirst();
   dobj.Deletelast();

   dobj.Display();
   
   iRet = dobj.Count();
   cout<<"Count is :"<<iRet;
    return 0;
}