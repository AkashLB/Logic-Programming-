#include<iostream>
using namespace std;

template <class T>
 struct node 
{
    T data;
    struct node *next;
    struct node *prev;
};

template <class T>
class DoublyLL
{
    public:
   struct node<T>* head;
   int iCount;
   DoublyLL();
   void InsertFirst(T no);
   void InsertLast(T no);
   void InsertAtPos(T no , int iPos);
   void DeleteFirst();
   void DeleteLast();
   void DeleteAtPos(int iPos);
   void Display();
   int Count();
};

template <class T>
 DoublyLL<T>:: DoublyLL()
   {
        head = NULL;
        iCount = 0;    
   }

   template <class T>
void DoublyLL<T>:: InsertFirst(T no)
   {
      struct node<T>* newn = NULL;
      newn = new node<T>;
      newn->data = no;
      newn->next = NULL;
      newn->prev = NULL;

      if(head == NULL)
      {
         head = newn;

      }
      else
      {
         newn -> next = head;
         head -> prev = newn;
         head = newn;

      }
      iCount++;
   }

   template <class T>
 void DoublyLL<T>:: InsertLast(T no)
   {
      struct node <T>* temp = NULL;
      struct node <T>* newn = NULL;
      newn = new  node<T>;
      newn->data = no;
      newn->next = NULL;
      newn->prev = NULL;

      if(head == NULL)
      {
         head = newn;

      }
      else
      {
         temp = head;
         while(temp->next != NULL)
         {
            temp = temp->next;
         }
         temp->next = newn;
         newn->prev = temp;
      }
      iCount++;
   }

   template <class T>
void DoublyLL<T>:: InsertAtPos(T no , int iPos)
   {
      int i = 0; 
      struct node<T>* temp = NULL;
      struct node<T>* newn = NULL;

     if((iPos < 1 )|| (iPos > iCount+1))
     {
        cout<<"Invalid Position\n";
        return;
     }
     else if(iPos == 1)
      {
        InsertFirst(no);
      }
      else if(iPos == iCount+1)
      {
        InsertLast(no);
      }
      else
      {
        
      newn = new node<T>;
      newn->data = no;
      newn->next = NULL;
      newn->prev = NULL;

        temp = head;
        for(i = 1;i < iPos - 1;i++)
        {
            temp = temp -> next;
        }
        newn -> next = temp->next;
        temp->next = newn;
        newn->prev = temp; 

      iCount++;
      }
   }
   template <class T>
void DoublyLL<T>:: DeleteFirst()
   {
      struct node<T>* temp = NULL;

      if(head == NULL)
      {
         cout<<"Linklist is Empty\n";
         return;
      }
      else if(head->next == NULL)
      {
         delete head;
         head = NULL;
      }
      else
      {
         temp = head;
         head = temp ->next;
         head -> prev = NULL;
         delete temp;
      }
      iCount--;
   }
template <class T>
void DoublyLL<T>::DeleteLast()
   {
       struct node<T>* temp = NULL;

      if(head == NULL)
      {
         cout<<"Linklist is Empty\n";
         return;
      }
      else if(head->next == NULL)
      {
         delete head;
         head = NULL;
      }
      else
      {
         temp = head;

         while(temp->next->next != NULL)
         {
            temp = temp->next;
         }
         delete temp->next;
         temp->next = NULL;
      }
      iCount--;
   }

   template <class T>
void DoublyLL<T>:: DeleteAtPos(int iPos)
   {
      int i = 0;
      struct node<T>* temp = NULL;
      struct node<T>* target = NULL;

      
     if((iPos < 1 )|| (iPos > iCount))
     {
        cout<<"Invalid Position\n";
        return;
     }
     else if(iPos == 1)
      {
        DeleteFirst();
      }
      else if(iPos == iCount)
      {
        DeleteLast();
      }
      else
      {
         temp = head;
         for(i = 1 ; i < iPos-1 ; i++)
         {
             temp = temp ->next;
         }
         target = temp -> next;
         temp ->next = target->next;
         target->next->prev = temp;
         iCount--;
      }
   }

   template <class T>
 void DoublyLL<T>:: Display()
   {
    struct node<T>* temp = NULL;
    temp =head;

    cout<<"Elements in LInkelist !!\n";

      while(temp != NULL)
      {
        cout<<" | "<<temp->data<<" | ";
         temp = temp -> next;
      }
   }

   template <class T>
 int DoublyLL<T>:: Count()
   {
     return iCount;
   }



int main()
{
    int iRet = 0;
    DoublyLL<int> dobj;
    dobj.InsertFirst(23);
    dobj.InsertFirst(24);

    dobj.InsertLast(45);
    dobj.InsertAtPos(34,3);
    dobj.DeleteAtPos(3);

    dobj.Display();

    dobj.DeleteFirst();
    dobj.DeleteLast();
    dobj.Display();
    

    iRet = dobj.Count();
    cout<<"Count is :"<<iRet;
}